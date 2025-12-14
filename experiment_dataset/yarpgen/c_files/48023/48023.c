/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_10 ^ var_4) ? -3166893247 : ((~((var_2 ? var_10 : -5624075038766376154))))));
    var_16 *= max((max(var_2, (var_12 + var_14))), ((((((-5624075038766376154 ? var_9 : var_0))) ? var_4 : var_2))));
    var_17 = min(var_4, (max(var_8, var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_2 [i_0]);
                arr_5 [i_0] = (((arr_1 [i_0]) ? (((-(arr_0 [i_1] [i_0])))) : (((arr_2 [i_0]) << (-319428771810610794 + 319428771810610807)))));
                arr_6 [i_1] = (((((((max((arr_0 [i_0] [i_1]), var_9)) > (((min((arr_0 [i_0] [i_1]), (arr_1 [1]))))))))) <= (max(((5624075038766376154 ? -31974 : 2883290063)), (~var_6)))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] = (~var_11);
                    var_18 = (((((max((arr_8 [i_1] [i_2 - 2] [i_2] [i_1]), (arr_8 [i_0] [i_2 - 2] [i_2] [i_1]))) + 2147483647)) << (((((min((arr_8 [i_0] [i_2 - 2] [22] [i_1]), (arr_8 [i_0] [i_2 + 1] [8] [i_0]))) + 1690106147)) - 17))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_19 [11] [11] [11] [i_3] [i_3] [13] [12] = (arr_15 [i_0] [i_1] [i_3] [i_5 - 2] [i_5 - 2]);
                                arr_20 [i_3] [i_3] [i_5] = 1411677234;
                                var_19 = var_10;
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_3] [i_3] = (((((((max(-31974, var_7))) + 555627601))) - (156 + 5624075038766376154)));
                }
            }
        }
    }
    #pragma endscop
}
