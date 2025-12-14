/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_16));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 += ((((min((~-5547573222533884554), (~var_10)))) >= (min((~var_11), ((2147483647 ? 1052290242 : 2376576386460662895))))));
                var_20 = (max(var_20, (((var_10 / var_0) ? ((min(1, var_10))) : ((min((arr_5 [i_0]), ((1 ? var_1 : var_13)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [8] = var_6;
                                var_21 = 1;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 = ((((18446744073709551598 << (((arr_4 [i_0]) - 115)))) & (((((arr_1 [i_0]) == 1))))));
                        arr_20 [i_1] [i_1] [i_1] = (((((var_2 ? var_2 : 1))) ? (((arr_17 [i_0] [i_5] [i_6]) ? (arr_11 [i_1] [i_1] [i_5] [17]) : var_15)) : 1));
                        var_23 += var_10;
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_23 [i_0 - 3] [i_1] [i_1] [i_0] [i_0] [i_0 + 4] = (~var_16);

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_27 [i_0] [i_5] [i_0] [i_1] [i_8] = (arr_5 [i_1]);
                            var_24 = ((!((max((!var_3), var_1)))));
                            var_25 = (min((max(0, (var_3 / var_17))), ((min(1, (min(var_0, (arr_14 [i_0 + 4] [i_1] [i_5] [i_1]))))))));
                        }
                    }
                    arr_28 [i_0] [i_1] [i_0] [i_1] = (((((var_4 < ((max((arr_5 [i_0]), var_6))))))) >= ((+(((arr_6 [4] [4] [i_5]) ? var_0 : var_5)))));
                }
            }
        }
    }
    #pragma endscop
}
