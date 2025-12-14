/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((+((((((arr_12 [18] [i_1 + 2] [0] [i_1 - 1] [i_1 + 2]) | 21570))) ? (((arr_6 [16]) ^ (arr_3 [10] [0]))) : (arr_12 [0] [i_3] [0] [i_1 + 1] [0]))))))));
                                var_14 += ((+((((((arr_11 [i_3] [i_3] [16] [16] [i_1 - 3] [20]) / (arr_1 [i_0])))) ? (((6733 < (arr_1 [i_0])))) : (((arr_6 [4]) ? (arr_1 [i_4]) : (arr_1 [i_0])))))));
                                arr_13 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1] [i_0] [i_1 + 2] = (((((111 >> (14250303578905471740 - 14250303578905471730))) <= 224)));
                            }
                        }
                    }
                    arr_14 [i_0 - 1] [i_1] [i_0] = ((-(((arr_2 [i_0] [i_1 + 2]) ? 1023 : (arr_0 [i_0])))));
                    var_15 = (min(0, (((arr_5 [i_1 + 1] [i_1 - 1]) ? (arr_5 [i_1 - 1] [i_1 - 2]) : (arr_5 [i_1 - 3] [i_1 - 1])))));
                    arr_15 [i_2 - 1] [i_0] [i_2] = ((-(((15035480399186295216 | 47955) * (arr_11 [i_0] [i_1 + 2] [i_0] [i_0] [i_0] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_16 -= (-1 * 54687);
                arr_22 [i_6] [i_6] &= 43968;
            }
        }
    }
    var_17 = ((var_11 ? var_1 : var_10));
    var_18 = (min(var_18, ((((~((var_0 ? var_7 : var_0)))) | 64521))));
    #pragma endscop
}
