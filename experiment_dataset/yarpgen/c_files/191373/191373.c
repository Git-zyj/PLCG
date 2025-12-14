/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((((min(((max(var_9, 39))), ((var_4 << (var_9 - 199631267)))))) ? (((((var_9 ? var_3 : 1928652334))))) : (~var_8)));
    var_15 = -var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (arr_1 [i_1 - 1] [i_1 - 1]);

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_16 = (((((((max((arr_2 [i_0]), var_6))) && ((min((arr_1 [i_0] [19]), (arr_8 [i_0] [i_0] [i_0] [i_0]))))))) <= var_11));
                    arr_9 [i_0] [i_0] [i_0 + 2] [i_1] |= ((var_11 ? (((((arr_1 [i_0] [i_1 - 3]) / var_0)) / 1928652340)) : ((-(arr_8 [i_1 - 2] [i_1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 + 1]) ^ ((-(max((arr_3 [i_1]), var_10)))))))));
                                var_18 = (((((((max((arr_2 [i_0]), (arr_6 [20] [3] [i_2] [3])))) ? var_0 : (arr_8 [i_0] [i_0] [i_0] [i_3])))) || ((((arr_2 [i_4 - 4]) ? var_10 : (arr_1 [i_2] [i_1 + 1]))))));
                                arr_14 [i_3] [i_3] [i_0] [i_0] [8] [i_0] = (min((((!(arr_10 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0] [i_0])))), (arr_3 [i_0])));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_19 = (min(var_19, (((((max(((-1928652333 ? -15055 : var_11)), (var_12 && var_5)))) ? (-15067 > var_4) : (((var_9 && (~-15052)))))))));
                    var_20 = ((((((~var_1) ? (arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (-15082 <= var_11)))) ^ ((var_4 >> (((-1928652316 & var_6) - 86))))));
                }

                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    var_21 = ((((min((var_8 + var_7), ((max(var_7, var_0)))))) && (((67 != -26967) < 15054))));
                    var_22 = (arr_16 [i_0] [10]);
                    var_23 = -15052;
                    var_24 = (min(79, 1928652345));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(36347, 600861798));
                                arr_28 [i_0] [i_1] [i_0] [i_8] [1] = var_6;
                            }
                        }
                    }
                    arr_29 [i_0] [i_1 - 1] [i_1] [i_1 - 3] = (arr_15 [i_0 - 1] [i_0] [i_1] [i_7]);
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    arr_34 [i_1 - 3] [i_0] = (var_4 + var_9);
                    var_25 = ((10664 ? var_8 : var_10));
                    var_26 = ((3381442420 ? (arr_7 [i_0 + 2] [i_0 - 1]) : (arr_19 [i_10 + 4] [i_1 + 1] [i_1 + 1] [i_0 + 2])));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_27 = var_11;
                                var_28 += (arr_32 [i_0] [i_1] [i_1]);
                                var_29 = var_2;
                                var_30 ^= 49;
                            }
                        }
                    }
                }
                arr_40 [i_0] [i_1 - 2] [i_0] = ((((arr_25 [i_0 + 1] [i_0 + 2]) ? (arr_20 [i_0]) : var_3)));
            }
        }
    }
    #pragma endscop
}
