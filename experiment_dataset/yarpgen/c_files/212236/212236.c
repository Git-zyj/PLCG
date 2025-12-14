/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((31 ? ((254 ? 254 : 199)) : ((7 ? 7 : 0))))) ? (((var_11 * var_11) % ((var_5 ? (arr_1 [i_0]) : 13)))) : ((-(((arr_2 [i_0]) / 249))))));
        var_18 = (min(var_18, ((min((min((190 | var_2), (255 ^ 140))), ((((max(1, 254))) ? 13 : (((arr_1 [i_0]) * var_14)))))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = ((-(((((var_0 ? 93 : var_15)) <= ((~(arr_4 [i_0] [i_1]))))))));
            var_19 = ((-(arr_0 [i_1])));
        }
        var_20 = ((~(~98)));
        arr_7 [i_0] &= var_0;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_21 |= ((((var_5 + (arr_8 [i_2]))) == (!163)));
        arr_10 [i_2] = ((((((var_8 + var_7) / ((min(3, (arr_9 [i_2] [i_2]))))))) ? ((0 ? 89 : 162)) : (((var_7 ? 21 : 122)))));
        var_22 = (max(var_22, 132));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_23 = ((!(198 | 59)));
        var_24 = (max(var_24, ((min(((((max(89, var_12))) ? (arr_9 [i_3] [i_3]) : (~103))), (((arr_12 [i_3]) ? var_17 : var_14)))))));
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_25 = var_5;
        arr_17 [i_4] = (((((55 ? 249 : var_3))) || ((min((arr_15 [i_4] [i_4]), var_14)))));
        arr_18 [6] [i_4] = (max(((+((119 ? (arr_14 [i_4] [i_4]) : 191)))), ((~((min(255, var_12)))))));
        var_26 = (((((max(244, (arr_8 [i_4]))) ^ ((max(var_13, (arr_13 [15]))))))));
        arr_19 [i_4] = (var_6 ^ -var_9);
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_27 = (min(((((arr_1 [i_5]) == ((((arr_21 [i_5]) && (arr_22 [i_5] [i_5]))))))), (arr_23 [i_5] [i_5])));
            var_28 = ((!((((((84 && (arr_14 [i_5] [i_6])))) << ((min(93, 2))))))));
            arr_24 [i_5] [i_6] = ((-(arr_2 [i_5])));
            arr_25 [i_5] [i_5] [i_5] = ((((((((64 | (arr_4 [3] [5])))) ? ((min(246, var_11))) : (arr_21 [i_5])))) ? (arr_16 [i_5]) : ((var_8 ? ((var_1 * (arr_0 [0]))) : var_6))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_28 [i_5] [i_5] = var_6;
            var_29 = ((!(arr_23 [i_5] [i_7])));
            var_30 &= (((arr_12 [i_5]) ? (arr_12 [i_5]) : 93));
            var_31 |= ((var_0 - (~var_14)));
        }
        arr_29 [i_5] = (max(((min(3, (arr_0 [i_5])))), (3 | 31)));
        arr_30 [i_5] = (max((~var_0), var_12));
    }
    var_32 *= 240;
    #pragma endscop
}
