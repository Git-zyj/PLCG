/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = ((-494237765 ? ((((8495005048416856101 < (((var_0 ? var_12 : 22))))))) : var_15));
                var_17 = (min((!var_9), (min(((var_7 >> (var_15 - 17922998476081136925))), (248 == 20795)))));
                var_18 = (((min(((var_1 ? 15562 : var_4)), (10758 != 32767))) * -15562));
            }
        }
    }
    var_19 = var_12;
    var_20 = (min(var_20, var_4));
    #pragma endscop
}
