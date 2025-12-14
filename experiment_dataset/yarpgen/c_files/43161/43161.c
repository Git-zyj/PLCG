/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_20 = (max(var_20, (((~(((255 + 2147483647) >> (((arr_4 [8]) + 1809432201995935359)))))))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_21 = (((((!(((-255 ? var_3 : (arr_11 [i_4] [i_4 + 3] [i_2] [i_3] [i_4 + 1]))))))) ^ (var_4 | var_2)));
                            var_22 = ((((((1 ? (arr_5 [i_2] [i_2] [i_2] [i_2]) : var_5)))) * ((min(var_12, (arr_6 [i_0]))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_17 [i_0] = var_5;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_23 = (((arr_21 [8] [i_6 + 3] [i_6] [i_7] [i_5 + 1] [i_6]) ? ((var_8 ? -20220 : (arr_6 [i_7]))) : ((var_2 ? 255 : (arr_5 [i_0] [i_5] [i_6] [5])))));
                        arr_22 [i_0] [i_5 + 1] [i_0] = (((arr_1 [i_5 + 2]) ? 759468199559419289 : ((((arr_7 [i_0] [i_5] [i_6] [i_6] [i_7]) ? var_5 : (arr_13 [i_0] [i_5 - 2]))))));
                    }
                }
            }
            var_24 = ((!(arr_12 [3] [i_0] [i_0] [1] [i_0] [i_5 - 2] [i_5])));
            var_25 = -var_7;
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_26 |= (((~255) - (arr_18 [i_8 + 1] [i_8 + 1])));

            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {

                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    var_27 = (arr_15 [i_8 + 1] [i_9] [i_9 + 1]);
                    var_28 -= (-(arr_15 [i_8 + 1] [i_8 - 1] [i_8 - 1]));
                    arr_31 [i_0] [2] [i_10] |= (((arr_18 [i_8] [i_0]) ? (~var_10) : ((-(arr_15 [i_0] [i_10] [i_9 - 1])))));
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_29 ^= (((534395661 % 1) == -18446744073709551615));
                    var_30 = (((arr_14 [i_0] [i_9 + 2]) ? var_18 : (arr_21 [i_0] [i_8] [i_8] [i_9 + 1] [i_8 + 1] [i_8 + 2])));
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_31 = (min(var_31, (((156 ? (arr_23 [i_9 - 2] [i_9 - 3]) : var_7)))));
                        var_32 *= -var_9;
                        var_33 = (i_0 % 2 == zero) ? (((84 << (((arr_4 [i_0]) + 1809432201995935361))))) : (((84 << (((((arr_4 [i_0]) + 1809432201995935361)) - 1645924622328360869)))));
                    }
                    var_34 = ((var_1 ? var_13 : var_2));
                }
                arr_42 [i_0] = (((((~(arr_36 [i_0] [i_8 - 2] [0] [i_0])))) ? var_9 : ((((arr_19 [i_9] [i_8 + 2] [i_8]) >= (arr_16 [i_0] [i_0]))))));
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_35 = ((-(arr_9 [i_0] [i_8 - 1])));
                arr_45 [7] [i_0] [i_14] = (arr_3 [i_8 - 1] [i_0]);
            }
        }

        /* vectorizable */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            arr_48 [i_15] [i_15] [10] |= ((~((~(arr_12 [i_0] [8] [i_0] [4] [i_0] [i_15] [i_15])))));
            var_36 *= var_3;
        }
    }
    #pragma endscop
}
