/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] = (((~var_7) ? (((min((arr_4 [i_0] [6] [i_0]), (arr_4 [i_0] [i_1] [i_1]))))) : (arr_1 [i_0])));
            var_13 = ((0 << (var_10 - 75)));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_14 [10] [i_0] [i_0] [i_4 - 3] [i_0] = min((~0), ((~(arr_10 [i_5 + 2] [0] [0] [i_4 - 2] [i_0]))));
                                var_14 = (min((min((((arr_13 [i_2] [i_2] [i_2] [4] [i_2] [i_2] [i_2]) << (var_6 - 97))), -1)), var_7));
                                var_15 = (-(((-900319820 ^ 0) * (((0 > (arr_2 [i_2])))))));
                                arr_15 [i_0] [i_2] [0] [2] [i_5 + 2] = ((min(33045, (min((arr_4 [i_0] [i_0] [i_0]), (arr_2 [i_3]))))));
                                var_16 = var_6;
                            }
                        }
                    }
                    var_17 -= (((((((min(var_4, 0))) ? (!1221806253) : (0 < var_8)))) ? -33031 : (1 < var_0)));
                    var_18 &= (((~(2032972116 - 102))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_19 = (min(var_19, var_0));
        arr_19 [i_6] = var_3;
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_20 |= (((((~(~var_3)))) ? var_0 : 7));
        var_21 = (min(var_21, (!7)));
        var_22 ^= (min((~18014398509481983), ((((((arr_21 [7]) + 2147483647)) << (((-900319820 + 900319841) - 20)))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_23 = ((-1971664064 - (arr_23 [i_8])));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_27 [i_8] [i_8] = (((arr_23 [i_9]) ? var_1 : (arr_22 [i_9] [i_9])));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_24 = (arr_29 [i_8] [i_8] [i_8]);
                            arr_34 [i_8] [i_9] [i_8] [i_10] [i_11] [i_12] = var_9;
                        }
                    }
                }
            }
            arr_35 [i_8] [i_9] [i_9] = 94;
            var_25 = ((!(28382 || -351678736)));
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 4; i_16 < 17;i_16 += 1)
                    {
                        {
                            var_26 = (arr_21 [i_8]);
                            arr_46 [i_8] [i_8] [i_14] [i_14] = ((arr_32 [i_16 - 2] [i_16] [i_16 + 1] [i_16 - 4] [i_16 - 3]) < (arr_38 [12] [i_13]));
                        }
                    }
                }
                var_27 = (arr_45 [i_13]);
            }
            for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
            {
                var_28 = ((((((248 ? (arr_21 [i_8]) : 60)) + 2147483647)) >> (((~var_0) - 1215445654147736354))));
                var_29 *= var_2;
            }
            for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
            {
                var_30 = (((arr_38 [i_8] [i_8]) ? var_2 : (arr_31 [i_8] [i_8] [13] [i_18])));

                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    var_31 = 28382;
                    var_32 = var_0;
                    var_33 &= 0;
                    var_34 = ((((var_11 ? (arr_31 [i_8] [i_13] [10] [i_13]) : (arr_54 [2] [i_8] [i_13] [i_18] [i_18] [i_19]))) + ((((arr_23 [i_8]) ? (arr_44 [8] [16] [i_18] [i_8]) : 63)))));
                }
                for (int i_20 = 1; i_20 < 17;i_20 += 1)
                {
                    var_35 = (((arr_56 [i_20 + 1] [i_20 - 1] [i_20] [i_8]) ? (~var_3) : 1));

                    for (int i_21 = 0; i_21 < 18;i_21 += 1)
                    {
                        var_36 = (arr_45 [i_8]);
                        arr_61 [i_21] [i_21] [i_8] [i_8] [i_21] = ((arr_56 [i_8] [i_13] [i_18] [i_8]) ? ((var_0 ? var_6 : var_3)) : var_5);
                        var_37 = -6321678080255696594;
                    }
                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        var_38 = (min(var_38, ((-(arr_56 [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_18])))));
                        var_39 = (min(var_39, 35074));
                    }
                    for (int i_23 = 0; i_23 < 18;i_23 += 1)
                    {
                        var_40 = (arr_25 [i_8] [i_13]);
                        arr_67 [i_8] [i_13] [i_18] [i_8] [14] [1] [i_23] = (~3393580040113394504);
                    }
                }
                for (int i_24 = 0; i_24 < 18;i_24 += 1)
                {
                    arr_71 [10] [i_8] [i_8] [i_8] [1] = -3393580040113394504;
                    var_41 = (((arr_39 [1] [2] [i_8]) ? ((1 ? 241 : 85)) : 1));
                    var_42 = (((((~(arr_32 [i_8] [1] [i_13] [i_18] [i_24])))) > (1 % 2329217732161162391)));
                }
                var_43 = -50222;
            }
            var_44 = (max(var_44, (arr_39 [i_8] [i_13] [i_8])));
        }
        for (int i_25 = 0; i_25 < 1;i_25 += 1)
        {

            for (int i_26 = 0; i_26 < 18;i_26 += 1)
            {
                var_45 = (var_3 >= 18506);
                var_46 = ((16427 ? (var_2 < -5457186038741418773) : ((((arr_26 [i_25]) && var_0)))));
                var_47 = (max(var_47, var_7));
            }
            var_48 = ((((((arr_47 [i_8]) ? 50222 : var_8))) ? -8742145831224319227 : var_9));
        }
        arr_77 [i_8] = ((853572911 ? 79 : 24));
    }
    #pragma endscop
}
