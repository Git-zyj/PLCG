/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, -128));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = (((((-(((-128 && (arr_0 [i_0] [i_0]))))))) ? ((0 ? 17155 : 21540)) : ((-((-104 ? 1629979540 : 0))))));
                arr_6 [i_0] [i_0] [i_0] = ((0 ? 6144 : 60));
            }
        }
    }
    #pragma endscop
}
