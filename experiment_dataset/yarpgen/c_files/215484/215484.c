/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(-8783155063937445430, (min(3079178906144864723, 9223372036854775807))));
                var_21 ^= (min(1, (max(-16137, (max(449845535, 8192))))));
            }
        }
    }
    var_22 = max(1, -3079178906144864708);
    #pragma endscop
}
