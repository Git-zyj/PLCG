/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 -= (((((-2147483647 - 1) % var_6))));
                var_20 = (((-1 == 1246905256) ? (3714 >= 0) : (0 % -31)));
                var_21 |= (~33766);
            }
        }
    }
    var_22 = (((var_3 == 1) || 42052));
    var_23 = (((((max(var_12, var_8)))) == (~-5807464910151544834)));
    var_24 *= 117;
    var_25 = ((((min(var_16, var_6))) ? (((((((var_15 ? 1 : 1817355081))) >= ((-38 ? 2199366844 : var_13)))))) : (max(((35591 ? var_4 : 15)), (((31 ? 31751 : -106)))))));
    #pragma endscop
}
