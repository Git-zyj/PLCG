/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_4;
    var_20 = var_0;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_21 = ((min((49994 + var_17), ((((arr_0 [8]) - var_16))))) + 0);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_22 ^= 4075837887803815859;
            arr_7 [i_1] [i_0] = (+-4075837887803815859);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_23 -= 102;

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_17 [4] [i_0] [i_0 - 1] [i_2] [i_0] = ((var_0 * (arr_11 [i_0 + 1] [i_5])));
                            var_24 = (max(var_24, 10601426840657703115));
                        }
                    }
                }
                var_25 = (max(var_25, ((-1144862661 ? 15542 : 4075837887803815834))));
                var_26 = (((0 ? 61899 : 7845317233051848500)));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_27 = (arr_25 [i_2] [i_0 - 1] [i_2]);
                            var_28 = var_1;
                        }
                    }
                }
                var_29 = (((~-1144862661) ? var_0 : (arr_1 [i_0 + 2])));

                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_30 = (max(var_30, ((((arr_22 [i_9 - 1] [i_2]) ? (arr_19 [i_9 - 1] [i_0 - 2] [i_0 + 2]) : (arr_26 [i_0 + 1] [i_0 + 2] [i_0]))))));
                    var_31 = (-828782871 + -1144862661);
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        var_32 = (arr_24 [i_2] [i_2] [i_6] [i_2] [i_11]);
                        var_33 ^= (((arr_14 [i_2] [i_6] [i_2] [i_0 + 2]) == (arr_14 [i_11 + 3] [i_6] [i_2] [i_0])));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_35 [i_10] [i_10] [i_10] [i_10] [i_2] = -6667;
                        arr_36 [i_0] [i_2] = (arr_20 [17] [i_10] [i_0 - 2] [i_0 + 2]);
                        arr_37 [i_2] = (((18129 ^ (arr_25 [i_2] [i_6] [i_6]))));
                    }

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_34 = var_4;
                        var_35 = (arr_39 [i_0] [i_2] [i_13] [i_0 + 1]);
                        var_36 = (max(var_36, (~var_15)));
                        arr_40 [i_2] [i_0] [i_13] = 1392303339;
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_37 = (((arr_23 [i_0 - 1]) * (arr_23 [i_0 - 2])));
                        arr_43 [i_0] [12] [12] [i_10] [10] [i_2] = var_5;
                        var_38 += 61897;
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        arr_46 [i_2] = 6660;
                        var_39 |= (((((var_12 ? (arr_2 [i_6] [i_6]) : (arr_27 [i_15])))) ? (arr_15 [i_0] [i_2] [i_6] [8] [i_15]) : (arr_30 [i_10] [i_0 + 2] [i_2])));
                    }
                }
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_40 -= ((((~(arr_48 [i_0] [i_0] [15])))) ? (arr_25 [i_6] [i_2] [i_0 + 1]) : (arr_38 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [15]));
                    var_41 = ((var_6 ? var_17 : -1983715072));
                    var_42 = (((arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1]) > (arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 2])));
                    arr_49 [i_2] = (((((arr_0 [i_6]) >> 0)) == 26091));
                }
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    var_43 = 1439660885;
                    var_44 = (arr_22 [i_6] [i_2]);
                }
                arr_52 [i_2] [i_0] [i_2] = ((var_8 ? 4294967295 : var_14));
            }
            arr_53 [i_2] [i_2] = (~-1439660881);
        }
    }
    var_45 = var_17;
    #pragma endscop
}
