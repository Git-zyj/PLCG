/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((!var_3), ((var_15 ? 266307774 : (!var_9)))));
    var_19 = var_14;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_8 [i_2] [i_0] [i_0] = (-2147483627 == 43);

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_20 = 1;
                    arr_11 [i_3] [i_0] [i_1] [i_0] = (((arr_10 [i_0] [i_3] [i_2] [i_1] [i_0]) > (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])));

                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [6] [6] [i_4] = ((0 - 1) ? 65535 : (arr_13 [i_4 + 1] [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 3] [1]));
                        var_21 = (arr_1 [3]);
                    }
                    arr_16 [i_0] [i_0] [i_2] [9] [i_3] = ((1 * ((-5770 ? 363460060 : 407860595667282790))));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_21 [i_6] [i_6] [i_5] [i_0] [i_0] [i_0] [i_0] |= (-1 ? (arr_7 [i_5] [i_5] [i_5]) : (arr_7 [i_0] [i_1] [i_2]));
                        var_22 = (((~var_12) - (((arr_5 [i_1] [6] [i_2] [i_1]) ? 12423 : 407860595667282792))));
                        arr_22 [i_2] [6] [i_2] [i_2] [i_1] = var_17;
                        arr_23 [i_6] = (arr_7 [i_0] [i_1] [i_0]);
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [4] [i_7] [i_0] [i_7] = (arr_17 [i_2]);
                        var_23 = (min(var_23, (((-((1 ? -32742 : var_3)))))));
                    }
                    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_0] [i_2] [i_0] [i_8] |= ((arr_28 [i_0] [i_8 + 1] [i_8] [0] [0]) - (arr_24 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_1] [i_8]));
                        arr_31 [1] [i_0] [i_0] [i_2] [i_5] [i_5] [i_8 - 1] = (arr_20 [i_0]);
                    }
                    arr_32 [i_1] [i_1] [i_1] [4] = ((0 ? (arr_29 [i_0] [i_1] [i_2] [i_5] [2]) : (arr_29 [i_1] [i_1] [i_2] [i_5] [9])));
                }
            }
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                arr_36 [i_1] [i_9] [i_0] [8] = ((51367 ? -32766 : (-9223372036854775807 - 1)));
                arr_37 [i_9] [i_1] [1] [i_1] = ((-((~(arr_33 [i_0] [i_1] [i_9 - 1] [i_0])))));
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_24 = (max(var_24, var_1));
                var_25 ^= (arr_39 [i_1] [i_10]);

                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    arr_44 [i_0] [i_0] = 2982312962;
                    arr_45 [i_0] [i_0] [i_1] [i_0] [i_0] = var_8;
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    arr_50 [6] [i_12] [i_10] [i_10] = ((((2065456983 ? -2147483619 : (arr_0 [i_0] [i_0]))) <= (~-8797)));
                    arr_51 [i_12] [i_12] [i_1] [i_12] [i_12] = (((1237223405 != -4349) ? (2147483647 - 1) : (arr_38 [i_0] [i_0])));
                    arr_52 [i_12] = var_3;
                    arr_53 [i_12] = (arr_40 [i_1] [i_10] [i_1] [i_0]);
                }
                arr_54 [i_0] [i_0] [i_0] = (arr_24 [2] [i_1] [i_1] [i_10] [i_1] [i_1] [4]);
                var_26 ^= (((arr_19 [i_0] [1] [i_1] [i_0] [i_10] [i_10]) ? (arr_19 [i_0] [i_0] [2] [i_0] [i_0] [i_0]) : (arr_19 [i_10] [i_10] [i_1] [i_1] [i_0] [i_0])));
            }
            var_27 = (max(var_27, ((((-2065456984 == 2952748083) ? (arr_14 [i_0]) : (arr_48 [i_1]))))));
            arr_55 [i_0] = ((1005037870 ? 127 : 2065457010));
        }
        var_28 += ((~((-(arr_39 [i_0] [i_0])))));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_29 = (max(var_29, ((max((arr_56 [i_13]), (~63))))));
        arr_59 [i_13] [i_13] = (((min((max(511, (arr_57 [i_13]))), var_4)) ^ var_5));
        var_30 = var_4;
        arr_60 [i_13] [i_13] = (~-var_6);
    }
    var_31 = ((~(min(var_15, var_3))));
    #pragma endscop
}
