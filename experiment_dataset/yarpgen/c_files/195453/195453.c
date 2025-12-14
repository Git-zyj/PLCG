/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((arr_4 [i_0]) / (((38 ? -127 : 1)))))) ? ((((((arr_4 [i_1]) ? (arr_4 [i_0]) : -7143295302054268221))) & (arr_3 [i_0] [i_0]))) : (arr_1 [i_0])));
                var_15 ^= (((15557776419635219896 <= var_7) % (~8589934591)));
            }
        }
    }
    #pragma endscop
}
