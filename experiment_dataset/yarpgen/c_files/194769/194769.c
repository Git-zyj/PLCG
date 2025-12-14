/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 ^= 8589934591;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, (-38 ^ 0)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((-(11 || 1)));
            var_17 = (arr_4 [i_0] [i_0]);
            var_18 = (arr_1 [0] [0]);

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                arr_10 [i_0] [i_0] [i_2] [i_0] = ((70368744161280 < ((min(((~(arr_4 [i_0] [i_0]))), 32767)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_3] [i_1] [i_0] = ((~(~2941899377)));
                            var_19 += ((1741120480 & (arr_11 [i_4] [10] [i_2] [i_0] [i_0] [i_4])));
                            var_20 = (((-(arr_7 [i_1] [i_2] [i_3]))));
                            var_21 |= ((+(((~-39) ? (!var_3) : (arr_13 [i_0] [i_0] [14] [i_0])))));
                            var_22 = (max(var_22, var_11));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_23 -= (((((var_3 ? 7 : ((var_9 ? 604597555 : (arr_7 [i_0] [i_1] [0])))))) ? (arr_15 [i_0] [i_1] [i_1] [i_0] [i_5]) : (-var_12 || 1)));
                var_24 = (max(var_24, -19259));
            }
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                arr_21 [i_1] [i_1] [i_0] = (arr_20 [i_0] [i_0] [1] [i_6]);
                var_25 = (((arr_11 [i_0] [i_1] [i_0] [i_1] [8] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_19 [i_6 - 2] [i_6] [i_1] [i_0])));

                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] [i_7] = (((((!(!var_11)))) * 0));
                    arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_0 [i_1];
                    arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((arr_12 [i_0] [1] [i_0] [i_0] [i_0] [i_0]), (arr_23 [i_0])));
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    var_26 = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_30 [i_0] [i_1] [i_0] [4] = ((((((-(arr_2 [15]))) ? (((arr_1 [i_6] [i_8]) ? (arr_3 [i_0] [i_8]) : -6460543122464379681)) : ((((!(arr_9 [i_0] [i_0] [i_0])))))))));
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_27 *= ((165 ? 124 : -13));
                    arr_34 [i_0] [i_0] [i_6] = (arr_18 [i_0] [1] [i_0] [i_0]);
                }
                var_28 = (max(var_28, (((+(((((arr_15 [8] [i_1] [i_0] [i_0] [i_0]) ? -1467453608 : (arr_1 [i_0] [i_0]))))))))));
            }

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_29 = (arr_4 [i_10] [14]);
                var_30 = (arr_8 [i_0] [i_0] [i_0]);
            }
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                var_31 = ((+(((((max((arr_32 [i_0] [i_1] [i_1] [i_1]), 252))) || (arr_0 [i_11]))))));
                var_32 *= (((arr_2 [i_0]) || ((1 && (arr_2 [i_1])))));
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_33 = ((+(((arr_17 [i_1] [i_1]) ? (arr_17 [i_0] [i_1]) : (arr_17 [i_1] [i_12])))));
                var_34 = ((arr_17 [i_0] [i_0]) ? ((max(-4158058862, (arr_20 [5] [i_1] [i_1] [i_12])))) : -9100781866974116698);
                var_35 = ((+((((((arr_29 [i_12] [i_12] [i_0] [i_0] [i_1] [i_0]) ? var_8 : (arr_40 [i_12])))) ? var_13 : var_11))));
            }
        }
    }
    #pragma endscop
}
