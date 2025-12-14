/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (!-60);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (max(var_19, (((!(arr_5 [i_0] [i_1]))))));
            var_20 = (((arr_3 [i_0]) ? (arr_2 [i_1]) : var_10));
        }
        var_21 = (arr_2 [i_0]);
        arr_6 [i_0] = ((~((var_3 ? 556349150 : (arr_5 [i_0] [i_0])))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_0] = ((var_7 ? var_9 : (!182856348)));
            var_22 = (max(var_22, (((40 ? (arr_9 [i_0] [i_0] [i_0]) : var_11)))));
        }
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_23 = (max(var_23, ((min((min(((-54 ? var_12 : var_9)), ((((arr_11 [i_3]) ? -47 : var_13))))), (((~(~52)))))))));

        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_24 += ((!(((3738618155 - (((-123 ? 32767 : 0))))))));
                    var_25 = (max(var_25, ((max(((122 * (arr_16 [i_4 - 3] [i_3] [i_3 + 2]))), 23539)))));
                }
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    arr_23 [i_3] [i_5] [i_3] [i_3] = (min(((((min(var_12, var_14))) ? 33550336 : (arr_19 [i_7 + 1] [i_5] [i_4 + 1] [i_3]))), (((~((108 ? -828557093 : -36)))))));
                    arr_24 [2] [i_4] [i_5] [i_7] &= ((20 ? 264869799031902929 : (((133955584 + (arr_21 [i_7 + 1] [i_7 + 1]))))));
                    var_26 -= ((-var_7 ? (min((arr_20 [i_3] [i_3 - 4] [i_4 + 2] [i_4 - 3] [i_5] [i_4 - 3]), 0)) : ((var_12 ? (arr_20 [i_3] [i_3 - 2] [i_4] [i_5] [i_5] [i_7]) : (arr_20 [i_3] [i_3] [i_3 - 3] [i_3] [i_3] [i_3 + 1])))));
                }
                arr_25 [i_3 - 3] [i_3] [i_5] [i_3] = ((-(min(((var_2 ? 241 : var_11)), (arr_17 [i_3] [i_3] [i_3])))));
            }
            var_27 *= ((0 > ((-123 + (arr_18 [12] [12] [i_4 + 2] [i_4])))));
            var_28 = (arr_14 [i_3]);
        }
        arr_26 [i_3] = ((-var_2 >= (((arr_14 [i_3]) ? (arr_14 [i_3]) : (arr_14 [i_3])))));
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_29 = (min(var_29, ((((arr_18 [16] [i_8 - 4] [i_8 - 3] [i_8 - 3]) ? (arr_18 [16] [i_8 - 2] [16] [i_8 - 2]) : (arr_20 [i_8] [i_8 - 2] [i_8] [i_8 - 3] [i_8 - 2] [i_8]))))));
        arr_30 [i_8] [i_8] = (((((36 & (arr_15 [i_8] [i_8 + 2] [i_8 + 2])))) ? var_6 : (arr_18 [i_8] [i_8 - 4] [i_8] [i_8 + 3])));
    }
    for (int i_9 = 4; i_9 < 14;i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = (min(((52 ? 15 : ((65535 ? 54 : 64)))), 17040687108592545378));
        var_30 = (max(var_30, (((max(((((arr_21 [i_9] [i_9]) && 1411738179))), (max(-106, var_3))))))));
    }
    var_31 = var_16;
    #pragma endscop
}
