/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = (max(var_16, ((min(var_5, var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (max(1, -671002091));
                arr_6 [i_1] = ((((min(((5 ? 65532 : -78)), var_1))) ? 0 : var_13));
            }
        }
    }
    #pragma endscop
}
