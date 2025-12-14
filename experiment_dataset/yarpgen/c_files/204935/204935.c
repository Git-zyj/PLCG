/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (((((arr_0 [i_0] [i_0]) / (arr_1 [6]))) >= 1));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_19 = ((-(arr_0 [i_1] [i_0])));
            var_20 = var_0;
            var_21 = (0 ? 1 : (arr_0 [i_0] [i_1 + 1]));
        }
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 = 2199023255536;
        var_23 = var_11;
        arr_9 [i_2] [i_2] = (max(((((((~(arr_8 [i_2])))) >= (arr_1 [i_2])))), (min(var_7, (((~(arr_5 [i_2] [i_2] [9]))))))));
        arr_10 [i_2] [i_2] = (((max(311573444440015048, var_1)) << var_10));
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3 - 3] = 1;
        arr_15 [i_3] [i_3 + 1] = (((arr_13 [i_3 + 2]) ? (((arr_13 [i_3 + 2]) ? (arr_13 [i_3 + 2]) : (arr_13 [i_3 - 2]))) : (((arr_13 [i_3]) ? (arr_13 [i_3 + 2]) : var_8))));
    }
    var_24 = (max((var_17 + var_14), ((var_9 & ((var_10 ? var_4 : var_9))))));
    var_25 = (((((var_15 ? var_16 : var_8))) || ((((var_14 / var_0) ? var_4 : (((min(var_3, var_9)))))))));
    var_26 = var_10;

    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_27 = arr_12 [i_4] [i_4];
        arr_18 [i_4] = var_6;
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_28 |= (min(var_7, (arr_12 [i_5] [7])));

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_29 = (((((~((((arr_13 [i_5]) <= (arr_12 [i_5] [i_6]))))))) ? (arr_20 [i_5] [i_6]) : 51426));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 18;i_8 += 1)
                {
                    {
                        var_30 = ((~(((!(arr_22 [i_5] [4]))))));
                        var_31 -= (arr_26 [i_7 - 1] [i_5] [i_8 + 2] [i_5]);
                        var_32 = (((((max(var_6, (arr_21 [i_8]))) != (var_4 && var_6))) ? (2147483646 | 1830383167918623742) : (arr_13 [i_5])));
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            var_33 = (!((!((min(var_8, var_17))))));
            var_34 = ((((((((2147483646 ? var_7 : (arr_20 [8] [i_5])))) && (arr_11 [i_9 + 3])))) % (max((arr_28 [i_5] [14]), (var_1 <= var_0)))));
        }
    }
    #pragma endscop
}
