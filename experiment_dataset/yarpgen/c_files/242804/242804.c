/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (+(((min((arr_4 [i_0] [i_0] [i_0]), (arr_5 [i_1] [i_1]))) ^ ((var_0 ? (arr_5 [i_0] [i_1]) : (arr_3 [i_0] [i_1] [i_2]))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [6] = (((-17593 + 2147483647) << (1 - 1)));
                        var_14 = (((arr_7 [i_0]) != (((((arr_10 [i_0] [i_1] [i_1] [i_3]) < -305949210112710712)) ? (min((arr_5 [i_2 + 2] [i_2 + 2]), (arr_3 [i_0] [i_0] [i_0 - 1]))) : (((1 ? 22605 : (arr_6 [i_0]))))))));
                        arr_12 [i_0] [i_0] [8] [17] [i_0] [i_1] = ((((((arr_5 [i_0 - 1] [i_0 - 1]) & (arr_3 [i_0 + 2] [i_0 + 1] [i_2 + 1])))) ? (((-(arr_9 [i_0 + 1] [i_0 - 2] [i_2 - 1] [i_2 + 4])))) : -8136609811790062733));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_15 = (arr_13 [i_0 + 2] [i_5] [13] [i_4]);
                            arr_19 [i_0] [i_0] [i_2 - 3] [i_0] = var_2;
                            var_16 = (~1);
                            var_17 = (min(var_17, (((var_0 != (arr_18 [i_0] [i_0] [i_4]))))));
                        }
                        var_18 = ((((((arr_15 [i_0] [i_0] [i_0] [i_2] [i_4]) > (arr_16 [i_0] [i_1] [1] [i_2] [1])))) != -27));
                    }
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_0] = 2;

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] = (32710 - 1);
                            arr_28 [i_0] [i_0] [i_0] [i_0] [20] [i_6] [i_6] = var_2;
                            var_19 = (arr_15 [i_0 - 2] [i_0 + 1] [i_0] [i_2 + 4] [i_0 + 1]);
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] = (((arr_8 [i_6] [i_6] [i_6 + 1] [i_6]) ^ (arr_9 [i_0 - 1] [i_2 + 2] [i_2 + 2] [i_7 + 1])));
                        }
                    }
                    for (int i_8 = 4; i_8 < 20;i_8 += 1)
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_0] = (~32);
                        var_20 = ((0 > (-32767 - 1)));
                    }
                    var_21 = (arr_1 [i_2]);
                }
            }
        }
    }
    var_22 = (~1);
    var_23 = var_11;
    #pragma endscop
}
