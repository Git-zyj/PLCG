/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = arr_0 [i_1];
                arr_5 [i_0] [i_1] = (~18490);
                var_18 = -17857;
            }
        }
    }
    var_19 = ((min(var_3, 41494)));
    var_20 = (max(var_20, var_3));
    var_21 = (min(var_13, 18490));
    #pragma endscop
}
