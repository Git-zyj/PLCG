/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 8878828615544037355;
    var_18 = ((-(min(((var_3 ? var_6 : var_7)), var_12))));
    var_19 = (var_11 ^ 274810798080);
    var_20 = (max(var_20, var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((0 + (arr_4 [i_0] [i_0]))));
                arr_6 [i_0] = ((((min(var_11, (max(var_1, 274810798080))))) ? -1 : ((((min(4191, var_0))) ? (((max(var_1, var_11)))) : (-17 % var_4)))));
            }
        }
    }
    #pragma endscop
}
