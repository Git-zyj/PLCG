/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = ((-(max(((var_6 ? var_2 : (arr_6 [i_1 + 2] [i_0]))), ((max((arr_3 [i_0] [i_1]), 1)))))));
                var_15 = (arr_2 [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                var_16 = ((-((max(15754929321985730487, ((((arr_5 [i_3] [i_3] [i_2]) < 2905133985))))))));
                var_17 = (((((var_7 ? (arr_7 [i_3 + 2]) : var_0))) ^ (max(((max(2908472816, 906047692))), (max((arr_8 [i_2]), (arr_2 [i_2 + 1])))))));
            }
        }
    }
    #pragma endscop
}
