/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 ^= (((((~(max(var_1, (arr_6 [16] [2])))))) ? (max(var_3, ((var_2 ? var_16 : var_0)))) : ((((((27794 ? 21 : 65531))) || (arr_0 [i_1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_1] [i_2 + 1] [i_3] [i_4] = (min((arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0]), 17));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = min(4, ((((((~(arr_2 [i_0 - 1] [i_3])))) || (((var_2 & (arr_6 [i_4] [i_1]))))))));
                                arr_13 [i_0 + 2] [13] [16] [i_3] [i_3] [13] [13] = (!(((((arr_5 [i_4] [8] [8] [i_0]) ? (arr_6 [i_2 + 1] [7]) : 3248949025972043053)) >= (((var_1 ? -2147483643 : 32767))))));
                            }
                        }
                    }
                    arr_14 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_2] = ((var_16 ? (arr_4 [i_0] [i_1]) : (((var_1 ? -var_4 : (((arr_1 [i_2]) ? var_10 : var_13)))))));
                    var_18 = ((~(((((var_12 ? var_11 : 3248949025972043047))) ? ((((arr_4 [i_0] [i_0]) ? var_2 : 17726))) : ((var_3 ? var_9 : (arr_3 [i_0 + 2] [i_1] [i_1])))))));
                }
            }
        }
    }
    var_19 = (max(((var_5 ? var_1 : var_5)), ((((var_7 ? var_16 : var_8))))));
    #pragma endscop
}
