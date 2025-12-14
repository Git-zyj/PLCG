/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] &= (+(((((arr_0 [i_0] [1]) ? 11237359263083899090 : (arr_1 [i_0]))) / ((((arr_0 [i_0] [9]) ? var_6 : (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (arr_2 [i_0]);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_11 = ((!(arr_1 [i_3])));

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_4] [i_1] = (arr_4 [i_4 - 1]);
                            var_12 |= ((((arr_14 [i_4 + 1] [i_3]) ? 255 : var_0)));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_4 - 2] |= (((arr_11 [i_4 - 3]) ? ((((arr_11 [i_4 - 2]) >= var_10))) : (((arr_11 [i_4 - 3]) ? (arr_11 [i_4 - 3]) : (arr_11 [i_4 - 3])))));
                            var_13 = (min(var_13, (((((((((arr_14 [i_0] [i_0]) ? 7209384810625652546 : var_0))) || var_5)) ? (24576 || 11086615445891298569) : ((((arr_2 [i_4 - 2]) || (arr_14 [i_4 - 3] [i_4 + 1])))))))));
                        }
                        var_14 = (max(var_14, (((((max(((-(arr_10 [i_3] [i_2] [i_2] [9] [i_1] [i_0]))), (var_4 && var_4)))) && (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_15 &= (((arr_2 [i_6]) ? (max((((arr_2 [6]) % (arr_7 [i_1] [i_6] [i_2] [i_6]))), var_10)) : (((((arr_9 [i_0] [i_1] [i_2] [i_5]) >= (arr_14 [i_1] [i_0])))))));
                                var_16 = (max((((!(((-(arr_19 [i_0] [i_1] [i_1] [i_5] [i_6]))))))), (max(40984, 2147483647))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_36 [i_8] = (max((arr_25 [i_7] [i_7]), (max((((arr_30 [i_7] [i_8] [i_9] [i_10]) ? (arr_9 [i_7] [i_7] [i_7] [i_7]) : (arr_30 [i_10] [i_9] [i_8] [i_7]))), (arr_18 [i_7] [i_7] [i_7] [i_10])))));
                        var_17 = (min(var_17, (((-(((arr_34 [i_7] [i_9] [i_9] [i_10]) ? (arr_11 [i_7]) : ((~(arr_29 [13]))))))))));
                        var_18 = (max(var_18, ((~((~(arr_5 [i_9 - 3] [i_9] [i_9])))))));
                    }
                }
            }
        }
        var_19 = (arr_12 [i_7] [i_7] [8] [2] [i_7] [i_7]);
        var_20 = var_0;
        var_21 *= (((((arr_33 [1] [i_7] [i_7] [i_7] [i_7] [i_7]) ? 15927447268871976916 : (arr_33 [15] [3] [0] [i_7] [3] [i_7]))) ^ ((((!(arr_33 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))));
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11] = ((1599246522603558325 ? (((arr_14 [i_11] [i_11]) ? -9223372036854775806 : 3052411916)) : (((7209384810625652524 ? -13969 : 68)))));
        var_22 = (((((((arr_1 [i_11]) * (arr_14 [i_11] [i_11]))) % (((((arr_14 [i_11] [14]) && (arr_13 [i_11] [i_11] [i_11] [i_11] [4] [i_11]))))))) >> (((arr_10 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) - 2115))));
    }
    var_23 += ((((((((var_2 ? var_3 : 11150943101970391799))) ? (var_8 / var_6) : var_2))) ? ((var_6 ? 93083347 : var_6)) : var_7));
    #pragma endscop
}
