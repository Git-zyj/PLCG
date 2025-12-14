/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((84 ? 16406754557852376329 : var_17));
    var_21 += ((+(((69 + -85) ? -84 : 0))));
    var_22 = (((-1073741824 < 60) ? ((min((max(4096, 1179167821)), 0))) : 2322065592566522496));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] &= 72983791;
                var_23 = (max(var_23, (((((50331648 ? -15737 : 1179167808))) ? 4294967295 : (!-1)))));
            }
        }
    }
    #pragma endscop
}
