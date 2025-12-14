/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= 36;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_2] = ((((min((arr_6 [i_0] [i_1] [i_0] [i_3]), (arr_5 [0] [0] [i_2] [0])))) ? 127 : -2974275880466736033));
                        var_20 |= (max((arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]), (!15472468193242815582)));
                    }
                }
            }
        }
        var_21 |= ((((((arr_5 [13] [13] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) ? (((-(arr_5 [i_0] [i_0] [i_0] [i_0])))) : (arr_3 [i_0] [i_0] [i_0])));
        arr_11 [13] = ((~(((!(arr_4 [i_0] [i_0] [i_0]))))));
        arr_12 [i_0] [i_0] = (((~15472468193242815590) ? (~-101) : (((arr_2 [i_0]) ? 1 : (~1)))));
        arr_13 [i_0] = 65535;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_5 - 1] [i_6] [i_6] [i_7] = ((~(((!var_17) ? (((arr_21 [i_4] [6] [17] [i_7]) ? (arr_18 [i_4] [i_4] [i_7] [i_7]) : (arr_16 [i_4]))) : ((max((arr_14 [0]), var_6)))))));
                        var_22 = 6840658693558510020;
                        arr_25 [i_4] [i_4] [14] = (max(-32761, 58583));
                        arr_26 [i_6] = ((!(arr_15 [i_7] [i_6])));
                    }
                }
            }
        }
        var_23 = (max(var_23, (arr_22 [17] [17] [i_4] [i_4] [i_4])));
        var_24 = (arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_38 [i_8] [i_8] [i_8] [i_8 + 2] [i_10] = (~14);
                                arr_39 [i_4] [i_10] [i_9] [i_4] [i_11 - 1] = 1;
                            }
                        }
                    }
                    var_25 *= ((((max((~1932524587), (arr_35 [i_8] [i_4])))) ? (max(((1 ? (arr_17 [i_4]) : (arr_29 [i_4] [i_4] [i_4]))), (arr_15 [i_4] [i_4]))) : (((~(!211))))));
                    var_26 = (arr_28 [i_9] [i_8]);
                }
            }
        }
    }
    var_27 += var_8;

    for (int i_12 = 3; i_12 < 18;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        var_28 = (arr_45 [i_12 + 1] [i_13 - 2]);
                        arr_49 [i_15] [i_15] [i_14] [i_13] [i_12 + 2] &= (~-78);

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_29 = (arr_28 [i_12 + 1] [i_14 + 1]);
                            arr_52 [i_13] [i_13] [i_13] [i_15] [i_12] [i_15] [13] = ((-(arr_17 [i_12 - 1])));
                            var_30 = (arr_43 [i_13 - 1] [i_12] [i_12]);
                            var_31 &= (~216);
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            var_32 = 56;
                            var_33 = (max(var_33, (arr_33 [i_12 + 2] [i_12] [i_12] [i_12])));
                        }
                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            var_34 = (min(var_18, 1));
                            var_35 = var_12;
                        }
                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 1;i_19 += 1)
                        {
                            var_36 += ((-1355859290 ? 3019407596103230544 : 1));
                            arr_61 [i_13] [i_13] [i_14] [i_15] [i_13 - 1] [i_13] [i_19] = (arr_47 [i_14] [i_13 + 1]);
                            arr_62 [i_15] [i_13] [i_19] [i_19] [i_19] [i_14] = (arr_54 [i_13 - 1] [i_13 - 1] [13] [i_15] [i_14] [i_14]);
                            var_37 = (arr_50 [i_12 + 1] [i_13 - 1] [i_13] [i_14] [1] [i_15] [i_19]);
                            var_38 -= 247;
                        }
                        var_39 &= (max(((min(83, 0))), ((-(~117)))));
                    }
                }
            }
        }
        var_40 = -var_17;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 17;i_21 += 1)
            {
                {
                    var_41 = arr_17 [i_20];
                    arr_69 [i_21] = (arr_50 [i_12] [i_12 + 2] [i_20] [i_12] [16] [i_21] [i_21]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_22 = 2; i_22 < 18;i_22 += 1)
    {
        var_42 ^= (arr_70 [i_22 + 3] [i_22 + 4]);
        var_43 = -1;
    }
    /* LoopNest 2 */
    for (int i_23 = 4; i_23 < 16;i_23 += 1)
    {
        for (int i_24 = 4; i_24 < 15;i_24 += 1)
        {
            {
                arr_77 [i_23 - 1] [i_24] = (max((((~var_5) ? (arr_67 [8] [8] [i_24] [i_24 + 2]) : ((min(-14351, 1))))), ((~(!26866)))));
                var_44 += arr_41 [i_24] [i_23];
                arr_78 [3] [3] [i_24 - 4] = ((8 ? 1 : -114));
            }
        }
    }
    #pragma endscop
}
