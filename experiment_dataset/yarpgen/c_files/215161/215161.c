/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = (max(var_11, (((var_2 ? (!var_5) : (var_2 + var_8))))));
    var_12 |= var_2;
    var_13 = (min(var_13, (((min(0, (max(var_8, -1095409688066418579))))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 |= ((min((((var_6 > (arr_1 [16])))), var_1)) - (((((arr_1 [1]) ? var_1 : var_8)) | (arr_1 [18]))));
        var_15 &= ((!(arr_0 [6])));
        arr_2 [i_0] = (min(((1603687856 ? 510 : 50)), (arr_0 [i_0])));
        var_16 += ((((min((((arr_0 [14]) ? var_0 : (arr_0 [16]))), (((var_4 + 2147483647) << var_7))))) < (((arr_1 [4]) ? (arr_0 [0]) : (~3964374547)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = (min(var_17, (arr_0 [20])));
        var_18 = (max(var_18, (arr_0 [0])));
        arr_5 [i_1] = 1;
        var_19 = (max(var_19, (((var_2 % ((~((var_7 ? var_5 : (arr_0 [4]))))))))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_20 = (((((var_4 & 51087) ? 14609 : 18789)) >> (((!((0 >= (arr_4 [i_2] [i_2]))))))));
        arr_8 [i_2] = (arr_0 [8]);
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_21 = 746981219;
        var_22 = (((4 < -746981219) % 22557));
        var_23 = (min(var_23, 746981219));

        /* vectorizable */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            arr_13 [i_3] [i_4] = (~21165);
            var_24 ^= var_2;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                var_25 = (min(var_25, 35625));

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_26 = (max(var_26, (((-1170712450 ? ((56370 ? 4 : 62)) : (((arr_17 [11] [i_5] [11] [i_7]) >> (((arr_21 [1] [i_5]) - 905037012)))))))));

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_26 [i_6] [i_3] [0] [i_8] = ((5351 - 65532) ? (arr_1 [i_3]) : ((1376205180 ? 58825 : 3)));
                        arr_27 [i_3 + 1] [i_5] [i_6] [i_7] [3] [3] [i_3] = (arr_15 [i_3 - 1] [9] [i_6 + 3]);
                    }
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        arr_30 [i_9] [4] [i_5] [i_5] [i_5] [i_3] [i_3] &= (arr_23 [i_9] [i_5]);
                        arr_31 [2] [i_5] [i_6] [i_3] [i_3] = (((arr_1 [i_3]) != (arr_0 [i_3])));
                    }
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        var_27 |= ((0 ? 71 : 2918762116));
                        var_28 = (arr_24 [13] [14] [i_6] [14] [i_10]);
                    }
                }
            }

            for (int i_11 = 4; i_11 < 14;i_11 += 1)
            {
                var_29 = (((((var_3 ? (arr_1 [i_3]) : (arr_21 [i_3] [i_5])))) ? ((var_9 ? var_5 : (arr_10 [i_11 + 1] [1]))) : (arr_23 [2] [i_3])));
                arr_36 [i_5] [i_11] [i_5] [i_5] |= (arr_6 [i_3 - 1]);
            }
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                var_30 = (max(var_30, ((!(arr_23 [i_3] [i_5])))));
                var_31 = ((var_6 ? (arr_35 [i_12 + 1] [i_3 - 1] [i_12 + 1]) : 4220789750391685292));
                var_32 = (arr_12 [i_12 + 1] [6] [6]);
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                var_33 = ((~(arr_1 [i_3])));
                var_34 |= (((((arr_40 [10] [i_3] [i_3]) ? (arr_34 [3] [3] [i_13]) : (arr_22 [4] [i_5] [i_13] [i_5] [6]))) / -118));
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_35 = 1322910199;
                var_36 = (((arr_29 [i_3] [12] [i_3 + 1] [i_5] [i_14] [i_14]) ? 10321 : (arr_38 [i_3] [i_5] [i_14])));
            }
            arr_43 [i_3] [i_5] = ((arr_22 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_5]) ? (arr_22 [9] [i_3] [i_3 - 1] [i_3 - 1] [i_5]) : (arr_22 [i_3] [i_3] [i_3 - 1] [i_5] [i_5]));
            var_37 = (((((var_3 ? (arr_7 [i_5]) : var_8))) ? -18787 : ((22557 / (arr_39 [i_5] [3] [3] [i_3])))));
            var_38 -= ((-32 ? (((12 >= (arr_40 [12] [i_3] [i_3])))) : (arr_15 [i_3 + 1] [i_3] [i_3 + 1])));
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 13;i_15 += 1)
        {
            var_39 = ((var_5 ? (((!(arr_0 [i_3])))) : ((((arr_16 [7] [i_15]) || (arr_23 [14] [i_3]))))));
            var_40 = (2731248521 >= 51102);
        }
    }
    #pragma endscop
}
