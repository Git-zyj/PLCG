/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min(((min((-32767 - 1), 255))), (max(31323, 3117410367))));
                var_14 ^= ((((min(0, -31329))) ? ((min(1909869464, 31323))) : ((1 ? ((min(31323, 841353723))) : 7823203787319998242))));
            }
        }
    }
    var_15 = (max(60714, ((-31323 ? 20 : 23218))));
    #pragma endscop
}
