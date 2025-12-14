/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = ((~((min((arr_2 [i_0]), var_2)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_7 [2] [i_1 + 3] &= (arr_2 [i_0]);
            var_11 += (((arr_6 [i_0] [i_1] [i_1 + 3]) & 55466));
            var_12 += (((((562949953421311 >> (arr_3 [i_0] [i_1 + 1])))) || var_4));
        }

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                arr_13 [1] [i_2] [i_2] [i_2] = (max(((max(var_1, (arr_10 [i_2 + 3])))), (((((var_2 | (arr_11 [i_3] [i_2] [i_3])))) ? ((max(76, -18169))) : (((!(arr_4 [i_0]))))))));
                arr_14 [11] [i_3] = (arr_8 [1] [i_2] [i_3]);
                var_13 = (min(var_13, (((!(((((var_2 || (arr_12 [i_0] [i_3]))) ? (((arr_3 [i_0] [i_3]) ? var_3 : -80)) : (arr_1 [i_0])))))))));
                var_14 += (arr_0 [i_0]);
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_15 = (((max(var_4, var_8)) | (arr_10 [i_0])));
                var_16 += (var_5 ? ((((~(arr_9 [i_0] [8]))))) : (arr_8 [i_2 + 1] [i_2 + 3] [i_4]));
            }
            arr_17 [1] = (arr_11 [1] [i_2 - 1] [i_2 - 1]);
            arr_18 [i_2 - 1] [7] = (((max((~var_2), ((var_4 ? (arr_0 [i_0]) : var_5)))) * (((var_3 > (arr_3 [i_0] [i_2 - 1]))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            var_17 = ((-(arr_19 [11])));
            var_18 = (max(var_18, (((3082845186 >= (arr_11 [i_0] [i_5] [i_0]))))));
            var_19 = (min(var_19, (((~(arr_5 [i_0] [i_5] [i_5]))))));
            var_20 = (!var_5);
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            var_21 = (min(var_4, (max(6413, 15230))));
            var_22 += (((max(-3966294229859135321, 153)) ^ (((arr_4 [i_6]) ^ (arr_21 [i_0] [i_0] [i_6])))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_23 = (((((10068 ? var_8 : (arr_3 [i_9] [i_9])))) ? (!151) : var_6));
                            var_24 = ((~(arr_25 [i_0] [i_7] [i_8])));
                            arr_35 [i_0] [i_8] [7] [i_9] [i_10] = (((~var_6) % (arr_0 [0])));
                            arr_36 [i_0] [i_8] [i_8] [1] [i_10] = (arr_29 [i_0]);
                        }
                    }
                }
            }
            var_25 |= ((var_1 > ((-(arr_30 [i_0] [i_0] [i_0] [i_7])))));
            var_26 = (min(var_26, (((var_6 >> (((var_6 || (arr_30 [i_0] [2] [i_0] [i_0])))))))));
            arr_37 [i_0] [i_7] [i_7] = var_9;

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_27 ^= -1;
                var_28 &= var_2;
                arr_42 [i_0] [i_0] [0] = (98 ? (var_2 - 95) : (arr_26 [i_0] [i_7]));

                for (int i_12 = 2; i_12 < 8;i_12 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_0] = ((((!(arr_25 [i_0] [i_0] [i_0]))) ? (arr_20 [i_12 + 4] [i_12 + 2] [i_12 - 2]) : (((arr_44 [i_0] [i_0] [i_11] [i_0]) ? var_5 : var_7))));
                    var_29 = (arr_3 [i_12 + 4] [i_12 - 1]);
                }
                for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
                {
                    arr_51 [10] [i_7] [i_11] [i_13] = (((arr_34 [i_13 + 2] [i_13] [8] [3] [i_13 - 2] [i_13 - 2]) | (arr_34 [i_13] [i_13] [i_13 + 3] [i_13 + 3] [i_13 + 1] [i_13 + 3])));

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_30 -= (((arr_44 [1] [i_11] [i_13] [1]) >= (arr_47 [i_14] [i_7])));
                        arr_54 [i_0] [i_14] [i_11] = ((9201 ? -var_8 : (arr_50 [i_11] [i_13 + 3] [i_13 + 4] [i_13])));
                    }
                    for (int i_15 = 1; i_15 < 9;i_15 += 1)
                    {
                        arr_59 [8] [i_7] [5] = ((!(arr_38 [i_0] [i_7] [i_11] [i_15])));
                        arr_60 [i_0] [i_7] [i_11] [i_13] [i_15] = var_3;
                    }
                    for (int i_16 = 3; i_16 < 8;i_16 += 1)
                    {
                        var_31 = (~17055443904541469978);
                        var_32 = ((!((!(arr_20 [6] [i_7] [i_7])))));
                    }
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        var_33 = ((12868 ? -var_9 : (arr_64 [i_17] [i_0] [i_11] [i_7] [i_0])));
                        var_34 ^= (((arr_44 [i_0] [i_7] [i_11] [i_13 + 3]) % var_5));
                        var_35 = ((~(arr_64 [i_13 + 1] [i_13 + 4] [i_13 + 3] [i_13 + 1] [i_13 - 1])));
                        var_36 += (((!1) ? 10062 : (arr_5 [0] [i_7] [i_13 + 2])));
                    }
                    arr_69 [i_0] &= (arr_10 [i_7]);
                }
                for (int i_18 = 2; i_18 < 8;i_18 += 1) /* same iter space */
                {
                    var_37 &= var_2;
                    arr_73 [i_0] [9] [i_0] = ((!(arr_66 [i_0] [10] [i_7] [i_18] [i_18] [i_0])));
                    var_38 = (max(var_38, ((((arr_5 [0] [1] [1]) ? (arr_31 [i_7] [i_7] [i_18]) : (!var_8))))));
                    var_39 = (max(var_39, ((((arr_47 [i_11] [i_18 + 2]) && var_4)))));
                }
                for (int i_19 = 2; i_19 < 8;i_19 += 1) /* same iter space */
                {
                    var_40 = (min(var_40, (((((!(arr_8 [i_0] [i_0] [i_0]))) || (arr_2 [i_19 + 3]))))));
                    var_41 = var_2;
                }
            }
        }
        var_42 *= (3966294229859135312 && 17055443904541469984);
    }
    for (int i_20 = 1; i_20 < 1;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 23;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 23;i_22 += 1)
            {
                {
                    var_43 = (min(var_43, (((!(((-32746 | ((119 ? 11 : 24))))))))));
                    var_44 = ((var_7 ? ((3966294229859135309 ? 7623727880568030528 : -30174)) : (arr_80 [10] [i_21] [i_21])));
                }
            }
        }
        arr_84 [i_20] = ((((((((max((arr_78 [i_20]), (arr_82 [i_20] [i_20]))))) / -var_7))) || (arr_78 [i_20 - 1])));
    }
    var_45 = (!var_8);
    var_46 = ((~((var_4 ? (~var_9) : (var_2 / var_2)))));
    /* LoopNest 2 */
    for (int i_23 = 2; i_23 < 16;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            {
                arr_89 [i_24] [i_24] [13] = (~8884457706267099566);
                var_47 = (((arr_80 [i_23] [i_24] [i_23]) ? 55468 : (-var_0 >= -32762)));

                /* vectorizable */
                for (int i_25 = 0; i_25 < 17;i_25 += 1) /* same iter space */
                {
                    var_48 = (((((-62 ? var_7 : (arr_76 [i_23 - 2] [i_24])))) ? (arr_77 [i_23 + 1]) : (var_5 && var_7)));
                    var_49 = ((-(arr_80 [i_23 + 1] [i_24] [i_24])));
                    var_50 = (-87 + 27788);
                    var_51 ^= (((arr_83 [8] [11] [i_24] [1]) + -var_0));
                    var_52 = (((arr_78 [i_23 + 1]) % (((arr_80 [i_23] [i_23] [i_23]) ? var_1 : (arr_87 [i_24])))));
                }
                for (int i_26 = 0; i_26 < 17;i_26 += 1) /* same iter space */
                {
                    var_53 = (min(var_53, (((max((~var_8), var_7))))));
                    var_54 = (max(var_54, (((((((max(var_4, (arr_80 [i_23 - 2] [i_23 - 2] [i_23 - 2]))) / -var_9))) + var_4)))));
                }
                /* vectorizable */
                for (int i_27 = 0; i_27 < 17;i_27 += 1) /* same iter space */
                {
                    var_55 = var_7;
                    var_56 = (!var_6);
                    var_57 = (max(var_57, (~var_0)));
                }
                var_58 = (max(var_58, ((((((var_1 ? 9213 : (arr_90 [i_23] [6])))) ? (((max(36976, var_6)))) : (min(((var_7 ? (arr_76 [21] [21]) : (arr_88 [i_23] [i_24] [1]))), ((max((arr_81 [i_23] [i_24]), 1))))))))));
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 17;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 17;i_29 += 1)
                    {
                        {
                            var_59 = (arr_90 [i_28] [5]);
                            arr_101 [i_29] [i_24] [i_24] [i_23] = (-1 ? (((max(var_8, (arr_78 [i_23 - 2]))))) : (max(12023, (arr_77 [15]))));
                            var_60 = (max(var_60, var_8));
                            var_61 = (min((((arr_99 [i_23 - 2] [i_23 + 1] [i_23 + 1] [i_23 + 1]) / var_5)), ((min((var_3 % var_5), (43475 > var_9))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
