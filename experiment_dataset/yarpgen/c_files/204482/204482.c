/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 += (((((arr_10 [i_3] [i_2 - 3] [i_1] [i_0] [i_0]) ? var_9 : -34)) >> ((((-34 ? -28 : 61)) + 33))));
                            var_22 = (max((min((arr_7 [i_1] [i_2] [i_1 - 1] [i_1 + 1]), (arr_7 [i_1] [i_2] [i_1 + 1] [i_1 - 2]))), (((arr_7 [i_1] [i_2] [i_1 - 1] [i_1 + 1]) - (arr_7 [i_1] [i_2] [i_1 + 1] [i_1 - 2])))));
                            var_23 -= 1909872120;
                        }
                    }
                }
                arr_12 [i_0] = var_12;
                var_24 = (min(var_24, (584097932 & 57994)));
            }
        }
    }
    var_25 = ((1 ? (7542 % var_7) : (!-11539)));
    #pragma endscop
}
