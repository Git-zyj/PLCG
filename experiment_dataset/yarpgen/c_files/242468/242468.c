/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (~var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min(var_19, -var_1));
                var_20 |= (arr_3 [i_0] [4] [i_1]);
            }
        }
    }
    var_21 = (min(var_21, var_15));
    var_22 = ((max((var_4 | 6431584508488043393), ((max(var_16, var_4))))));
    #pragma endscop
}
