/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [9] [i_1] [9] [i_2] = min((arr_2 [i_0] [i_1]), ((((((arr_2 [i_0] [5]) | (arr_5 [i_0] [i_1] [i_0])))) ? ((var_12 ? (arr_3 [i_1]) : var_0)) : (arr_5 [i_0] [i_0] [i_2]))));
                    arr_7 [i_0] [1] [i_2] = -448521604;
                }
            }
        }
    }
    var_18 = var_16;
    #pragma endscop
}
