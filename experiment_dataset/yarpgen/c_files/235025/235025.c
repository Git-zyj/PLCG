/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = ((~((var_9 << (min(var_1, var_9))))));
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((arr_2 [i_1]) ? (((-1 * 55061) * -1)) : (arr_1 [i_0]))))));
                var_16 = (max(var_16, ((((((max(139, var_9))) ? (arr_3 [i_1] [i_1]) : var_5)) ^ var_11))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (10009579809284542779 <= 1);
                                var_18 = ((-1 ? (-1 ^ -12) : ((5 ? (arr_7 [i_0] [i_1 - 1] [i_1 - 2] [i_0]) : 7519937971049413067))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_19 += ((min((var_11 * var_3), var_1)));
                            arr_18 [i_0] [i_0] [i_0] [i_0] = (((min(127, -7519937971049413054))) ? (((arr_17 [i_5] [i_5] [i_5 - 3] [i_5]) ? ((var_2 ? (arr_15 [i_0] [i_0]) : var_7)) : var_8)) : (min((arr_16 [i_1 + 1] [i_1 - 1]), (arr_16 [i_1 + 1] [i_1 + 1]))));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((min(var_1, 1)))) >= var_4);
    #pragma endscop
}
