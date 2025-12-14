/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_20 = (min(((var_2 & (~1))), (arr_7 [0] [i_1] [i_2] [i_3] [i_2] [i_0])));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_21 = (max(var_21, (((-(arr_13 [i_0 + 2] [7] [i_2] [i_2] [i_3 - 1] [i_3] [i_4]))))));
                            var_22 ^= 8191;
                            var_23 ^= ((((((arr_3 [i_0 - 1]) ^ -8192))) ? (((((min(var_0, 47432)) <= (arr_5 [i_0 + 1]))))) : 18446744073709551613));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_24 = (min(var_24, 5));
                            var_25 = (arr_0 [i_0]);
                            var_26 = ((min(var_0, (arr_15 [i_0] [8] [i_2] [i_3] [i_5]))));
                        }

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_27 = (arr_15 [i_0] [i_1] [i_2] [i_0] [11]);
                            arr_19 [i_1] [i_3] = -8194;
                            var_28 = (max(var_28, ((((((!(arr_12 [i_1] [i_6] [i_2])))) + (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_29 *= 47432;
                            var_30 = (var_1 & 1);
                            var_31 ^= var_16;
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_0 + 2] [i_0 + 2] [1] [10] [7] |= ((max(var_11, (arr_7 [i_0] [i_1] [i_2] [i_3] [i_2] [i_8]))));
                            var_32 = (~1450659008);
                            var_33 = (((~(max(var_15, (arr_21 [i_0] [i_1] [i_2] [i_3] [i_8]))))));
                            var_34 = (~-1617747042);
                        }
                        var_35 = (arr_0 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        var_36 = var_12;

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_32 [i_10] [1] [i_9 - 1] [i_2] [i_1] [i_0] [i_0] |= ((var_9 << (arr_28 [i_0] [i_1] [i_2] [i_9] [i_1])));
                            var_37 = (arr_9 [i_0 + 1] [i_1 + 2] [9] [2] [i_9 + 1] [i_9 + 1]);
                            arr_33 [6] [6] [i_9] [i_10] = (arr_4 [i_0 + 2] [i_0 - 1] [i_1 - 1] [i_9 - 1]);
                            var_38 ^= (arr_24 [i_0] [i_0] [i_2] [12]);
                        }
                        for (int i_11 = 3; i_11 < 11;i_11 += 1)
                        {
                            var_39 = ((-8734617315951619218 ? (arr_1 [i_1 - 1]) : (var_12 || var_4)));
                            arr_38 [i_9 - 2] = ((((((arr_14 [i_0] [11] [i_1] [i_9] [i_11]) > var_5))) >> (((arr_12 [i_0 + 1] [i_0] [i_0 + 2]) - 4161497685212934941))));
                        }
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            var_40 = (var_1 & var_1);
                            var_41 = var_11;
                        }
                        var_42 |= ((-6 * (arr_1 [8])));
                        var_43 -= (!var_3);
                        arr_41 [i_2] |= (((arr_28 [i_9] [i_9] [i_0 - 1] [i_0] [i_0]) * (arr_28 [i_2] [i_2] [i_0 - 1] [i_0 + 2] [i_0])));
                    }
                    for (int i_13 = 2; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_44 = 8734617315951619224;
                        var_45 = (((((+(((arr_23 [7] [i_2] [i_1] [5] [i_1] [7] [i_0]) - var_4))))) && (arr_29 [8] [8] [i_0] [i_0] [i_0 + 1] [i_2])));
                        var_46 *= var_17;
                    }
                    for (int i_14 = 2; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        var_47 = (arr_6 [i_0] [i_1 + 2] [i_2] [1] [i_14 - 1]);
                        var_48 = ((((((arr_6 [6] [i_1 + 2] [i_0 + 2] [i_14 + 1] [i_14]) - (arr_13 [8] [i_0] [i_0 + 2] [8] [1] [i_0 + 1] [i_2])))) ? (arr_24 [i_0] [i_0 + 1] [i_1 - 2] [i_14 - 2]) : (((arr_24 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_14 + 1]) % (arr_6 [i_0] [i_1 - 1] [i_0 - 1] [i_14 - 2] [i_0])))));
                    }
                    arr_47 [i_2] [i_1 + 2] [i_0] = -1854632180296094911;
                }
            }
        }
    }
    var_49 = (max(var_19, var_4));
    var_50 = var_2;
    #pragma endscop
}
