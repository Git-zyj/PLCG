/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = ((-1938668380 && ((!(arr_1 [i_0] [9])))));
        arr_2 [i_0] [i_0] = 17617269401886884085;
        var_14 -= (arr_0 [i_0]);
        var_15 = var_3;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = ((~((max((arr_4 [i_1] [6]), (arr_4 [i_1 - 1] [i_1 - 1]))))));
        arr_7 [i_1] = (4211687694 == 0);
        arr_8 [i_1] = ((((((arr_4 [i_1 - 1] [i_1 - 1]) >= var_9))) > (var_11 * var_5)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_17 = (min(((-(arr_9 [i_2]))), (var_3 == var_1)));
        var_18 *= (((((!((((arr_10 [i_2]) ? var_12 : (arr_9 [4]))))))) >> (((max(var_12, (arr_9 [i_2]))) - 1325544643))));
        arr_11 [i_2] = (min((arr_9 [6]), (((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = ((((((arr_14 [i_3]) >= (arr_12 [8] [i_3])))) - (((!(arr_14 [i_3]))))));
        arr_17 [i_3] [4] &= (!(arr_13 [i_3]));
    }
    var_19 = (max(var_19, (!19537)));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 = (max((max((352777973 | 352777973), (arr_12 [i_4] [i_4]))), (8756 - 3942189304)));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_21 *= (min(-73432124390357441, 73432124390357441));
                    arr_27 [i_4] = (arr_24 [i_5] [i_5] [1] [i_5 + 1]);

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_22 = (arr_12 [i_5 - 1] [i_4]);
                        arr_32 [11] [9] [i_4] [i_7] = ((-(arr_20 [i_5 + 2] [i_4])));
                        var_23 = ((352778021 || (((var_3 & (arr_31 [3] [i_6] [2] [16]))))));
                    }
                }
            }
        }
        var_24 = (min(162, (~5891)));

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_35 [i_4] [i_4] = 3208521603;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_25 = ((((-(arr_22 [i_4]))) / (arr_22 [i_4])));

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_44 [i_11] [i_4] [1] [i_4] [i_4] = (-25 / ((-(max((arr_31 [i_4] [i_8] [13] [i_10]), 12683413164845233465)))));
                            arr_45 [i_4] [i_10] [i_4] [i_4] [i_8] [i_4] = ((((((var_0 && (arr_13 [i_10]))))) % ((~(arr_40 [i_4] [i_9] [10] [i_11])))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_49 [i_4] [i_8] [i_9] [7] [i_12] = 18446744073709551615;
                            arr_50 [i_12] [i_4] [i_8] = ((0 >= (arr_41 [i_12] [i_10] [5] [i_9] [i_8] [i_4])));
                            arr_51 [i_4] [i_4] [i_9] [i_10] = ((!(arr_48 [i_4])));
                            var_26 = ((9223372036854775807 ^ (arr_26 [i_4])));
                        }
                    }
                }
            }

            for (int i_13 = 2; i_13 < 13;i_13 += 1) /* same iter space */
            {
                arr_54 [i_4] [i_8] [i_4] = var_3;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            arr_62 [i_4] = (!var_0);
                            arr_63 [i_4] [i_15] [i_4] [i_4] [i_4] [i_4] [i_8] = (arr_23 [i_4] [i_4]);
                            arr_64 [7] [i_8] [i_4] [9] [i_15] = (arr_21 [i_4]);
                            arr_65 [i_4] [i_4] [16] [i_13] [i_4] [i_4] [i_4] = (arr_42 [i_8]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_16 = 2; i_16 < 13;i_16 += 1) /* same iter space */
            {
                arr_68 [i_4] [i_4] [6] = (arr_31 [i_16 + 3] [i_16 - 1] [i_16 + 3] [i_16 - 2]);
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        {
                            arr_74 [i_4] [i_8] [i_4] [i_4] [i_8] = (arr_67 [i_8] [i_18]);
                            arr_75 [i_17] [2] [i_4] [i_17] [i_4] = (3942189310 + 1);
                            arr_76 [i_18] [i_4] [i_4] [3] [i_4] [i_4] [3] = ((1 * (0 * 352777991)));
                        }
                    }
                }
                var_27 = (arr_70 [i_4] [i_16 - 1]);
            }
            for (int i_19 = 2; i_19 < 13;i_19 += 1) /* same iter space */
            {
                arr_79 [i_4] [13] [i_4] = var_0;
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        {
                            arr_85 [i_4] [i_4] [i_19] = ((~(((((arr_14 [i_21]) != (arr_67 [i_4] [13]))) ? (~255) : var_4))));
                            var_28 += ((((~(arr_73 [9] [9] [i_19 + 4] [i_19 + 3] [i_19 + 4]))) >= var_2));
                            arr_86 [i_4] [i_20] [i_4] = (((min((var_3 && var_2), (!var_5))) ? (max((-384536759 & 16266447848702629790), var_4)) : (((arr_56 [i_19 + 1] [14] [i_19 + 1]) - -7))));
                        }
                    }
                }
                var_29 = ((~((((min(-126, (arr_73 [i_8] [i_19] [i_8] [i_4] [8]))) == (min((arr_59 [i_8]), 1)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_22 = 1; i_22 < 21;i_22 += 1)
    {
        for (int i_23 = 2; i_23 < 22;i_23 += 1)
        {
            {
                arr_92 [i_22] = (((min(-1878021938, 3942189323)) < ((((-717622009 + var_2) * (!1))))));
                var_30 = (arr_87 [12]);
            }
        }
    }
    #pragma endscop
}
