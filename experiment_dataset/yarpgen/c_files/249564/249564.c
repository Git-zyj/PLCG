/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] = min((var_11 + var_17), ((max(var_13, 63))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = (max((((((arr_0 [i_1 - 2] [i_4]) - (arr_7 [i_0] [i_2 + 2] [9] [i_0]))) ^ (((max(var_8, var_12)))))), ((max(-1190837806, (min(-1990995148, (arr_6 [i_0] [i_1] [i_2] [i_2]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max((1188286779035786783 ^ 1190837806), (5753260010889896553 | 48))))));
                                var_19 += min(((((min(var_1, (arr_19 [0] [i_1] [0] [i_5] [i_6]))) <= (var_10 < var_2)))), (min(((max(var_0, -63))), (min(var_2, (arr_6 [i_0] [3] [9] [i_5]))))));
                                var_20 = (max((((max(-1190837794, 7690790145083583003)) ^ ((((arr_5 [i_0] [i_0] [i_2] [i_2]) / var_17))))), (var_11 & var_8)));
                                var_21 = ((((min((arr_5 [i_0] [i_1 - 3] [i_2 + 1] [i_6]), 1))) ^ (min(-1675225906, ((max((-32767 - 1), (arr_6 [i_0] [i_0] [i_5] [6]))))))));
                                var_22 = ((((((7690790145083583008 + (arr_15 [i_2]))) << 0)) < ((min(((min(var_0, (arr_17 [i_0] [i_1] [i_5] [i_5] [4] [i_0])))), var_17)))));
                            }
                        }
                    }
                    var_23 ^= (max((min(470797874, var_6)), ((((var_5 && -1190837806) << (((max((arr_0 [5] [i_1]), -11755)) - 18446744073709539858)))))));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_7] = (max(((min((arr_17 [i_0] [i_0] [i_1 + 2] [i_1 + 2] [i_0] [i_7]), 1))), (min(var_6, (arr_17 [i_0] [i_1] [i_2] [i_7] [i_0] [i_0])))));
                        arr_25 [i_7] [i_1] [i_1] = ((((min(((max((arr_11 [i_0] [1] [i_0] [1] [i_0] [i_0] [i_0]), (arr_15 [i_0])))), (max((arr_5 [i_2 + 1] [i_2 + 1] [i_1] [5]), var_17))))) || (((var_6 << ((((max(var_15, -75))) + 81)))))));
                        var_24 = (max((((max(var_14, var_5)) & (var_5 < var_8))), ((((((min(-11333, 53)))) > (max(0, var_12)))))));
                        var_25 *= (((min(((max((arr_14 [i_0] [i_1] [i_2]), var_7))), (max(-4184, var_17)))) >= (((((((min((arr_16 [i_0] [0] [2] [5] [i_7]), var_12)))) == (((arr_19 [i_0] [i_0] [i_0] [1] [i_0]) >> (((arr_1 [i_0]) + 8873003691088663483))))))))));
                    }
                    for (int i_8 = 4; i_8 < 7;i_8 += 1)
                    {
                        var_26 = ((((((min(var_11, -23566))) + 2147483647)) << ((((((arr_9 [i_8] [i_1 - 2] [i_8 + 2] [i_8] [i_1 - 2]) != 4294967270))) - 1))));
                        arr_30 [1] = (max(((max(10185, (arr_14 [i_1 - 3] [i_8 + 3] [i_2 + 2])))), (((((arr_11 [i_0] [i_1] [i_1] [i_1] [i_2 + 2] [5] [i_8 - 3]) / 11754)) * (var_5 * var_3)))));
                        var_27 = ((((max((min((arr_15 [i_0]), var_9)), var_13))) > (min((min((arr_22 [4] [i_1] [i_8]), 11754)), (arr_11 [i_0] [i_8 + 3] [i_0] [i_8 - 2] [i_2 - 1] [3] [i_0])))));
                        var_28 = max(((max(((min(var_8, (arr_8 [i_2] [i_2 - 1] [i_2] [i_2] [1] [1])))), (max(49193, var_4))))), (max(((max(var_5, var_14))), (((arr_2 [i_2 + 2]) - (arr_29 [i_8] [i_8] [6] [6] [i_0]))))));
                        var_29 ^= (min(((max(-1675225894, 75))), (max((min((arr_2 [i_8]), var_11)), ((min(var_5, -1675225906)))))));
                    }
                }
            }
        }
    }
    var_30 = (min(var_0, var_11));

    for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9 + 1] [i_9 + 1] = ((((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (6010091569319212481 - 6010091569319212468)))) >= (min(((max(var_16, var_0))), (max((arr_32 [11]), 20))))));
        arr_35 [i_9] = (max(((((arr_33 [i_9 + 1]) >= ((max((arr_33 [i_9]), (arr_33 [i_9]))))))), (min((arr_31 [i_9 + 1] [i_9 + 2]), (arr_32 [i_9 - 1])))));
        arr_36 [i_9 - 1] [i_9] = (((min(43588, (min(4294967272, (arr_33 [i_9]))))) <= (((min(var_11, var_15))))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
    {
        var_31 &= (var_3 >= -10186);
        var_32 = (min(var_32, (((-11755 | (arr_33 [i_10 - 1]))))));
    }
    #pragma endscop
}
