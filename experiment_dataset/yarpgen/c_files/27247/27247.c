/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((var_11 ? 1502026580 : (min(var_10, 1502026585))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = var_3;
                                arr_13 [i_4 - 1] [i_1] [i_2] [i_1] [i_0] = -12559;
                            }
                        }
                    }
                    arr_14 [i_1] [i_0] [i_1] [i_2] = (((((((((arr_3 [i_1] [i_1]) ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : var_7))) ? var_9 : (((arr_0 [i_0]) - (arr_8 [i_1] [i_1])))))) ? var_7 : ((1502026595 ? 1502026556 : 1))));
                    arr_15 [i_2 + 1] [i_1] [i_0] = (((arr_4 [i_1]) != (!1502026579)));
                    var_14 ^= ((~(arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 2])));
                }
            }
        }
    }
    #pragma endscop
}
