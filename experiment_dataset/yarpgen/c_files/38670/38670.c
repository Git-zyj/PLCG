/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((~(((1914489711 ? -29355 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [14] [i_1] [i_0] &= ((((~((-(arr_2 [i_0] [i_1] [i_1]))))) * ((min((2253769148 / 1), ((max(1, (arr_3 [i_0])))))))));
                arr_5 [i_1] |= 5267036618243003051;
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
