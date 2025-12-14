/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((~((~(var_7 & var_10)))));
                var_15 = (min((arr_5 [i_0] [5]), 37521));
            }
        }
    }
    var_16 = (min(((2 ? ((12226442891683689441 ? 18446744073709551591 : 10)) : (-8 / var_2))), (17324269106374239824 / 26895)));
    #pragma endscop
}
