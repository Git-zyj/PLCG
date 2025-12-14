/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((((((arr_1 [i_0]) ? var_4 : (arr_1 [i_0])))) ? ((~(arr_0 [i_0] [i_0]))) : ((~(arr_1 [i_0])))))));
        var_13 &= ((((min(64512, -262143))) ? (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (28 / 127))) : var_6));
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            var_14 = ((var_3 ? 1465765781 : var_3));
            var_15 |= (-28 ? var_11 : (arr_9 [i_2 - 3] [i_2 + 1] [i_2 + 2]));
            arr_10 [i_1] = (arr_4 [i_1]);
        }

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            arr_14 [2] [2] &= (min(99497089, ((~(arr_12 [i_1] [i_1] [i_3])))));
            arr_15 [i_1] = min(((min((arr_12 [i_1] [i_3 + 2] [i_3 - 1]), (arr_11 [i_1] [i_3 + 1] [i_3])))), (min((arr_9 [i_1] [i_1] [10]), -477739974413591172)));
        }
        var_16 = (((-28 ? (arr_9 [i_1] [i_1] [i_1]) : (((-31 ? var_5 : var_6))))));

        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_17 *= (min(6456500297854511920, ((((arr_13 [i_4 + 2]) ? (arr_16 [6]) : (arr_0 [i_1] [i_4]))))));

            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_18 = ((!(((var_10 << (((var_7 + 1678942681081799907) - 44)))))));
                    arr_24 [i_1] = var_3;
                    arr_25 [i_4] [i_1] [i_4] [i_4] [3] = arr_1 [i_1];
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    arr_29 [i_1] [8] [i_4] [i_5] [i_5] [i_7] = (arr_21 [i_7 - 2] [i_7] [i_1] [i_1] [13]);
                    var_19 = (((arr_21 [i_1] [i_4 - 1] [i_1] [i_4 - 1] [i_7]) <= (arr_13 [i_7 - 3])));
                    arr_30 [i_1] [i_1] [i_5] [i_1] = ((22 ? (arr_22 [i_4 - 1] [i_4 - 1] [i_5] [i_5] [i_1]) : var_6));
                    var_20 = ((((var_10 / (arr_9 [i_1] [i_5] [i_7 - 2]))) / (arr_26 [i_1])));
                    var_21 = -88;
                }
                for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    arr_33 [i_1] [i_1] [15] [i_8] [15] = 31;
                    arr_34 [i_1] [i_1] [i_1] [i_8 + 1] = (((-6027659948725621825 + 9223372036854775807) >> 6));
                }
                arr_35 [i_1] [i_4] [i_1] = (!524287);
                arr_36 [i_1] [i_1] = var_4;
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
            {
                var_22 = (var_2 ^ ((min((!41), var_6))));
                var_23 = (((!(((arr_5 [i_9] [i_4]) <= -1759009316)))) ? (((min(var_7, -49)) - (arr_28 [i_1] [15] [i_9]))) : (((arr_6 [i_4] [i_1]) ? -1956381735 : ((-8433924894193159669 ? -42 : -2470821581468034075)))));
                arr_40 [i_1] = arr_38 [i_1];
            }
            var_24 &= var_7;
        }
    }
    var_25 = ((!(!var_10)));
    #pragma endscop
}
