/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -20041551;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = 390345133300460958;
                arr_8 [i_0] [i_0] [i_1] = ((-((169 ? 4294967289 : 127))));
            }
        }
    }
    var_11 = (min(var_4, 39));
    #pragma endscop
}
