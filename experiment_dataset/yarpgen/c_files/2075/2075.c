/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(0, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [8] |= (max(((max(255, 0))), (max(2534800926900323068, (((187 ? 255 : 0)))))));
                var_21 = (max(0, -20));
            }
        }
    }
    var_22 = var_0;
    var_23 = (65535 < 255);
    #pragma endscop
}
