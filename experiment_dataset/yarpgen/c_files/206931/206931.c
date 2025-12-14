/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (min(10026755559802618088, 1));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            var_18 -= ((var_10 ? -32755 : (arr_1 [i_1 - 4])));
            var_19 &= 1;
            arr_7 [i_0] = ((1305615751 && (arr_4 [i_1 - 4] [i_0])));
            arr_8 [i_0] [i_0] [i_0] = ((-((((arr_5 [i_0]) != (arr_4 [i_0] [i_0]))))));
            var_20 -= var_0;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_2] = ((var_6 * (min(((8882717670393001277 ? var_2 : 32731)), var_1))));
            arr_12 [i_0] [i_2] = (max((arr_10 [i_2]), 2550893455));
            arr_13 [i_2] [i_2] = (arr_3 [i_0] [i_0] [i_0]);
        }
        arr_14 [i_0] = ((0 != (((arr_6 [i_0]) & 9223372036854775807))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_21 &= (~8419988513906933528);
            var_22 = (((arr_5 [i_0]) ? (arr_6 [i_3]) : var_5));
            arr_17 [i_0] &= (((!var_9) >= (8419988513906933511 >> 1)));
            var_23 = ((((-8882717670393001278 ? (arr_9 [i_0]) : var_9)) ^ var_10));
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_24 = (((((arr_4 [i_4 - 1] [i_4 + 1]) * (arr_4 [i_4 + 1] [i_4 + 1]))) & (min(var_2, (arr_0 [i_4 - 1])))));
            var_25 = ((var_1 < ((min(((max(var_1, (arr_15 [i_4] [i_4])))), (arr_21 [i_0] [i_0] [i_4 + 1]))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_26 = ((-(arr_6 [i_5])));
            arr_26 [i_5] = var_13;
            var_27 = (((134216704 ? (arr_1 [i_5]) : var_12)));
            arr_27 [i_5] [i_5] = 2097151;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_30 [i_6] [i_6] [i_6] = (var_13 != (var_1 != var_10));
            arr_31 [i_6] [i_6] [i_0] = ((~(arr_20 [i_0] [i_6] [i_6])));
        }
        arr_32 [i_0] [i_0] = (((var_10 != var_9) | -var_3));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_37 [i_7] = (((!(((var_4 ? var_0 : var_4))))));
        arr_38 [i_7] [i_7] = ((((((arr_33 [i_7]) ? var_16 : var_4))) ? (min(1724754625, -32755)) : (!var_7)));
    }
    var_28 = min(((max(var_4, 8419988513906933519))), (4271758478 & 1));
    var_29 *= ((!var_8) ^ 13);
    #pragma endscop
}
