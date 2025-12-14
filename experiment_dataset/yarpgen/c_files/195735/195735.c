/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (var_5 % -8192);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((-(max(2203659839, ((23 ? -444002282328674096 : (arr_0 [i_0] [i_0])))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_14 = (arr_6 [i_0] [i_2] [i_2]);
                    arr_9 [i_0] [i_0] = ((((12748 || (arr_1 [i_1])))));
                    var_15 = (max(((((arr_6 [i_2] [i_1] [i_2]) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_6 [i_2] [i_1] [i_0])))), (min(2113169745784566052, (arr_6 [i_0] [i_0] [i_0])))));
                    var_16 |= ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_8 [i_0] [i_1] [i_2] [i_2])))) ? ((16333574327924985590 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : ((var_0 ? (arr_8 [i_0] [i_0] [i_1] [i_2]) : (arr_2 [i_0])))));
                    var_17 = (((((16946 != (arr_8 [i_2] [i_1] [i_2] [i_0]))))) != (min((arr_8 [i_2] [i_2] [i_2] [i_2]), (arr_8 [i_2] [i_1] [i_1] [i_0]))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_18 = ((574418425427474796 ? 6183506717462202755 : (7334924831970927067 && -9223372036854775807)));

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_4 + 2] [i_1] [i_1] [i_0] = ((9182784631341112891 <= (arr_10 [i_4] [i_4 - 1] [i_4] [i_4 + 2])));
                        arr_15 [i_4] [i_4] [i_3] [i_0] [i_0] [i_0] = (arr_4 [i_4 + 1] [i_4 - 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_19 = 78;
                                var_20 = ((-9223372036854775779 ? (arr_19 [i_6 + 1] [i_6 + 2] [i_6 - 2] [i_6 - 2] [i_0]) : (arr_19 [i_6] [i_6 + 1] [i_6 + 2] [i_6 - 2] [i_5])));
                                arr_20 [i_6] [i_5] [i_3] [i_1] [i_0] = 2251799813685247;
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                                var_21 += (arr_3 [i_0]);
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] = (arr_10 [i_3] [i_3] [i_3] [i_3]);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_22 = (((((~((var_12 ? 3261 : 109))))) | 1400468648016893962));
                    var_23 = var_8;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_24 = (((-2769394353959262658 / var_3) ? (((arr_3 [i_7]) / 1)) : (((arr_10 [i_1] [i_7] [i_8] [i_9]) ? (arr_10 [i_1] [i_1] [i_7] [i_8]) : 0))));
                                arr_30 [i_8] [i_1] [i_1] [i_7] [i_1] [i_8] = (min(59, (max(-25946, (arr_11 [i_0] [i_1] [i_0])))));
                                var_25 = min(-576460752303423488, var_12);
                                var_26 = ((arr_27 [i_9] [i_1] [i_0]) ? (arr_4 [i_7] [i_1]) : ((((max((arr_2 [i_1]), var_0))) ? var_1 : var_7)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_27 ^= var_10;
                                var_28 = 2113169745784566026;
                                var_29 = (((((((min(-85, var_3))) > ((var_8 ? var_6 : 8437564595195248323)))))));
                                var_30 = ((-(((((0 ? (arr_16 [i_0] [i_0] [i_0]) : 0))) ? (((var_2 << (2060390127304640021 - 2060390127304640013)))) : (min(var_7, 8388607))))));
                                var_31 = (max(var_31, (min((((arr_17 [i_0] [i_0] [i_0] [i_0]) ? 3583585721101024894 : (((39700 ? var_8 : var_10))))), ((min((var_8 / var_1), (1400468648016893958 != 26))))))));
                            }
                        }
                    }
                }
                var_32 = (arr_36 [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
