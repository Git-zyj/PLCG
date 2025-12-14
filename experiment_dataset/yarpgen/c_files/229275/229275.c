/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((((((33554431 ? 3 : 18446744073709551615))) ? (arr_1 [i_1 - 2] [i_1]) : (((arr_3 [i_0] [i_0] [i_2]) ? (arr_4 [i_2] [i_1] [i_0]) : (arr_7 [i_2] [i_1] [i_2] [i_1 + 2]))))));
                    var_18 = (min(var_18, -33554409));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 = (max(var_19, (arr_5 [i_2 - 3])));
                        var_20 -= (arr_3 [i_1 + 2] [i_1] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_21 += ((((((arr_5 [i_1 + 2]) ? (arr_5 [i_1 + 2]) : (arr_5 [i_1 - 3])))) ? (((arr_11 [i_0] [i_1] [i_1 - 2] [i_2 - 2]) ? (((((arr_4 [i_0] [i_0] [i_2]) == (arr_11 [i_0] [i_1] [i_2] [i_4]))))) : (((arr_0 [i_0]) ? (arr_2 [i_1]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))))) : ((((((arr_13 [i_4] [i_4] [i_4] [i_4]) ? (arr_9 [i_0] [i_4] [i_2 + 1] [i_4] [i_2 + 2]) : (arr_1 [i_0] [i_2]))))))));
                        var_22 = (max(var_22, 58736));
                        var_23 -= (((-(arr_1 [i_1 + 2] [i_2 - 1]))));
                        var_24 -= 38881;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {
                    var_25 = (((((arr_15 [i_7]) || ((!(arr_10 [i_5] [i_5 + 1] [i_6] [i_6] [i_7 + 2] [i_7]))))) ? 18446744073709551607 : (((((arr_17 [i_5] [i_6 - 3] [i_7 + 3]) && (arr_1 [i_5 + 1] [i_6]))) ? (((arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? (arr_7 [i_5] [i_5 - 1] [i_5] [i_5]) : (arr_15 [i_5 - 1]))) : ((((arr_6 [i_5]) ? (arr_14 [i_6]) : (arr_3 [i_7] [i_7] [i_7]))))))));
                    arr_21 [i_6] [i_6] [i_6] = (arr_9 [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_6]);
                    var_26 = (((((arr_4 [i_5] [i_5] [i_7]) ? (arr_18 [i_5] [i_6] [i_7]) : (arr_9 [i_7 + 1] [i_6] [i_6] [i_6] [i_5]))) << (((((arr_14 [i_5 - 1]) ? (arr_7 [i_5] [i_5 - 1] [i_6] [i_7]) : (arr_2 [i_7]))) - 11160597580864486670))));
                    var_27 |= (arr_18 [i_6] [i_6 - 2] [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
