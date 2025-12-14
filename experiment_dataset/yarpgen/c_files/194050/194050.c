/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (max((min((arr_4 [i_0]), ((((arr_4 [i_0]) ? 32768 : -806041296))))), 2133210212));
                    arr_10 [i_0] = ((18310518165467432406 != (((-(arr_8 [i_0] [i_0] [i_1] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((~(arr_8 [i_4] [i_0] [i_0] [i_0]))))));
                                arr_16 [i_0] [i_3] [i_0] [i_3] [i_4] = ((((min((arr_14 [i_1 + 1] [i_1 + 1] [i_2 + 2]), (arr_8 [i_1 - 1] [i_3] [i_4 + 1] [i_4])))) && (((4776935069894150027 ? (((((arr_3 [7] [i_1] [i_2]) && 16376)))) : (((arr_4 [i_0]) ? 9223372036854775808 : var_2)))))));
                                var_12 = (max(var_12, (((((((arr_13 [i_1 - 1] [i_2] [i_2 + 1] [i_2]) - (arr_14 [i_1 - 1] [i_1 - 1] [i_2 + 1])))) ? ((((arr_14 [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_3] [i_4 + 1])))) : (((((3624953114 ? 13669809003815401595 : (arr_12 [i_1])))) ? 4776935069894150035 : ((max(var_7, -2101460375))))))))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_0] [i_0] [i_0] = arr_0 [i_0];
                    var_13 = (max(var_13, 1919684669));
                }
            }
        }
    }
    var_14 = ((var_8 ? (var_6 & var_4) : var_7));
    var_15 = (((((var_7 ? var_9 : var_4))) ? var_2 : 670014175));
    #pragma endscop
}
