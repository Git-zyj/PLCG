/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_0] [9] = ((19 ? var_4 : (arr_3 [i_0 + 2] [i_0] [i_0 + 3])));
                    arr_10 [i_0] [i_1] [i_1] = (var_5 & 4);
                    arr_11 [5] [0] [3] = (((((var_6 ? 1 : 248))) ? var_1 : 12));
                }
            }
        }
        arr_12 [i_0] = (((arr_2 [i_0 + 1] [i_0 + 1]) ? 252 : (arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_16 [i_3] [i_3] &= ((var_10 ? (arr_15 [i_3]) : var_3));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                arr_21 [5] [5] = (((arr_18 [7] [1] [i_4]) ? (11632336252162187953 > -1770523690) : (arr_17 [i_4] [i_5])));
                arr_22 [i_5] [i_4] [i_5] [1] = (105 ^ 88);
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                arr_26 [i_3] [i_4] [i_6] = ((1 ? 13 : -105));
                arr_27 [3] = (var_10 / 24);
                arr_28 [i_3] [i_3] [1] [i_6] = ((-1162806790 ? 10564 : 10540));
            }
            arr_29 [3] [i_4] [i_3] = ((((((arr_15 [i_3]) / 1476917133))) ? var_11 : (arr_19 [i_4])));
            arr_30 [i_3] [8] = ((1409039660 ? (arr_24 [i_3]) : var_1));
        }
    }
    var_12 = ((var_7 & (min(var_6, (min(var_10, var_7))))));
    #pragma endscop
}
