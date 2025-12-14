/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_11 |= (arr_4 [i_0] [i_0 + 2]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 |= (((((((arr_7 [i_0] [i_0] [i_1] [i_2] [7] [i_3]) || var_10)) ? 1867188035 : var_1)) != (((((var_8 ? -1402829283 : (arr_1 [i_0] [i_2])))) ? var_5 : var_0))));
                            arr_9 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] = (min((arr_8 [i_0] [i_2] [i_3] [i_3] [i_3] [i_3]), (arr_2 [i_0] [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_13 = var_6;
                            arr_17 [2] [i_1] [i_1] [i_0] [i_1] = var_4;
                        }
                    }
                }
            }
        }
    }
    var_14 = (((!-var_4) != var_3));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                arr_22 [i_6] [i_7] [i_6] = max(((var_6 ? (~1) : (1402829282 > var_7))), ((-var_2 ? ((max(var_4, 90))) : ((~(arr_20 [i_6]))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_15 -= ((-(((arr_20 [i_6 + 1]) ? (arr_20 [i_6 + 2]) : (arr_25 [i_6] [i_6] [i_6 - 1] [i_9])))));
                            var_16 += (max((((~1117411358) ? (arr_26 [i_6] [i_6 - 1] [i_8] [i_9]) : (arr_19 [i_9]))), (arr_25 [22] [22] [i_8] [i_7])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_17 = (max(var_17, var_4));
                            var_18 = ((((((-2015537049 ? var_2 : var_6)) != -var_7)) ? (min(var_8, -1)) : var_5));
                        }
                    }
                }
                var_19 = var_5;
            }
        }
    }
    #pragma endscop
}
