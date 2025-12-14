/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((min((arr_2 [10]), (arr_0 [i_0])))));
                var_11 = (min((min((arr_0 [i_0]), var_1)), (((((max(58587, 137))) ? 65535 : (((((arr_2 [i_0]) >= 58587)))))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2] [0] = (arr_3 [i_2 + 1] [i_2 - 3] [i_2]);
                    arr_10 [i_0] [i_1] [i_0] [i_0] = 60;
                }
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_17 [i_4] [i_0] [i_0] [i_0] = var_9;
                        arr_18 [i_0] [i_0] = ((!((max((((arr_6 [i_1] [i_3 - 2] [i_4]) ? var_4 : (arr_11 [13] [i_1] [1] [i_4]))), (arr_16 [i_4] [i_4] [i_0] [i_0] [i_3 - 2] [i_3]))))));
                        arr_19 [i_0] [i_0] [i_3] [i_4] = (arr_13 [i_0] [i_4] [3] [i_4]);
                        var_12 = (min(var_12, (arr_8 [i_0])));
                    }

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_1] [i_3] [i_5]);
                        arr_24 [6] [i_1] [i_3] [i_0] = (arr_12 [13] [13] [i_1] [i_0]);
                        var_13 = ((!((min(2099688216, var_7)))));
                    }

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_14 = (arr_15 [i_0] [i_3]);
                        var_15 = (min((((var_7 || (((arr_0 [i_0]) > (arr_27 [i_0] [i_1])))))), (!-8156363175549277910)));
                        var_16 |= arr_6 [i_0] [i_0] [i_0];
                    }
                }

                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    var_17 = (!694743987);
                    arr_31 [4] [i_0] [i_7] [i_7] = (min(((max(-1, (arr_25 [9] [i_1])))), (((arr_0 [i_0]) + var_2))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_18 = ((var_3 <= ((var_0 ? (arr_5 [i_0] [i_1] [i_7] [i_0]) : -8156363175549277892))));
                        arr_35 [4] [5] [i_0] [i_8] = (((((0 * (arr_28 [9] [i_0])))) ? var_2 : var_9));
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_19 += (arr_27 [1] [i_1]);
                            var_20 = (((arr_0 [i_0]) ? var_5 : (arr_11 [i_0] [i_0] [i_0] [i_0])));
                            arr_44 [i_0] = (arr_6 [i_9] [i_9] [i_9]);
                        }

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_33 [i_0] [i_1] [i_9]);
                            var_21 |= 2205980837650601431;
                            var_22 *= (arr_22 [i_0] [i_1] [i_10] [i_10] [i_12] [i_9]);
                            arr_48 [i_0] [i_0] [i_0] [8] [i_0] [i_10] [i_12] = ((!(((arr_11 [i_10] [i_10] [i_0] [i_0]) || -8156363175549277895))));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            var_23 |= (((arr_36 [i_9] [i_9] [i_9] [i_9]) ? (arr_15 [i_13] [i_1]) : (arr_27 [i_10] [i_1])));
                            var_24 += 16727101185780412821;
                            var_25 = (arr_5 [i_1] [i_9] [i_10] [i_0]);
                            arr_51 [i_0] [i_1] [i_0] [i_10] [i_10] [i_10] = -24452;
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_26 = -1;
                            var_27 = 65523;
                            var_28 = (-(arr_5 [i_0] [i_0] [i_1] [i_0]));
                        }
                    }
                    arr_54 [i_0] [i_1] [i_0] = (arr_12 [i_0] [i_0] [i_9] [i_9]);
                    var_29 = ((arr_27 [i_0] [i_1]) * (arr_27 [i_0] [i_0]));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            {
                arr_59 [i_16] [i_16] [i_15] = var_9;
                var_30 = (arr_58 [i_16] [i_15]);
                var_31 = (max((-800162872 / -32), var_9));

                for (int i_17 = 1; i_17 < 19;i_17 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            {
                                var_32 = (arr_55 [i_16]);
                                var_33 = ((0 - (((!(((7691339104842422789 ? 186 : 1))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 3; i_21 < 18;i_21 += 1)
                        {
                            {
                                arr_77 [i_17] [i_20] [i_17 - 1] [i_17] [i_16] [i_17] = (max(var_1, (arr_58 [i_21 - 2] [i_21])));
                                arr_78 [i_21 + 3] [i_17] [2] [i_21] [2] = ((((((!(arr_74 [i_15] [i_16] [i_16] [i_20]))))) ? ((var_2 * ((((arr_69 [1] [1] [i_20]) / -1708466939))))) : var_9));
                            }
                        }
                    }
                    var_34 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
