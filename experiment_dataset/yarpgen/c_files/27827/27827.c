/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = ((((min(((1 ? var_6 : -21)), (var_9 / 54771)))) ? var_4 : (min(((var_6 ? var_4 : var_11)), 2124924826))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (var_10 * -var_6);

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0 - 1] [i_0] = (20 <= var_10);

            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                var_14 += ((1 || (((arr_1 [0] [1]) < (1 / 1)))));

                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3] [i_0] [i_1] = ((-(((((var_2 ? 9239 : (arr_13 [i_0] [i_1] [i_0] [4] [i_0]))) >= -var_10)))));

                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        arr_18 [i_4 + 1] [i_0] [i_0] [i_1 + 1] [i_0] = (arr_2 [i_0] [i_1]);
                        var_15 = (min(var_15, (~var_7)));
                        var_16 = ((!(((-((-(arr_10 [i_0] [i_1] [i_1]))))))));
                        var_17 = 127;
                    }
                    arr_19 [i_3] &= ((146 ? var_8 : (~var_2)));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_18 = (((arr_2 [i_0] [i_0]) / (max(185233163, (185233163 / var_8)))));
                    var_19 ^= (min(14815874347292378590, (((-(!1))))));
                    arr_23 [i_2 - 1] [i_0] [i_2] [2] [i_1] = (arr_10 [i_0] [i_2 + 3] [i_5]);
                }
                arr_24 [i_0] [3] = (((((((min(57584, var_8))) ? -93 : (arr_22 [i_0 + 2] [i_1] [i_2])))) ? (1 < var_8) : (min((~var_5), ((60503 - (arr_10 [i_2] [4] [i_2])))))));
            }
            var_20 += 121;
            var_21 = 2683343515;
        }
        for (int i_6 = 4; i_6 < 8;i_6 += 1)
        {
            var_22 *= (((-64 + 2147483647) >> (((min((arr_0 [i_6]), var_7)) ? 4294967293 : (1877423796 || 1877423796)))));
            var_23 = (max(71, 0));
            var_24 *= (((arr_15 [0] [i_6] [i_0] [i_6] [i_6 - 2] [i_6]) ? ((var_4 ? (arr_15 [i_0 + 1] [i_6 + 1] [i_0 - 1] [i_0] [i_6] [i_6]) : var_8)) : (((0 <= (arr_15 [i_0] [i_0 + 1] [i_0] [i_6] [i_6] [i_6]))))));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_25 ^= ((1136 ? 29 : -26917));
            arr_31 [i_0] [i_0] [i_0] = ((arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]) ? ((min((arr_29 [i_0]), (arr_11 [i_0] [5] [i_0 + 1] [9] [i_0 - 1])))) : -19875);
            arr_32 [i_0] = (((arr_9 [i_0 + 2] [i_0] [i_0]) & 496));
            arr_33 [i_0] = (((0 ? 1 : var_8)));
        }
    }

    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_26 = 1;
        arr_36 [i_8] = ((((arr_8 [i_8] [i_8] [i_8]) / (arr_8 [i_8] [i_8] [i_8]))));
        var_27 = ((!(((-(arr_15 [i_8] [i_8] [4] [i_8] [1] [6]))))));
    }
    #pragma endscop
}
