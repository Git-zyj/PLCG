/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = 1823601358;
            var_16 = (max(var_16, (arr_1 [i_1])));
            var_17 = 778748283;
        }
        var_18 = (min(var_18, (((((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_2 [4])))) ? (((((arr_2 [15]) || var_13)))) : (arr_3 [i_0] [i_0]))))));
        arr_6 [i_0] = (((50 != var_14) ^ var_6));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_19 += ((((-10412 != (arr_7 [i_2]))) ? (arr_7 [i_2]) : (37 != 59579)));
        arr_9 [i_2] = 9197355685085612511;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_20 += ((((max(31, 15746))) ? (arr_10 [i_3]) : 10));
        var_21 = (min(-18540, 1823601376));
        var_22 *= 4032;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_23 = var_13;
            arr_17 [i_4] [i_4] [i_5] = (((arr_5 [i_4 - 2]) >= 100));
            var_24 += (((arr_10 [i_4 + 1]) ? (((!(arr_15 [i_5] [i_5] [i_5])))) : (var_8 && 2471365928)));
            var_25 = ((!(arr_1 [i_4 + 3])));
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    {
                        var_26 = (min(var_26, (arr_14 [i_7])));

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_9] = ((arr_13 [i_4 + 3] [i_4 + 3]) / 8);
                            var_27 = (max(var_27, (!var_11)));
                            arr_31 [i_8] [i_8] [i_4] [i_4] [i_4] = ((var_0 && (arr_24 [i_7] [i_7] [i_9])));
                            var_28 &= (((arr_8 [i_8 + 1]) != (arr_15 [i_8 - 1] [i_4 - 2] [i_6 - 1])));
                        }

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_29 += ((37 * (arr_25 [i_4 + 3])));
                            var_30 *= ((!(arr_25 [4])));
                            var_31 = (((((arr_35 [1] [1] [i_7] [i_4]) ? var_5 : (arr_0 [i_4]))) / var_9));
                        }
                    }
                }
            }
            var_32 = (max(var_32, ((((var_2 ^ var_5) & ((7680 ? 10739311300057769762 : 13824)))))));
            var_33 = var_4;
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_34 = (max(var_34, (((var_0 != (arr_2 [i_12]))))));

                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        var_35 += (((arr_42 [i_4] [i_4 + 1] [i_4]) ? ((((arr_23 [4]) || (arr_39 [i_4] [i_14] [i_12] [i_4])))) : (arr_12 [i_4 + 3])));
                        var_36 = (!var_2);
                    }
                    var_37 = (min(var_37, -126));
                    var_38 = (((arr_18 [i_4 - 2] [i_4 - 2]) ? 14 : (arr_5 [i_4 - 2])));
                    var_39 = ((arr_36 [i_4] [i_4] [i_12]) & 3);

                    for (int i_15 = 4; i_15 < 12;i_15 += 1)
                    {
                        var_40 = (arr_21 [i_15 - 3]);
                        var_41 ^= (arr_7 [i_13]);
                        var_42 *= var_2;
                    }
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    arr_50 [i_4] [i_11] [i_12] [6] &= (((arr_43 [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4]) / (arr_19 [i_4 - 2])));
                    arr_51 [i_4] [12] [12] [i_11] = 2471365967;
                    var_43 = (min(var_43, (((!(arr_4 [i_16]))))));
                    arr_52 [i_4] [i_4] [i_11] = (((arr_28 [i_4 - 1] [10] [i_4 - 1] [i_16] [i_16]) >> (((arr_0 [i_4 + 2]) - 31571))));
                }
                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    var_44 = ((((222 > (arr_32 [5] [i_11] [i_12] [i_12] [i_11] [i_17]))) && 18014398475927552));
                    var_45 = (((32744 || 3283875368) ? (!2471365926) : (arr_18 [10] [10])));
                    var_46 = 22;

                    for (int i_18 = 2; i_18 < 11;i_18 += 1) /* same iter space */
                    {
                        arr_59 [i_4] [8] [7] [i_4] [i_11] = ((~((67 ? var_5 : (arr_20 [i_12])))));
                        var_47 = (min(var_47, 231606933));
                        var_48 = (arr_26 [0] [i_18 - 2] [i_18 + 2] [i_18] [i_18 + 2] [i_18 + 2] [i_18 + 2]);
                    }
                    for (int i_19 = 2; i_19 < 11;i_19 += 1) /* same iter space */
                    {
                        var_49 = (min(var_49, 48));
                        var_50 = (((-443645065 != 18) ? (arr_1 [i_19 - 2]) : (~12344)));
                    }
                }
                var_51 += (((arr_28 [8] [1] [i_4] [i_4] [i_4]) & (arr_38 [i_4 + 1])));
                var_52 &= ((1 >= ((1 ? 113 : 16))));

                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    arr_64 [i_11] [i_11] [0] [i_20] = var_7;
                    var_53 = (min(var_53, (~7)));
                    var_54 = (((((arr_37 [i_4]) != 25910)) ? var_0 : var_0));
                }
            }
            var_55 = (arr_14 [i_4]);

            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                var_56 = ((~(arr_60 [i_4] [8] [i_4] [i_11] [8] [i_4] [i_4])));
                var_57 = (min(var_57, var_14));
                var_58 = (arr_19 [3]);
            }
        }
        var_59 = (((arr_27 [6] [i_4 - 1] [12] [i_4 - 1] [i_4] [i_4 - 1] [i_4]) - 30251));
    }
    var_60 = (max(var_60, var_6));
    var_61 = var_7;
    #pragma endscop
}
