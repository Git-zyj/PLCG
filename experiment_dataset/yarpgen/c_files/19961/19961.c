/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = var_3;
        arr_2 [13] = (((288230376151711744 & 1) > (((0 - (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0]) : 8745324733012225707));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_13 = (((arr_5 [i_2]) || ((((arr_5 [i_1 - 1]) % 24)))));
            arr_9 [i_1 - 1] [i_2] = (((((((min(6, var_3))) ? ((min(64, 0))) : 112))) ? 134217696 : ((~(arr_7 [i_1 - 1] [i_1 - 1])))));
            arr_10 [i_1] = (max((((-1932312371 < (arr_6 [i_2] [i_1])))), (1 ^ var_2)));
            arr_11 [i_1] [i_2] [i_2] = ((((((((-118 ? (arr_1 [i_2]) : 1))) * (((arr_8 [i_1]) ? 7351721692709038309 : var_4))))) ? (((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_7 [i_1 - 1] [i_1 - 1]) : 1)) : ((((-1 * 8145) * (min(var_1, var_7)))))));
            var_14 -= 22564;
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_15 = (((arr_7 [i_1 - 1] [i_1 - 1]) ? var_11 : (arr_7 [i_1 - 1] [i_1])));
            var_16 = 255;
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_17 ^= ((min(1053929466554756410, 1)));

            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                var_18 ^= ((!((((arr_0 [i_1 - 1]) ? (arr_12 [i_1 - 1]) : (arr_0 [i_1 - 1]))))));
                var_19 = ((((((!(arr_17 [i_1] [i_1 - 1] [i_4 + 1] [i_5]))))) | -var_5));
            }
            arr_19 [i_4] [9] [i_1] = var_7;
            var_20 = (min((min(var_4, 1)), (-22567 | -14712)));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_22 [i_1] [i_6] = (((((((arr_18 [i_1] [4] [i_1]) & 3856124161)) == (arr_5 [i_1 - 1])))) / (((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 - 1]))));
            var_21 = (5252220542832243996 ^ 17);
            var_22 = arr_8 [i_6];
            var_23 -= ((-((((1053929466554756414 ? (arr_17 [i_1 - 1] [i_6] [i_6] [i_6]) : 1977363163))))));
            var_24 = ((((arr_15 [i_1 - 1] [i_1 - 1]) - (1 + var_4))));
        }
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_25 = (max(203597061900897327, (arr_24 [i_7 - 1])));
        var_26 = (203597061900897336 < 1);
        arr_26 [i_7] = (arr_23 [i_7] [i_7 - 1]);
    }
    var_27 = ((var_8 ? (((((!808221715) || (((var_11 ? var_11 : 144))))))) : (((17969 ? 281474976710655 : 121)))));
    var_28 = var_1;
    #pragma endscop
}
