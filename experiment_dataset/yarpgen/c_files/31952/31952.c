/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 *= (((arr_2 [i_0]) ? (max(((1 >> (((arr_3 [2] [i_0]) - 87)))), (arr_1 [i_0]))) : (arr_3 [1] [1])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_12 = (((arr_5 [i_0] [i_1] [i_1]) ? (((((~(arr_0 [i_0])))) ? ((((arr_0 [i_0]) ? var_3 : var_0))) : (((arr_0 [i_0]) << (((arr_2 [i_0]) - 72)))))) : (arr_5 [i_0] [11] [i_0])));
            var_13 = ((+((((max((arr_1 [6]), 4663405103648037817))) ? (arr_0 [i_0]) : (var_2 > var_5)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_14 = (((arr_3 [i_0] [i_2]) ? var_6 : (arr_4 [i_0])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_3] [4] [i_0] = (((arr_15 [i_4 + 3] [i_4 - 3] [i_5]) << (var_7 - 25002)));
                            arr_18 [i_0] [i_0] = (var_1 % var_6);
                            arr_19 [i_0] [i_0] [i_3] [i_4] [i_0] = ((var_0 ? (arr_13 [i_4 + 2] [i_4 + 2] [9] [i_4 - 1] [i_0]) : var_6));
                        }
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_15 = (+((min((arr_14 [i_0] [i_6] [i_7] [i_6 + 1]), (arr_14 [0] [i_6 + 1] [i_7] [i_7])))));
                var_16 = (min((arr_4 [i_0]), (((!((((arr_4 [i_0]) ? var_9 : (arr_21 [i_0] [i_6] [i_0])))))))));

                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_27 [i_0] = (arr_1 [i_6 - 1]);
                    var_17 *= (arr_6 [1] [i_6 - 1] [i_7]);
                    arr_28 [0] [1] [i_0] = (max((max((arr_3 [i_0] [i_0]), var_1)), ((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
                    var_18 = (max((arr_4 [i_0]), (((((arr_12 [i_6 + 1]) + 2147483647)) << (var_2 - 56)))));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_31 [i_0] [i_6] [i_7] [i_0] = (((((arr_7 [i_6 + 1]) != (arr_7 [i_6 - 1]))) ? (arr_4 [i_0]) : (((arr_26 [i_0] [i_6 - 1] [i_8] [i_9]) ? (arr_26 [i_0] [i_6] [i_0] [i_9]) : (arr_26 [i_0] [i_6] [i_7] [i_8])))));
                        arr_32 [i_0] [i_6] [7] [i_8] = (max((max(((46584 ? var_5 : (arr_20 [i_7] [i_8] [4]))), (arr_20 [i_6] [i_6 + 1] [i_7]))), ((max((arr_20 [i_0] [i_7] [i_9]), (arr_20 [i_0] [i_7] [i_8]))))));
                    }
                }
            }
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                var_19 += (((max((arr_0 [i_10]), (((var_9 ? (arr_20 [0] [i_6] [i_10]) : 1058518972)))))) ? (arr_30 [i_10]) : (arr_34 [i_10] [i_6 + 1] [i_10]));
                var_20 = (((((arr_3 [i_0] [i_10 + 1]) ? var_8 : (arr_3 [i_0] [i_10 + 2]))) | (~var_6)));
                var_21 = ((-(((-7955263344942988435 == ((((-32767 - 1) ? 0 : 32752))))))));
            }
            arr_35 [i_0] = (max(0, ((((max((arr_0 [i_0]), (arr_5 [i_0] [1] [i_6 - 1])))) ? ((min((arr_22 [i_0] [i_0] [9] [i_6 - 1]), var_10))) : (!0)))));

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_22 = (((((((arr_22 [i_0] [i_6 + 1] [i_6 - 1] [i_6 + 1]) <= (arr_14 [i_0] [i_6 + 1] [i_6 + 1] [i_6 + 1]))))) % ((((max((arr_6 [1] [i_6] [1]), var_7))) ? (var_1 & var_5) : (arr_15 [i_0] [i_6] [i_11])))));
                var_23 = (max(((max(var_3, var_10))), (32752 % var_5)));
                arr_38 [7] [i_6] [i_0] = (min(((((var_7 | -110) ? (var_9 | var_8) : ((var_8 ? (arr_37 [i_11] [i_0] [i_0] [i_0]) : 1))))), (((arr_15 [i_0] [i_6] [i_11]) ? ((((arr_30 [i_0]) | var_4))) : ((var_10 ? (arr_5 [i_11] [i_6 - 1] [i_0]) : (arr_26 [i_6] [i_6] [i_0] [i_0])))))));
            }
        }
        var_24 = (max((max(-7520813298681561847, 1)), ((((1 + var_2) ? var_0 : ((max((arr_5 [2] [i_0] [2]), var_6))))))));
        var_25 = (1 * 0);
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_26 = ((4294967287 | (((max(var_9, (arr_41 [i_12])))))));
        var_27 = (max((arr_39 [i_12]), ((max(((8310 ? (arr_41 [10]) : (arr_41 [17]))), 595033263)))));
        var_28 = ((((max(var_7, (arr_39 [i_12])))) * ((((arr_39 [i_12]) == (arr_39 [i_12]))))));
        var_29 = ((15169 ? 1 : 221));
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_30 ^= (((max((arr_41 [i_13]), (arr_40 [i_13] [i_13]))) / (max((arr_40 [i_13] [i_13]), 2219106100510025451))));
        var_31 = (((((((arr_40 [i_13] [i_13]) <= (arr_41 [i_13]))) ? (max(var_1, var_3)) : (arr_41 [i_13]))) % (max(((16682 ? (arr_39 [i_13]) : (arr_41 [i_13]))), (var_7 & var_1)))));
        arr_44 [i_13] [16] = (max((!18446744073709551584), (min((arr_40 [i_13] [i_13]), (arr_41 [i_13])))));
        var_32 = (max((max((!var_10), (min((arr_40 [i_13] [i_13]), var_6)))), -71));
    }
    var_33 = (max(43660, 3417081684020167183));
    #pragma endscop
}
