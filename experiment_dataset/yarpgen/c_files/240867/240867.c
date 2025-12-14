/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3663796673560256997;
    var_18 = ((9226844827631958878 + -381403599) > 3663796673560256997);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = max(((-(max(var_14, 18446744073709551615)))), ((381403599 ? ((-1453 * (arr_3 [i_2]))) : -var_3)));
                    var_20 = (max(var_20, ((((31 ? -19262 : 10935046722278255061))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = (((max(14782947400149294614, (arr_7 [i_0] [i_0] [i_0] [i_0]))) * ((((arr_0 [i_0] [i_0]) * (arr_0 [i_2] [i_3]))))));
                        var_21 |= (((((((((arr_1 [i_0] [i_0]) / 201))) ? ((31 ? var_7 : 18446744073709551615)) : (max(var_3, (arr_4 [i_0] [i_1] [i_3])))))) ? (min((arr_8 [i_2] [i_3]), (max((arr_3 [i_0]), 31)))) : (max(((-(arr_6 [i_0] [i_1] [i_2]))), ((((arr_4 [i_3] [i_2] [i_1]) ? 1 : var_4)))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_22 = (min(var_22, (((245 * ((-((var_12 ? 554675480888769108 : 18446744073709551615)))))))));
                        var_23 = (min(var_23, (arr_7 [i_0] [i_0] [i_0] [i_0])));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_2] [i_4] [i_5] = max((18446744073709551615 - 0), 310662792);
                            var_24 = ((min((((var_14 ? var_16 : 0))), (((arr_2 [i_0]) / var_10)))) | (((arr_13 [i_0] [i_0] [i_0] [i_0]) ? ((var_8 / (arr_4 [i_0] [i_0] [i_0]))) : (((var_2 ? var_14 : 0))))));
                            var_25 = (((arr_7 [i_0] [i_1] [i_4] [i_5]) > (arr_14 [i_1] [i_5])));
                            var_26 = (min(var_26, (((arr_12 [i_0] [i_1] [i_2]) ? ((var_13 ? -var_7 : 31)) : (max((arr_15 [i_0] [i_1] [i_2] [i_4] [i_5]), (arr_15 [i_0] [i_1] [i_2] [i_4] [i_5])))))));
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] = max((min((arr_13 [i_0] [i_1] [i_2] [i_0]), 2147483647)), 202);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    {
                        var_27 = (max(var_27, var_11));
                        arr_29 [i_0] [i_6] [i_7] [i_8] [i_8] = 0;
                        var_28 += (var_16 | ((-431032184 / (-2147483647 - 1))));
                    }
                }
            }
        }
        var_29 = (((~18446744073709551615) ? (arr_20 [i_0]) : ((var_11 ? (arr_20 [i_0]) : 0))));
        arr_30 [i_0] = (((((-(((arr_12 [i_0] [i_0] [i_0]) ? var_13 : var_10))))) ? ((+(((arr_0 [i_0] [i_0]) ? var_8 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : var_6));
        arr_31 [i_0] [i_0] = -8566049857899731296;
    }
    #pragma endscop
}
