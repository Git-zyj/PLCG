/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(var_3, -990770792));
                arr_6 [i_1] = var_3;
                var_14 = (max(((((var_2 | (arr_0 [i_0]))))), ((var_0 ? ((min(var_3, (arr_1 [i_1])))) : 1269075788446129030))));
            }
        }
    }
    var_15 = (max(var_15, ((((min((min(var_6, var_13)), (((4177 ? -990770792 : var_5))))) + var_10)))));
    var_16 -= ((((var_0 << (var_1 || var_10))) > 16383));
    var_17 = var_11;
    #pragma endscop
}
