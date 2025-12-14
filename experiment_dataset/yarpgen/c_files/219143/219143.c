/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [2] |= (arr_0 [i_0]);
        var_20 = ((!(((1 ? (arr_0 [i_0]) : 248)))));
        arr_3 [i_0] = 1;
        arr_4 [i_0] = (max(1, (((-113 ? 2941350889 : 1353616407)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [i_1]);
        var_21 = var_1;
        var_22 = ((-(arr_6 [i_1] [i_1])));
    }
    for (int i_2 = 4; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_23 = 101;
        arr_11 [i_2 + 2] &= ((~((((max(2915443003233637781, 1353616400))) ? (arr_5 [i_2 - 2]) : ((((arr_8 [i_2 - 4] [i_2]) ? (arr_10 [5]) : (arr_9 [i_2 - 3] [i_2 + 3]))))))));
        arr_12 [i_2 - 4] = ((((((((var_10 ? var_18 : 2941350896))) ? (var_16 - -3100319691560762807) : var_13))) ? (((((var_16 ? 3785860870 : var_19))) ? (arr_5 [i_2 - 2]) : (max(var_19, (arr_5 [i_2]))))) : (((-64 ? 0 : (arr_6 [i_2] [i_2 - 3]))))));
        var_24 = (min(var_24, ((((((arr_8 [i_2 + 1] [i_2 + 2]) >= (arr_10 [i_2 - 2])))) * (arr_10 [i_2 - 1])))));
        arr_13 [12] [8] = ((((((arr_8 [i_2 + 1] [i_2 + 1]) - -1353616400))) ? ((min(var_18, (arr_10 [i_2 - 3])))) : ((((((arr_6 [i_2 - 4] [i_2]) - var_1)) + (15261 - var_10))))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {

                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        var_25 = ((((-(arr_26 [i_5] [i_5] [i_5]))) | (var_5 < 1886621693)));
                        arr_27 [i_6 + 2] [0] [i_3] [i_3] = (arr_17 [i_3 + 1]);
                        arr_28 [i_3] [i_4 - 4] [i_3] [i_4 - 4] [i_6] [i_6] |= (4251 << var_6);
                    }
                    var_26 = (((arr_25 [2] [2] [i_3 - 4] [i_3 - 3] [i_5] [i_4 + 1]) ? (arr_25 [i_3 - 3] [i_4] [i_3 + 2] [11] [i_3 - 4] [i_4 - 4]) : (arr_25 [i_4] [4] [i_3 + 2] [i_3] [3] [i_4 - 4])));
                    arr_29 [i_3] = (!0);
                    var_27 = var_2;

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_33 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [0] = (((arr_5 [i_4 + 1]) ? (arr_25 [1] [i_3] [i_3 - 1] [i_4] [i_3 - 1] [i_7]) : (((arr_26 [i_4] [6] [i_7]) ? -79 : (arr_5 [i_3])))));
                        arr_34 [i_3] [i_4] [i_5] [i_7] |= ((+((473564769 ? (arr_25 [i_3 + 1] [i_3] [i_3] [i_3 - 3] [i_3] [i_3]) : (arr_5 [i_3 - 1])))));
                        var_28 = (max(var_28, (((-473564761 != (arr_6 [i_3 - 1] [i_4 - 4]))))));
                    }
                }
            }
        }
        var_29 *= (((((-388075687 ? var_10 : (arr_14 [i_3] [i_3])))) ? (arr_23 [i_3] [i_3] [i_3]) : (~var_12)));
        var_30 = (arr_16 [i_3 + 2]);
        var_31 &= 1612491250;
    }
    var_32 = var_9;
    #pragma endscop
}
