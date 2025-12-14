/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_18));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((926716479 ? 65524 : ((926716479 ? 1683596834 : -1683596845))));
                var_22 |= ((((max(926716488, 926716488))) ? (!1) : (-8 ^ -1370337745)));
            }
        }
    }
    #pragma endscop
}
