/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (min((((12471 ? 12471 : 12471))), (min(var_5, (arr_0 [i_0] [i_0 - 2])))));
        var_21 ^= (min((max((arr_1 [i_0 + 2] [14]), (arr_0 [10] [i_0 - 2]))), ((min((arr_1 [12] [12]), (arr_1 [i_0 + 2] [2]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_22 *= ((((((arr_5 [i_1] [i_1]) ? var_13 : (arr_4 [i_1] [i_1])))) ? (((arr_5 [i_1] [i_1]) ? var_13 : var_17)) : var_8));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_23 = (arr_7 [i_1 + 1] [i_2]);
                    arr_14 [i_4] = (((arr_7 [i_1 - 1] [i_4 - 1]) ? var_15 : (arr_5 [i_1 - 1] [i_2])));
                    var_24 = (arr_7 [i_3 + 1] [i_1 + 1]);
                    arr_15 [i_1] [i_1] [i_1] [i_1] [i_4] [i_4] = (arr_13 [i_1 - 1]);
                    var_25 = (var_2 ? (arr_6 [i_1 + 1]) : var_19);
                }
                for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_1 - 1] [i_1 - 1] = (arr_13 [i_3 + 2]);
                    arr_20 [i_1 + 1] [i_1 + 1] [i_3] [i_5] = (((arr_17 [i_1 + 1] [i_2] [i_5 + 4] [i_3 + 4]) ? (arr_17 [i_1 - 1] [i_2] [i_5 + 2] [i_3 + 4]) : (arr_17 [i_1 - 1] [i_2] [i_5 + 3] [i_3 + 2])));
                }
                for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_26 = (arr_16 [16] [16] [i_3] [i_3 + 4] [i_3 + 4] [i_3]);
                    arr_23 [i_1 + 1] [i_2] [i_2] [i_1 + 1] = ((53057 ? 1 : 12464));
                    var_27 = ((~(arr_10 [i_6 - 2] [i_6 + 4] [i_6 + 2] [i_6])));

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_28 = var_14;
                        var_29 = var_19;
                    }
                    var_30 = ((53065 ? 12484 : 12471));
                }
                for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_31 = (12461 - -872287685);
                    arr_30 [i_3 + 2] [i_8 - 1] = 2760019479734580706;
                }

                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    arr_34 [i_1] [i_3] = (((arr_28 [i_1] [i_1 + 1] [0] [i_3 + 4]) << (((var_10 >= (arr_18 [i_1] [i_1] [i_1] [i_1]))))));
                    var_32 = (240 && -2147483637);
                }
            }
            var_33 = (arr_5 [i_1 - 1] [i_1]);
            arr_35 [i_1] = (!(arr_4 [i_1 + 1] [11]));
        }
        var_34 = (!var_13);
        var_35 = (arr_16 [i_1] [i_1] [22] [i_1] [22] [11]);
        arr_36 [i_1 + 1] = (((arr_32 [i_1] [i_1 + 1] [18] [i_1]) ^ ((-91 ? -872287687 : (arr_32 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))));
    }
    for (int i_10 = 2; i_10 < 20;i_10 += 1)
    {

        for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
        {
            var_36 = (((arr_38 [i_10 - 1]) ? (arr_38 [i_10 - 1]) : (arr_38 [i_10 - 1])));
            arr_41 [i_10] [10] = (arr_24 [i_10] [i_10 - 2] [i_10] [i_11 + 1] [i_11 + 2] [i_10]);
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
        {
            arr_46 [3] [3] [i_10] = (((arr_32 [i_10] [i_12] [i_12 + 1] [i_12]) ? var_8 : (arr_32 [i_10] [i_10 + 2] [i_12] [9])));
            arr_47 [12] [i_12] [i_10] = (arr_21 [i_10 - 1] [i_12] [i_12 + 1] [i_12] [i_12 + 1]);
        }
        var_37 ^= ((17320259459120001424 ? 12452 : -872287687));
    }
    var_38 = ((((max(var_6, var_1))) ? (var_12 ^ var_5) : ((max(var_7, ((var_12 ? var_12 : 53064)))))));
    var_39 = var_6;
    #pragma endscop
}
