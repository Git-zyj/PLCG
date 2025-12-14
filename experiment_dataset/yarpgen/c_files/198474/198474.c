/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (-(min((max(19442, 6093369830399465227)), (((var_10 ? var_13 : var_4))))));
                    var_16 = ((~(var_8 / var_3)));
                    var_17 = 65535;

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_18 = (min(var_18, 549755813887));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_19 = ((((3633568384802932473 / (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2 + 3]))) / 1));
                            arr_14 [i_0] [i_0] [i_0] = (19438 ^ 46093);
                            var_20 = (((max(var_2, (arr_1 [i_3 - 1])))) ? (((min((var_13 && var_4), (var_2 <= 44950))))) : -6093369830399465247);
                            var_21 = ((-(11 >= 6093369830399465227)));
                            arr_15 [i_1] [i_0] [i_2 + 3] [i_0] [i_4] [i_1] [i_2] = -var_2;
                        }
                        var_22 = ((var_11 * (!255)));
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((-(((!(arr_6 [i_0] [i_1] [i_2] [i_0])))))), ((min(1, var_13)))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_23 = (min(var_23, (((-(59048 ^ 46093))))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_24 = var_9;
                            arr_21 [i_0] [i_1] [i_2] [i_1] [i_6] = (1 >= 4503599627370495);
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_5] = var_12;
                        arr_23 [i_0] [i_5] = ((-((((max(8902375480847221025, -8412113886004871066)) < (!1))))));
                        var_25 = ((1798628024 < (arr_9 [i_0] [i_2 + 3] [i_2] [i_2] [i_2] [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        var_26 *= ((!(!46093)));
                        arr_26 [i_1] [i_1] [i_2] [i_7] [i_0] [i_0] = 65535;
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((max(4389472187876852802, -6821195860089883062)), ((max((((var_5 < (arr_11 [i_0] [i_1] [i_2 + 2] [i_2 + 2])))), (~-1))))));
                    }
                    var_27 = (max(var_27, (-6093369830399465223 || 192)));
                }
            }
        }
        var_28 = var_9;
        var_29 = (max(1802332780, ((~(min(var_11, var_12))))));
        arr_28 [i_0] [i_0] = var_9;
    }
    var_30 = (((((810546387854077387 / var_0) / (19442 + 48846))) - 3504070962));

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    var_31 ^= 3357767871;
                    var_32 = var_11;
                    var_33 = (!63);
                    var_34 = ((((0 || ((max(-7726818932557168289, 3))))) && (((6 & ((min(var_4, (arr_17 [i_8])))))))));
                    var_35 = 2048716987438226610;
                }
            }
        }
        var_36 = (min(var_36, 42424));
    }
    #pragma endscop
}
