/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((var_15 << (var_4 - 49980))) < (min(var_6, var_5)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 -= (arr_2 [4]);
            var_22 = (!var_15);

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [1] = var_12;
                            arr_14 [i_4] [i_0] [i_3] [i_2] [12] [i_0] [i_0] = var_3;
                            var_23 *= ((var_16 || (~var_7)));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [4] = (var_12 << var_0);
                            arr_16 [1] [i_0] [i_2] [i_3] [i_4] = var_14;
                        }
                    }
                }
                var_24 *= 234;
                arr_17 [i_0] [i_0] = (~var_0);
                arr_18 [i_0] [8] = ((!(arr_11 [i_0] [i_0] [i_1] [i_2] [1])));
                var_25 += -1;
            }
            for (int i_5 = 4; i_5 < 18;i_5 += 1)
            {
                arr_23 [i_0] [i_0] [7] = (~var_1);

                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    var_26 += (arr_25 [14] [i_6 - 2] [i_6] [4] [1]);
                    arr_27 [i_0] [i_0] [12] [i_0] = (~var_16);
                }
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    var_27 = (min(var_27, 46825));

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_28 = var_4;
                        arr_32 [i_0] [6] [5] [i_0] = var_11;
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = -1775654665;
                        var_29 -= -var_6;
                    }
                    var_30 ^= var_9;
                }
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
            {
                arr_37 [i_0] [i_1] [8] = (var_11 || var_10);

                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    var_31 = (max(var_31, var_11));
                    var_32 = (max(var_32, (8064 >= var_10)));
                    var_33 = (max(var_33, var_1));
                    arr_40 [i_0] [i_10] = (((arr_4 [i_0]) != (arr_22 [i_9 + 1] [i_0])));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_43 [i_0] [i_0] = 13126;
                    arr_44 [i_0] [i_11] [i_0] [i_0] [18] [i_0] = (arr_25 [i_0] [i_9 + 1] [i_9] [i_9 + 1] [i_0]);
                    arr_45 [i_0] [18] [i_0] [i_0] [i_0] = var_12;
                }
            }
            for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
            {
                arr_48 [i_0] [i_0] [16] &= (var_17 < var_3);
                var_34 |= ((var_15 >= (arr_31 [i_0] [i_0] [i_0] [i_0] [4] [i_0])));
                var_35 += (((arr_11 [i_12 + 1] [6] [i_12 + 1] [6] [i_12 + 1]) >= 252));
            }
        }
        for (int i_13 = 4; i_13 < 16;i_13 += 1)
        {
            var_36 += (var_19 && var_1);
            arr_51 [i_0] [i_13 + 3] = var_16;
            var_37 = (min(var_37, var_16));
            var_38 *= (arr_30 [10] [i_13 + 3] [i_13 - 1] [i_13 - 1] [i_13]);
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_39 = (min(var_39, var_2));
            var_40 *= (-1 < 5010544228202923465);
            arr_54 [i_0] = (!var_2);
        }
        var_41 &= (arr_2 [6]);
    }
    for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            var_42 ^= (var_11 < var_3);
            arr_60 [i_15] = (max((max(255, (min(var_9, 3005345669)))), ((min(var_5, ((((arr_12 [i_15] [i_16]) != var_2))))))));
        }
        var_43 = ((914583045 >= (!53753)));
    }
    for (int i_17 = 3; i_17 < 24;i_17 += 1)
    {
        var_44 += (min(-var_15, (min((max(var_12, var_7)), var_15))));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            for (int i_19 = 2; i_19 < 24;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        var_45 = (max(var_45, (((((((!((((arr_66 [i_17 - 1]) << (var_15 - 1111360878)))))))) != (arr_66 [i_17]))))));
                        var_46 = (min(var_46, (arr_61 [i_19 - 1])));
                        var_47 += (min(785417383118248945, (max((max(16, 140733193388032)), (892328931 < 15)))));

                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 25;i_21 += 1)
                        {
                            var_48 = (max(var_48, (arr_61 [11])));
                            arr_72 [i_18] [i_20] [i_18] = (arr_70 [i_17 + 1] [i_20] [i_19 + 1]);
                            var_49 = (min(var_49, var_0));
                        }
                        for (int i_22 = 0; i_22 < 25;i_22 += 1)
                        {
                            var_50 = (max(var_50, var_4));
                            var_51 = ((-(min(var_11, (arr_68 [i_17 + 1] [i_17 + 1] [i_22] [i_19 - 1])))));
                            var_52 += ((var_5 < ((((!var_2) && ((max(2062344050, var_6))))))));
                            var_53 += (((((min(65535, -3900)))) < 18014398509473792));
                        }
                        var_54 = -6416625931577145054;
                    }
                }
            }
        }
        var_55 = min(var_10, 1766730251);
    }
    var_56 ^= ((-((((!405729995) < (min(var_2, var_7)))))));
    var_57 = min((((~var_8) && var_12)), (((var_2 && var_12) >= var_16)));
    #pragma endscop
}
