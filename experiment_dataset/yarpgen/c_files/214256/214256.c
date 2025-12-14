/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_6, (min(var_3, var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [15] [15] [i_2] = min((((!(arr_3 [i_1 + 1] [i_1 + 1])))), ((((min(var_5, var_3))) ? var_10 : (min((arr_1 [i_0]), 4192066117)))));
                    arr_7 [1] [i_1] [i_0] = (((((((arr_4 [i_1] [i_1 + 1] [i_1]) / var_0))) ? (arr_0 [i_1 + 1]) : (max((arr_2 [i_1 - 1]), 16777216)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {
                var_17 = (max(var_17, (arr_14 [i_4])));
                var_18 |= (arr_1 [i_3 - 1]);
                var_19 = -3637819389706529334;
                arr_15 [i_3] [i_4 - 1] = (((arr_13 [i_3 + 1] [i_3] [i_3 + 1]) ? var_11 : ((~(arr_1 [i_3 + 1])))));
                arr_16 [i_3] [4] [i_4] = (((((arr_2 [i_4]) ? ((136 ? -3637819389706529346 : (arr_1 [i_3]))) : ((max(1336154820, -1))))) / (arr_9 [i_3 - 1] [i_4])));
            }
        }
    }
    var_20 = 2524365877;
    #pragma endscop
}
