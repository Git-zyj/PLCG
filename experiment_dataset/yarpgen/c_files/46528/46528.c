/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1459683390 & ((min((~113), ((47 ? 32767 : 17827)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0] = ((57739 * (((arr_4 [i_1] [i_1]) ? (arr_0 [i_1 + 2]) : (arr_2 [i_1 - 1] [0])))));

            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    var_19 = 32744;

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_20 = (((((25 ? (arr_10 [12] [i_3] [21] [i_1 + 4] [i_0]) : (arr_8 [i_0] [i_1] [i_2] [i_4])))) ? 32767 : 235));
                        var_21 = 32788;
                    }
                    var_22 *= ((((!(arr_14 [i_3] [i_3] [i_2] [i_2] [i_0] [i_1] [i_0]))) ? ((85 ? var_1 : 32747)) : ((120 ? 39 : 32788))));
                    var_23 *= 47;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_24 = -25;
                        var_25 = ((arr_1 [i_6] [i_6]) ? (arr_6 [i_0]) : (~32790));
                    }
                    var_26 = (((~120) >= (((arr_19 [i_5] [10] [i_1] [i_0] [i_0]) ? (arr_5 [i_0]) : (arr_17 [4] [i_1] [i_2 - 2] [i_2] [i_5] [i_5])))));
                }
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_27 *= ((-122 ? -16471 : (!-113)));
                            var_28 = ((((65519 ? 109 : 32772)) << (((arr_15 [i_1] [i_8]) - 177))));
                            var_29 = (max(var_29, ((((59300 ? 4510 : 54992))))));
                            var_30 = (min(var_30, (((~(~3852))))));
                        }
                    }
                }
                arr_28 [i_0] = ((var_7 * (arr_1 [i_0] [i_0])));
            }
            arr_29 [i_0] [i_0] [i_1] = (((~243) ? (arr_18 [i_0] [i_1 + 1] [i_0] [i_0] [i_0]) : var_16));
            var_31 = ((~((23 ? 65 : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [10])))));
        }
        var_32 *= ((-(!1352007403)));
        var_33 *= (((arr_8 [i_0] [i_0] [23] [20]) ? (((!(arr_22 [i_0])))) : (!61025)));
        var_34 = (min(var_34, -83));
    }
    #pragma endscop
}
