/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_2));
    var_15 = (max(((max((min(var_10, var_8)), ((var_2 ? var_10 : var_0))))), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (min(((((((arr_4 [i_0]) ? (arr_2 [i_0]) : var_0))) ? (!101) : (((arr_2 [i_1]) - var_4)))), ((((arr_3 [i_1 + 2] [i_1 + 1]) != (arr_3 [i_1 - 1] [i_1 + 2]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_3] [10] [i_3] [9] = (((max(192, 517004917)) * (arr_1 [i_0])));
                            var_17 = (min(var_17, (arr_9 [i_0] [i_1 - 1] [i_2] [i_0] [i_2] [i_3])));
                            arr_13 [i_3] = (min((~var_13), 152));
                        }
                    }
                }
            }
        }
    }
    var_18 = (((~var_8) ? var_9 : var_10));
    var_19 ^= var_10;
    #pragma endscop
}
