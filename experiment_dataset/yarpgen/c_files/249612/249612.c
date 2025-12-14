/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((0 ^ (((-var_7 >= ((var_1 ? var_6 : var_10)))))));
    var_14 = ((var_2 ? ((4341203576250660216 >> (((max(var_12, var_9)) - 4165208042)))) : (9223372036854775807 - 65535)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, ((max(4341203576250660198, (-9223372036854775807 - 1))))));
                        var_16 = 52054;
                        var_17 += 29385;
                        arr_10 [1] [i_1] = (arr_7 [i_0] [i_1] [i_1] [i_0] [5]);
                        arr_11 [i_0] [i_0] [5] = ((!(((1135210809 >> (((arr_9 [i_0] [i_2] [i_3 + 1] [i_3]) - 190)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    var_18 = ((((min(((min((arr_0 [i_0] [i_4]), var_7))), ((var_10 ? var_1 : 9223372036854775807))))) && ((((!(arr_16 [5] [5] [i_5])))))));
                    arr_18 [i_4] [i_5] = 0;

                    for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_19 = 4341203576250660216;
                        arr_21 [i_5] = ((~(max(var_7, (arr_12 [i_6 - 2] [i_6 - 2])))));
                    }
                    for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_20 = ((var_3 ? (((-(arr_6 [i_4 - 2] [i_7 - 1] [i_5] [i_5 + 1])))) : (((arr_13 [i_0] [0] [3]) ? var_1 : ((1579 ? 18446744073709551615 : var_5))))));
                        var_21 = (min(var_21, var_5));

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_22 += ((var_10 ? (((var_5 ? ((27475 >> (((arr_22 [i_7]) + 1095120527)))) : ((255 ? (arr_13 [i_4] [i_5] [i_8]) : (arr_7 [7] [i_4] [i_5] [i_7 - 2] [i_8])))))) : (var_5 & 4341203576250660216)));
                            var_23 = (min(var_23, (((-2 & ((0 - (arr_7 [i_4 + 1] [i_7] [i_7] [i_7] [i_7 - 1]))))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_28 [14] [14] [14] [i_7 + 2] [5] [i_0] [11] = (((arr_0 [i_0] [i_4 - 2]) ? (var_9 % 9223372036854775807) : var_5));
                            var_24 |= (~0);
                            var_25 = 62316;
                            var_26 = var_11;
                        }
                        var_27 += (max(0, ((0 ? var_3 : ((var_6 ? var_0 : 26))))));
                        var_28 = (min(var_28, (((max((max(var_6, var_7)), (-4341203576250660217 || var_5)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
