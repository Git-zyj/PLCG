/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_2 ? var_3 : -22));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [8] = ((261233475 ? 2147483647 : ((-1421791426 ? 2 : 8440048960547119704))));
                var_16 |= (((((-261233476 ? 12 : 73))) ? ((1 ? 8848398636298598959 : 44035)) : (((6259063309817588360 ? 163 : 63)))));
                arr_5 [i_0] [i_0] [i_1] = -1;
            }
        }
    }
    var_17 = 751844798;
    #pragma endscop
}
