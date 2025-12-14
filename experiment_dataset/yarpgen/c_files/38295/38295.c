/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 -= (max((arr_3 [i_1]), (arr_3 [i_0])));
                var_16 = (arr_0 [i_0]);
                var_17 &= ((-(arr_2 [i_0] [i_1])));
                var_18 += (min((((-(arr_0 [i_1])))), (max((arr_5 [i_0] [i_1] [i_1]), ((max((arr_0 [i_0]), 15)))))));
                var_19 = -28;
            }
        }
    }
    #pragma endscop
}
