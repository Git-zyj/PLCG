/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((-((-(arr_2 [i_0 - 3])))));
        arr_4 [i_0] = (arr_2 [i_0 - 2]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 = ((-(((arr_7 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));

            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                arr_12 [i_0] [i_1] |= (arr_11 [i_1] [i_1] [i_0 - 2] [i_1]);

                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] = 1;
                        var_19 = 1;
                        var_20 ^= 1329711489;
                    }
                    var_21 -= ((var_15 ? (arr_0 [i_2 - 1]) : 227));
                    arr_18 [i_0] = (((arr_13 [i_3 - 2] [i_3 - 3] [i_3 - 2] [i_3 - 2]) ? var_6 : var_10));
                    var_22 *= (1 < -1461960780);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_23 = (max(var_23, 1768868897288256207));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_24 = (arr_13 [i_0 + 3] [i_0] [16] [i_0 - 1]);
                        var_25 = (((arr_21 [i_0 - 3]) / (arr_11 [i_0] [i_1] [i_1] [i_1])));
                    }
                    var_26 = (~(arr_5 [i_0] [i_0]));
                }
            }
            var_27 = -834808431;
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_28 -= 2965255798;
            var_29 = (min(var_29, (arr_24 [i_0 - 2] [i_0 - 2] [i_7])));
            arr_26 [i_0] [i_0] = ((3805613835597469589 ? 1768868897288256207 : (arr_21 [i_7 + 1])));
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            arr_31 [i_0] = -58;
            var_30 &= (((arr_11 [14] [i_8 + 1] [i_0 + 1] [i_8 + 1]) ? (arr_16 [i_8 - 1] [10] [i_8] [10] [i_0 + 3]) : (0 || var_5)));
            arr_32 [i_0] [i_8 + 1] [i_0] = (((arr_11 [i_0] [14] [i_8 - 1] [i_8]) > 255));
            arr_33 [i_0] = (((arr_15 [1] [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1]) ? (arr_23 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 2] [8]) : 1329711489));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_37 [i_0] [i_0] [i_0] = (((arr_24 [i_0 + 2] [i_0 + 4] [i_0]) ? (arr_24 [i_0 + 3] [10] [i_0]) : (arr_24 [i_0 - 1] [i_9] [i_0])));
            arr_38 [i_0] [i_0] [i_0] = (arr_20 [i_0 - 2] [i_0 + 3] [i_0 + 4] [13] [i_0]);
            arr_39 [i_0 + 3] [i_0] = 64;
            var_31 *= (arr_23 [i_9] [i_9] [i_9] [2] [i_9] [i_9] [i_0 + 1]);
            var_32 = var_13;
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_33 = (!(arr_40 [i_10] [i_10]));
        arr_42 [0] &= (arr_9 [i_10]);
    }
    var_34 = max((max(3956326174, var_10)), var_16);
    var_35 = (max((((var_15 ? var_4 : var_3))), var_10));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 9;i_13 += 1)
            {
                {
                    arr_54 [i_12] [i_12 - 3] [i_13 + 3] = ((((max((~1), (max(var_17, var_11))))) ? ((3007319801 ? (max((arr_7 [i_12 - 1] [i_12 - 1]), 6997202768724210942)) : (arr_2 [i_13 + 4]))) : ((max((arr_45 [i_12 - 1]), (max((arr_21 [i_13]), (arr_25 [2]))))))));
                    var_36 = (max(29, (~var_8)));
                    var_37 = ((max(1287647508, (arr_10 [10] [i_12 - 3]))));
                }
            }
        }
    }
    #pragma endscop
}
