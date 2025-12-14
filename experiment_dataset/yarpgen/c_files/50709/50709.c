/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 &= (max((arr_1 [i_1]), (((arr_1 [i_1]) << (242 - 233)))));
                arr_6 [i_0] [i_1] [i_1] = ((-var_10 ? var_3 : (max(15, var_4))));
                var_18 = (arr_2 [i_0] [i_1] [2]);
                arr_7 [i_0] = (min((((max(var_2, 13)) - var_16)), (((var_12 ? (arr_3 [7]) : (arr_3 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] [i_3] = (((max((arr_9 [i_3 + 1]), (arr_9 [i_3 + 1]))) ^ (((((arr_9 [i_3 + 1]) + 2147483647)) >> (((arr_9 [i_3 + 1]) + 1880821156))))));
                var_19 = (min(var_19, (arr_11 [i_2] [i_2] [i_2])));
                arr_14 [i_3] [1] = max(31, (max((arr_12 [i_2] [i_3] [i_2]), -2147483645)));
            }
        }
    }
    #pragma endscop
}
