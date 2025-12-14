/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 5537714715122307017;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 ^= (min((((var_0 ^ (((arr_1 [i_0]) << (var_19 - 212)))))), ((~(arr_0 [i_0] [16])))));
        var_22 &= (arr_0 [i_0] [i_0]);
        var_23 = 0;
        arr_2 [19] [i_0] = min((min((arr_1 [i_0]), (arr_1 [i_0]))), (-32767 - 1));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = var_10;
        var_24 = (max(-1859686625, 1));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_8 [i_2] = (max(var_6, ((max((arr_4 [i_2]), -759534146)))));
        var_25 = var_3;

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                var_26 = (arr_7 [i_4 - 2]);
                var_27 -= (((((((((arr_12 [i_2] [i_2] [i_2] [i_2]) > (arr_10 [i_2])))) <= (arr_4 [i_4 + 1])))) >> (((arr_3 [8] [i_4]) - 688225634))));

                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    arr_16 [i_2] [i_2] [i_2] [i_3] = ((-(max((((var_3 / (arr_10 [i_4 + 1])))), -1))));
                    arr_17 [i_3] = (max((arr_11 [i_5] [i_3] [i_5 + 1] [i_4 - 3]), -2));
                }
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    var_28 -= ((var_8 << ((((((arr_12 [1] [i_3] [i_3] [i_3]) && var_7))) - 1))));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_22 [20] [20] [i_3] [5] [5] = (((45 - -32) ? 24647 : ((var_15 ? (arr_15 [i_2] [i_2]) : (((arr_9 [i_3] [i_3] [i_6 + 1]) ? var_5 : var_6))))));
                        var_29 = (max(var_29, ((((max((max((arr_20 [i_7] [i_6 + 3] [i_3] [i_3] [i_2]), (-127 - 1))), ((max(240, 7560))))) - var_13)))));
                        var_30 = (((min((min(3616865887, 9071883915556636731)), (arr_20 [i_2] [i_2] [i_2] [1] [i_7]))) <= (arr_20 [i_4 - 1] [i_6] [i_4 - 1] [i_3] [8])));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_31 = (min(var_31, (max(74, -12))));
                        var_32 = (max((arr_15 [i_2] [i_6]), -21574));
                        var_33 = (min(var_33, var_1));
                    }
                    var_34 = 60499689138580487;
                }
                arr_25 [i_3] [21] [i_3] = (min(((((max(13928, 1629135836)) & (arr_24 [i_3] [i_4 + 1] [i_3] [7] [i_3])))), (((((~(arr_19 [i_2])))) ? (arr_24 [i_3] [i_3] [i_4 + 1] [i_4 + 1] [16]) : ((~(arr_11 [i_4 - 4] [i_3] [i_3] [i_2])))))));
            }
            var_35 = ((-1 <= (((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (var_1 + 6797103695340330417) : (arr_13 [i_2] [i_3] [i_3])))));
        }
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        var_36 = (max(var_36, ((((((var_0 + (var_16 > var_5)))) && ((max((arr_4 [i_9 + 1]), var_11))))))));

        for (int i_10 = 3; i_10 < 19;i_10 += 1) /* same iter space */
        {
            var_37 *= arr_4 [i_9];
            var_38 = ((~(arr_24 [i_10] [5] [i_10] [i_10 + 1] [i_10])));

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                var_39 = var_2;
                var_40 = (max(97, 1));
                arr_33 [i_10] = (min(((max((arr_29 [i_10]), (var_2 ^ var_13)))), (arr_7 [i_9])));
            }
        }
        for (int i_12 = 3; i_12 < 19;i_12 += 1) /* same iter space */
        {
            var_41 = ((max((~var_18), (max(var_6, (arr_24 [0] [i_12] [i_12] [i_12 - 1] [0]))))));
            var_42 = var_16;
            var_43 = (arr_7 [i_12]);
        }
    }
    #pragma endscop
}
