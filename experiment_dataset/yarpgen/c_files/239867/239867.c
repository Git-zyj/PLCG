/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_6, var_9));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = ((var_12 ? (((arr_1 [i_0]) - ((var_0 ? (arr_2 [i_0]) : -645650663335256555)))) : 1073741816));
        arr_4 [i_0] = ((((((((var_14 ? var_10 : 1))) ? (~1) : ((18446744073709551615 ? 1631029437857948284 : 1))))) ? (~-1915751695) : var_5));
        arr_5 [i_0] [i_0] = ((!((max(158, (arr_2 [i_0]))))));
        arr_6 [i_0] [i_0] = 1631029437857948316;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (~(arr_9 [i_2] [i_2] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_2] [i_3] [i_0] = var_5;
                                var_20 += 1;
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] = ((!((min(7906844349437915641, var_3)))));

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        var_21 = 9272910840538499457;
                        var_22 = (~158);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_23 = (max(var_23, (arr_15 [i_6] [i_1] [i_0])));
                        var_24 = (min(var_24, (arr_26 [i_2 - 2] [i_2 + 2] [i_2 - 2] [i_2])));
                        var_25 = (min(var_25, 205));
                    }
                    var_26 = (!var_4);
                }
            }
        }
    }

    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        var_27 = var_17;
        arr_31 [i_7] [i_7] = (arr_30 [i_7]);
    }
    var_28 = var_1;
    #pragma endscop
}
