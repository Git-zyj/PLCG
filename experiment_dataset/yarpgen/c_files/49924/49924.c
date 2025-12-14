/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (2092212039874120427 < -9223372036854775793);
    var_21 *= (max(var_2, ((((~0) >> (234 < var_2))))));
    var_22 += (((max((~0), (~var_12)))) ? (~-8556066474806290859) : var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((~(0 == 70)))) ? 3935433785 : ((((max(1, 4294967295))) / 754954202126082062))));
                var_23 |= (11407186601235872231 < 19770);
            }
        }
    }
    var_24 = var_9;
    #pragma endscop
}
