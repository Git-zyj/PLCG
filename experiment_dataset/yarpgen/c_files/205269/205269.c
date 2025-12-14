/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((((0 & (arr_3 [i_0] [i_1 + 1]))) + ((~(arr_0 [i_0]))))))));
                    var_21 = (max(var_21, ((((((~(((arr_0 [6]) ? 57062 : (arr_0 [i_1])))))) ? (((~((var_6 ? -5935 : 34108))))) : 12775025875031264371)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 = arr_10 [i_0] [i_1 - 1] [i_0] [i_3] [i_4];
                                arr_11 [i_0] [i_1] [i_0] [14] [15] [5] [i_0] = (((var_19 & 34108) ? -1349835809 : (((arr_7 [i_0] [i_1] [i_1 + 2] [i_4 - 1] [i_4 - 2]) ? (arr_7 [i_4] [i_1] [i_1 - 1] [i_4 + 2] [i_4 + 2]) : (arr_7 [i_3] [i_1] [i_1 - 3] [i_4 + 2] [i_4])))));
                                arr_12 [i_4] [i_3] [i_0] [i_0] = -1322491715;
                                var_23 ^= var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    var_24 = (arr_17 [i_7 - 1] [i_6 - 3]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_25 = (!0);
                                var_26 = ((~(125 ^ var_19)));
                                arr_25 [i_9] [i_5] [i_7 + 2] [i_6] [i_5] = (arr_21 [i_5] [i_8] [5] [i_8] [i_9]);
                            }
                        }
                    }
                    var_27 = (max(var_27, 2551974558889783975));
                }
            }
        }
    }
    var_28 -= ((-(((((min(var_13, var_2)) + 2147483647)) >> (((~-1349835809) - 1349835805))))));
    #pragma endscop
}
