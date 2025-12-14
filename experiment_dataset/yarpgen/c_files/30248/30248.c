/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -731469500;
    var_21 = 731469493;
    var_22 = var_2;
    var_23 = (max(((731469500 ? -15 : 1396859794264737832)), 1259902705));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_24 = ((max(-731469506, 1259902695)));
                arr_6 [i_1] &= ((((min(572795547766314612, 731469501))) ? (((!((max(1259902705, 0)))))) : ((-var_17 ? -101 : -731469474))));
            }
        }
    }
    #pragma endscop
}
