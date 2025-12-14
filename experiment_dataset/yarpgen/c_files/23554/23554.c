/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-17 != ((var_7 ? 356985999 : var_3))))) + (((var_3 && ((min(16, 8537997362439100201))))))));
    var_21 = (min((min(((-17 ? var_7 : 17)), ((max(var_13, 16))))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 &= var_0;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((arr_12 [i_2] [i_2] [i_1] [i_0]) << (((arr_8 [i_2] [i_2 + 2] [i_2 + 3] [i_2 + 1]) - 1171554976)))))));
                                arr_16 [i_1] [i_1] [i_0] [i_4] = (arr_8 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_4 - 2]);
                                var_24 = ((!(arr_13 [i_4 + 1] [i_3] [i_3 + 3] [i_0] [i_1] [i_0])));
                                var_25 = (max(var_25, ((((arr_4 [i_0] [i_0] [i_4 - 2]) > (~var_3))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_2] [i_1] = (((var_14 && var_6) ? ((var_14 & (arr_11 [6] [i_1] [i_0] [i_0]))) : ((-(arr_6 [i_0] [i_0] [i_2])))));
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        var_26 = ((arr_1 [i_0] [i_0]) >> (!var_5));
                        var_27 = (arr_4 [i_0] [i_1] [i_5]);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_7] [i_5] [i_0] [i_0] = (((((max(-16, (arr_18 [i_0] [3] [i_0] [i_5 - 1]))))) != ((11 ? (arr_2 [i_1] [i_7]) : (arr_2 [i_5 + 2] [i_7])))));
                        var_28 = (min(1162021257615292396, -705800639047102983));
                        var_29 = ((+(((arr_3 [i_7] [i_0]) ? (arr_3 [i_0] [i_7]) : (arr_3 [i_0] [i_7])))));
                        var_30 = 30144;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_31 = 12061338147018203985;
                                var_32 = (max((((42035 & (arr_18 [i_9] [i_1] [i_1] [i_0])))), (max((max(-7196, (arr_10 [i_9] [i_9] [i_9] [i_9] [i_9]))), ((max(46, -24664)))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    arr_35 [i_0] = (var_15 == 46);
                    var_33 += (~var_19);
                }
                var_34 = ((max(-1242937365430930020, var_7)));
                var_35 = (min(var_35, (arr_19 [i_0] [i_1] [3] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 16;i_12 += 1)
        {
            {
                var_36 += -594316850;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            arr_47 [i_11] [i_11] [i_13] [i_11] [i_11] = (arr_39 [i_12]);
                            var_37 -= (((((var_5 ? ((min(var_8, var_13))) : 57660))) || (var_2 > var_13)));
                            var_38 = (min(var_38, var_18));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 16;i_16 += 1)
                    {
                        {
                            arr_53 [i_11] [i_12 + 1] [i_15] [i_16] = ((((max((((arr_39 [i_11]) <= 3190868375)), (-17 <= 16445)))) < var_14));
                            var_39 = (!((((arr_42 [i_11] [i_16 + 1] [i_11] [i_12 + 1]) & (arr_42 [i_11] [i_16 - 2] [i_15] [i_12 - 2])))));
                            arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = (max((((-1315522959 ? 107 : 43880))), ((~(var_16 | -2128708026)))));
                            var_40 -= (max(var_0, (var_3 >= 3190868363)));
                            var_41 += (arr_36 [i_11] [i_11]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        {
                            arr_62 [i_11] [i_11] [4] [i_17] [i_18] = (max(((((min((arr_36 [i_11] [i_12]), var_0))) ? 152 : 6089263627071367094)), ((((min(var_3, 54002315))) ? ((1 ? (arr_36 [i_17] [i_17]) : (arr_39 [i_18]))) : (var_12 < var_9)))));
                            var_42 += (min((max((arr_51 [i_12 - 1] [i_12 - 2] [i_12 - 1]), (arr_46 [i_12 + 1] [i_12 + 1] [i_17]))), ((((((arr_60 [i_11] [i_12] [i_17] [i_11] [i_18]) + 2147483647)) << (((((arr_61 [i_11] [i_12] [i_17] [i_12] [i_12]) + 11316)) - 12)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
