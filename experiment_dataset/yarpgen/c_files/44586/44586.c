/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((var_0 ? ((((var_12 ? var_13 : var_10)) ^ var_13)) : -1106014687206527410));
    var_18 = (~var_0);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_19 = (max(var_19, (arr_0 [i_1])));

            for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_20 = (min(((var_0 * (((arr_5 [i_2] [i_1] [i_1]) ? (arr_1 [i_0]) : (arr_5 [i_2] [6] [i_2 - 1]))))), ((((max(var_8, var_14)) + ((var_0 ? -1393593824 : (arr_1 [i_2]))))))));
                var_21 = (arr_6 [15] [i_1 - 1] [i_0] [i_0]);
                var_22 = (min(var_22, (26140 % 126)));
            }
            for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_23 -= (max(248941139468662343, 9223372036854775805));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_24 = (max(((max(var_7, 251))), ((min(1, 0)))));
                        var_25 = ((((((arr_10 [i_4]) ? (min(var_6, var_5)) : (((var_6 ? var_11 : (arr_13 [i_0] [i_0] [i_1] [i_3] [10] [i_5]))))))) ? (max(1959604568, 17733)) : ((max(((var_2 ? 127 : var_14)), 33538048)))));
                        var_26 = -120;
                        arr_16 [i_4] [9] = (max(((-(arr_4 [i_1 - 2] [i_3 - 1] [i_5 - 1]))), ((var_10 ? var_14 : (arr_4 [i_1 - 2] [i_3 - 1] [i_5 - 1])))));
                    }
                    arr_17 [i_4] [20] [i_4] = (max((((min(7965790850353637194, (-2147483647 - 1))))), ((((max(2108080934, 6144288167850085113))) ? var_11 : ((var_3 ? 9223372036854775807 : (-9223372036854775807 - 1)))))));
                }
                arr_18 [i_0] [i_0] = (arr_8 [i_0] [i_1]);
                arr_19 [17] [i_1] |= var_5;
            }
            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_27 += (-2147483647 - 1);
                var_28 = (min(var_28, (((var_16 << (var_10 + 3178668325759881213))))));
                var_29 |= (((arr_4 [i_6 - 1] [i_6] [i_6]) ? var_2 : -17705));

                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    var_30 ^= 1959604568;
                    arr_24 [14] [i_1] [i_1] [18] [i_1 - 2] &= ((((min(var_2, 2208137074))) ? ((min((~var_0), (-127 - 1)))) : var_6));
                }
                var_31 -= ((((var_15 ^ var_9) ? ((((arr_5 [6] [i_1 + 1] [i_6]) ? var_0 : 17761))) : ((var_4 ? var_12 : -5918332774013449818)))));
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_32 = (((arr_9 [i_0] [21] [i_8 - 1]) ^ 119));
                arr_27 [i_0] [i_0] = ((-707147034 ? ((max(var_9, var_6))) : var_1));
            }
        }
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            var_33 = var_13;
            arr_32 [i_9] &= (max(((((!47993) || (arr_22 [i_9 + 1] [i_9 - 1] [i_9 - 1])))), var_3));
            var_34 |= ((var_5 ? ((-(1 ^ var_0))) : var_7));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_35 = (max((var_4 ^ var_14), (((-127 - 1) ? var_2 : (arr_29 [2] [5])))));
            arr_35 [i_10] = (max((arr_15 [i_0] [8] [i_10] [11] [i_10] [i_0]), (9223372036854775807 > 1)));
            var_36 = ((var_6 ? (!var_15) : ((-575212858 ? var_9 : (~var_6)))));
            var_37 = (min(var_37, var_9));
            var_38 = ((var_6 - (((1 ? -18057 : 0)))));
        }

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_40 [i_11] = 46946;
            var_39 &= (arr_37 [i_0]);
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_40 += var_8;
            var_41 = (max(-var_16, var_11));
            var_42 &= (((((var_15 ? 1 : (max(-231005620, 262143))))) ? var_1 : (((((5972568845394756584 << (65532 - 65532)))) ? (max(7324066916090774601, 18446744073709551609)) : var_6))));
            var_43 = (max(((max(2675, var_15))), (((((arr_43 [i_0]) + 9223372036854775807)) << (((((min((arr_7 [i_12]), var_2)) + 6439608297855939230)) - 61))))));
        }
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        arr_48 [i_13] [2] = (min(((var_14 ? (arr_42 [i_13] [21]) : var_12)), var_2));
        var_44 = (((var_6 ^ (min(var_3, (arr_23 [i_13] [i_13]))))));
    }
    #pragma endscop
}
