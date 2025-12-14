/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (arr_0 [i_0]);
                var_17 = ((!((((arr_4 [14]) & ((~(arr_2 [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = (min(var_18, ((((((var_6 ? ((~(arr_7 [i_3] [i_3]))) : (((arr_9 [12] [12] [i_3]) ? (arr_7 [2] [2]) : var_0))))) ? (((arr_10 [i_2] [i_3]) ? var_13 : (arr_7 [i_3] [i_3 + 1]))) : (((arr_6 [i_2] [i_3 - 1]) ? ((var_3 ^ (arr_9 [10] [18] [i_3]))) : (arr_7 [i_2] [i_3 + 1]))))))));
                arr_11 [12] |= var_7;
            }
        }
    }
    #pragma endscop
}
