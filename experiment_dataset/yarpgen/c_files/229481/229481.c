/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((var_16 ? (arr_1 [0]) : ((7505931927326811042 ^ (arr_5 [i_0 - 2] [i_0] [i_0] [i_0 - 2]))))))));
                    arr_6 [3] [i_1] [i_1] [i_1] = ((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) / (arr_5 [i_0 - 1] [i_0 + 2] [i_0 - 2] [i_0]))) >> (((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_2]) >> (var_18 - 7653247898719507794))) - 902629486)));
                }
            }
        }
    }
    #pragma endscop
}
