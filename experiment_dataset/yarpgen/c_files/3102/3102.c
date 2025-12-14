/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 = (((max(var_4, (arr_7 [i_0])))));
                        var_16 = (max(var_16, ((min((arr_2 [i_1] [i_0] [i_1 - 2]), (((var_12 ? var_11 : 1))))))));
                        arr_9 [i_1] = (max(((14595675924170016616 ? 1 : 32760)), var_3));
                        var_17 = ((((max(-3286, 3289))) ? (min(((max(var_12, var_10))), (max(var_1, 32760)))) : (((var_0 ? (arr_0 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_1 - 1] [i_1]))))));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_18 = (min((arr_2 [i_0] [i_1] [i_1 - 1]), (((arr_2 [i_0] [i_1] [i_1 - 2]) ? var_9 : -106))));
                var_19 = (max(((32769 ? 18 : 1)), 1));
            }
        }
        var_20 = (max(var_20, ((min((min(-49, -7372491970973757301)), (max((arr_2 [i_0] [i_0] [14]), var_6)))))));
        var_21 = (min(var_21, (((max(22239, (arr_4 [i_0])))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_22 = 26;
                        arr_26 [i_8] [i_6 - 2] = 32772;
                    }
                }
            }
        }
        var_23 = ((var_14 ? 114 : 9));
        arr_27 [i_5] [i_5] = (arr_11 [i_5]);
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_31 [i_9] [i_9] = (arr_6 [i_9] [i_9]);
        var_24 = ((-1 ? ((((arr_2 [i_9] [i_9] [i_9]) ? var_11 : (arr_25 [i_9] [i_9] [i_9])))) : ((1437467136 ? var_1 : var_6))));
        var_25 = (min(var_25, var_1));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            var_26 = (arr_35 [i_11 - 1] [i_11 + 1] [i_11 - 1]);
            var_27 = ((0 ? 1 : 8));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            var_28 = ((var_3 ? 255 : (arr_33 [i_10] [i_12])));
            var_29 = 45149;
        }

        /* vectorizable */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {

            for (int i_14 = 2; i_14 < 21;i_14 += 1)
            {
                var_30 = (((arr_40 [i_14 - 1] [i_14 + 1] [i_10]) ? (arr_39 [i_14 + 1] [i_14 + 1] [i_14]) : 242));

                for (int i_15 = 3; i_15 < 18;i_15 += 1)
                {
                    var_31 = (min(var_31, (((var_7 ? 0 : (arr_39 [i_15 + 1] [i_10] [i_14 + 1]))))));
                    var_32 = (arr_43 [i_14 - 2] [i_14 - 2] [i_14] [i_14 - 1] [i_14 + 1] [i_15 - 2]);
                }
            }
            arr_46 [i_13] = (arr_41 [i_13] [i_10]);

            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                var_33 = ((var_1 ? (arr_39 [i_10] [i_13] [i_16]) : var_12));
                var_34 += (((arr_45 [i_10] [i_13] [i_13] [i_16]) ? var_8 : 255));
            }
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                var_35 = (min(var_35, (((arr_36 [i_10] [i_13]) ? var_0 : (arr_48 [i_17])))));
                arr_53 [i_10] [i_10] = 6181;
            }
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                var_36 = (max(var_36, (((var_4 ? (arr_35 [i_10] [6] [i_18]) : (arr_35 [i_10] [i_13] [i_18]))))));
                var_37 = (((arr_35 [i_10] [i_10] [14]) ? 3291060012 : var_9));
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                arr_58 [i_10] [i_19] [i_13] [i_19] = ((var_6 ? 24721 : (arr_32 [i_10])));
                var_38 = ((2147483647 ? 1 : 229501148));
                var_39 = ((var_4 ? (arr_41 [i_10] [i_10]) : (arr_32 [i_13])));
            }
            var_40 -= ((4294967295 ? 65024 : 2432483398594264547));
        }
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        var_41 ^= min(0, 4398046511103);
        var_42 -= (min(((var_0 ? var_4 : 9199314779623157755)), (((var_3 ? (arr_32 [i_20]) : (arr_32 [i_20]))))));
        arr_61 [i_20] [i_20] = ((((max(15, var_11))) ? (arr_54 [i_20]) : (((arr_52 [i_20] [8] [i_20] [i_20]) ? 0 : var_3))));
    }
    #pragma endscop
}
