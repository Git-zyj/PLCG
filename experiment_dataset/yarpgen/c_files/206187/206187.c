/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (!237);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] = (arr_3 [i_0] [i_1]);
            var_22 = (max(var_22, (((!(((arr_4 [i_0] [i_1] [i_1]) < (arr_2 [11] [0] [i_1]))))))));
            arr_6 [i_0] = (arr_1 [5] [i_1]);
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_23 += (arr_8 [i_0] [i_2 - 2]);
            arr_9 [i_0] [i_0] = (((arr_1 [i_0] [i_2]) ? ((((arr_4 [i_0] [i_0] [i_0]) ? (arr_1 [i_2 - 2] [i_0]) : (arr_0 [i_0])))) : (arr_4 [i_2 + 1] [i_2] [i_2 - 2])));
            var_24 = (arr_3 [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_25 = (arr_10 [i_3] [i_0] [i_0]);
            arr_12 [i_0] = (((arr_3 [i_0] [i_3]) ? (((arr_3 [i_0] [10]) - (arr_0 [i_0]))) : (arr_7 [i_0] [11] [i_0])));
            arr_13 [i_0] = (arr_3 [12] [i_3]);
            arr_14 [i_0] [i_3] [i_3] = (((arr_11 [i_3] [i_3] [i_3]) ? (arr_2 [i_0] [i_0] [i_0]) : (((!(arr_4 [i_0] [i_3] [13]))))));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                arr_20 [i_0] [i_4] [i_5] = ((~(arr_10 [i_0] [i_4] [i_4])));
                arr_21 [i_0] [5] [i_5] [i_5] = (((arr_0 [i_0]) > (arr_15 [i_0])));
            }
            var_26 ^= (arr_11 [i_0] [i_0] [i_0]);
            arr_22 [8] |= -3;
            var_27 = (arr_3 [i_0] [i_0]);
        }
        arr_23 [i_0] = (arr_16 [i_0] [i_0]);
        var_28 = (((arr_19 [i_0] [i_0]) ? 43174 : (((arr_16 [i_0] [i_0]) ? -21120 : var_15))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                arr_29 [i_7] = ((((((arr_26 [i_7]) ? (arr_26 [i_7]) : (arr_26 [i_7])))) ? var_10 : (((arr_26 [i_7]) ? 18446744073709551607 : (arr_26 [i_7])))));
                var_29 = (arr_24 [i_7]);
                var_30 += (((arr_25 [i_6]) ? (((arr_25 [i_6]) ? (arr_28 [i_6] [i_7]) : (arr_26 [0]))) : ((min((arr_26 [10]), (arr_25 [i_6]))))));
            }
        }
    }
    #pragma endscop
}
