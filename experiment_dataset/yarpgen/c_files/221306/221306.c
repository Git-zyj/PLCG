/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = 0;
                arr_5 [i_1] |= 65535;
            }
        }
    }
    var_11 += 7088128562569803431;
    var_12 = 65520;
    #pragma endscop
}
