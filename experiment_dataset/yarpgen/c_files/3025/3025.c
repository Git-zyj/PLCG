/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [0] = min(var_1, (((((164 ? (arr_0 [i_0] [7]) : 161216099)) < (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - 57956))))))));
        var_14 = (min(var_14, (arr_0 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
        {
            var_15 = var_6;
            var_16 = (max(var_16, (arr_3 [i_0] [i_0] [i_0])));
        }
        for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_0] = (((((arr_1 [i_2 + 2] [i_2 + 1]) / (arr_1 [i_2 + 1] [i_2 + 3]))) / (arr_0 [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
                        {
                            var_17 = ((var_10 ? ((((arr_5 [i_5] [i_5]) < (arr_0 [i_3] [i_3])))) : var_5));
                            arr_16 [i_0] [1] [i_5] [i_4 - 3] [i_4] [i_5] = -8388302696551657588;
                            var_18 *= (max(((((arr_14 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1]) <= var_1))), ((~(arr_14 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                            var_19 = (var_7 ? (arr_9 [i_2 + 3] [i_3]) : (arr_10 [i_0] [i_2 + 3] [3]));
                        }
                        for (int i_6 = 1; i_6 < 7;i_6 += 1) /* same iter space */
                        {
                            var_20 = ((((max(2011906210, -1076386637))) ? ((var_9 ? var_13 : var_11)) : (((-1076386625 ? 1 : 31241)))));
                            var_21 = (max(((10448 ? (~var_8) : (max(var_3, var_11)))), (max(1, (((arr_11 [i_0]) >> (var_13 - 295482897989374449)))))));
                            var_22 |= (arr_7 [i_6 + 2] [i_6] [5]);
                            var_23 ^= ((~(arr_7 [i_6 + 1] [i_2 - 1] [i_4 + 1])));
                            var_24 |= (((max((~var_2), 1)) <= 1));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_0] [7] = ((!((((-32767 - 1) ? (((((arr_17 [i_0] [i_2] [1] [i_4]) || var_12)))) : 808374621)))));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_25 = ((~(((-1185925948 / var_12) ? (arr_12 [i_0] [i_2 - 1]) : var_3))));
                            var_26 = (arr_7 [i_7] [i_3] [i_2 + 2]);
                            var_27 = -1076386646;
                            var_28 = ((arr_10 [i_4 - 1] [i_2 + 2] [i_2 + 1]) != var_6);
                            var_29 -= 0;
                        }
                        for (int i_8 = 4; i_8 < 9;i_8 += 1)
                        {
                            var_30 = (min(var_30, (arr_5 [i_3] [2])));
                            arr_28 [i_8] [i_8] [i_8] [i_4] [i_8 - 4] = (((((((arr_27 [i_0] [i_4] [i_0] [i_4] [i_8 - 3]) ? (arr_0 [1] [i_4]) : (arr_23 [i_0] [i_0] [i_2] [i_3] [i_4 - 2] [6])))) ? ((-2011906211 ^ (arr_5 [i_8] [i_8]))) : (arr_27 [i_4 - 2] [i_8 + 1] [i_8 + 1] [i_4] [i_2 + 3]))));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_32 [i_0] [i_2 + 2] [i_3] [i_2 + 2] [i_9] = (var_6 ? (arr_1 [7] [6]) : -var_6);
                            arr_33 [i_0] [1] [i_2 + 1] [6] [i_9] [i_3] |= (((((-199 ? (((~(arr_24 [i_0] [i_2] [i_3])))) : var_5))) ? ((4245 / (((arr_3 [i_0] [i_0] [i_0]) ? -1601352917 : 18446744073709551596)))) : (((((arr_3 [i_0] [i_2] [i_3]) >= (arr_3 [5] [1] [i_3])))))));
                            var_31 = var_10;
                        }
                    }
                }
            }
            arr_34 [i_0] [i_2] = (arr_0 [i_0] [i_2]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] &= ((-(((var_9 == (arr_24 [i_0] [i_0] [i_10]))))));
            var_32 = 240;
            var_33 ^= (arr_6 [i_10] [i_0]);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
        {
            arr_42 [i_0] = ((1391493322 ? -7321011819148879523 : 112));
            var_34 = ((arr_5 [i_11] [i_11]) ? (arr_5 [i_11] [i_11]) : (arr_6 [i_0] [i_11]));
            arr_43 [i_0] [0] = ((-112 ? (arr_15 [i_11] [2] [i_11] [i_0] [i_11] [i_0] [i_0]) : (arr_40 [i_11] [i_0])));
        }
        arr_44 [i_0] = ((((((((arr_10 [i_0] [i_0] [i_0]) ? var_9 : 95)) >> (((max(2011906207, (arr_17 [i_0] [i_0] [1] [i_0]))) - 4670547022936719655))))) ? (arr_27 [1] [i_0] [i_0] [8] [8]) : (((((var_9 ? var_10 : var_5))) ^ (var_11 & var_7)))));
    }
    var_35 = var_5;
    var_36 = (((((~(var_13 || var_11)))) ? ((var_13 ? (~var_0) : var_9)) : (6 - var_10)));
    #pragma endscop
}
