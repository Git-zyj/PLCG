/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_0] = (max(10965, -1670409788));
                var_11 = ((-8949 ? (-32767 - 1) : 3592614738336114347));
                var_12 = ((arr_0 [i_1 - 1]) >> (37 - 31));
            }
        }
    }
    var_13 *= ((9787 ? 32757 : -32764));
    #pragma endscop
}
