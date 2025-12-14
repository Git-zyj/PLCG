/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = var_11;
                arr_6 [i_1] [0] = (~-732005995);
            }
        }
    }
    var_13 -= (1695018467218657694 * (((11228 ? -1101118667 : 11220))));
    var_14 = (min(var_14, ((max(var_11, var_9)))));
    var_15 = (!-1394929451847995679);
    var_16 = var_1;
    #pragma endscop
}
