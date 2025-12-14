/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = 1;
                arr_5 [i_1] = (max((((((((arr_3 [i_0] [i_1] [i_0]) ? var_7 : (arr_0 [i_0])))) ? 192 : var_10))), (((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : 1))));
            }
        }
    }
    var_19 = ((+(((~-5649500457608588616) % var_16))));
    var_20 = ((max((8 - var_11), (var_13 != -7604862983592434271))));
    #pragma endscop
}
