/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((max(var_4, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [14] = (min(((~(arr_0 [i_0 + 1]))), ((min((2733196830 || -7722463605862481574), 26038)))));
                var_14 = ((((-3 ? (-127 - 1) : -7722463605862481574)) - (arr_0 [i_0 + 1])));
                var_15 = ((min(((22 ? 1221106370 : 1561770466)), (arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1]))));
                arr_6 [2] [i_0] = (arr_0 [i_0]);
            }
        }
    }
    var_16 = 68;
    #pragma endscop
}
