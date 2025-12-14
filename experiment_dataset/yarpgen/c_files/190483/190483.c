/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (((((29859 ? 17728 : -29860))) ? ((-109 ? (arr_2 [i_0] [i_0]) : var_11)) : (((var_4 * (arr_0 [i_0] [i_1]))))));
            arr_5 [i_1] = 10616703348074529126;
            arr_6 [3] [i_1] = (((arr_3 [i_0 + 1]) * -var_11));
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_15 = ((29832 ? 2313722600662023319 : (arr_0 [i_0 + 1] [i_2 - 1])));
                var_16 = (arr_3 [i_0 - 1]);
            }
            arr_11 [i_0] [i_2] [i_0] = (arr_10 [i_0 - 2]);
            arr_12 [i_2] = (((arr_10 [i_2 + 2]) + (arr_1 [i_2 - 2])));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    var_17 = (arr_16 [i_0] [i_0 - 2] [i_0 + 1] [i_5 + 2]);
                    arr_20 [i_0 - 1] [i_5 - 2] = arr_19 [i_0] [1] [i_5] [i_5];
                    arr_21 [i_0] = (arr_2 [i_0 + 1] [i_0 - 1]);
                }
            }
        }
        var_18 -= ((!(((var_13 ? var_3 : -29853)))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        var_19 = ((-((13029 ? -9124518900309123747 : 10807865853426060593))));
        arr_24 [i_6] [i_6] = ((-var_9 ? 1749934914 : var_0));
        var_20 ^= arr_23 [6];
        var_21 = var_3;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    var_22 = (((arr_27 [i_6] [i_7]) | (arr_27 [i_6] [i_7])));
                    arr_30 [i_6] [i_7] [i_6] [i_6] = ((!(arr_23 [i_6])));
                    arr_31 [i_6] [i_6] = (((arr_23 [i_6]) ? (arr_26 [i_6 - 2]) : (arr_23 [i_6])));
                }
            }
        }
    }
    var_23 = (((min(var_12, -2313722600662023306)) - (((max((var_5 && var_3), var_7))))));
    var_24 += ((~(((var_9 && (((var_7 ? var_14 : var_10))))))));
    var_25 |= var_11;
    #pragma endscop
}
