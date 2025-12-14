/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 *= (137438953472 >> 0);
                var_16 = (max(var_16, (~1281733066564540220)));
            }
        }
    }
    var_17 = (max((max(var_11, var_14)), ((var_11 ? var_4 : (max(var_1, 9223372036854775807))))));
    var_18 &= (((((-1576148710 == var_6) << ((((2632891866097635271 ? var_7 : var_9)) - 106)))) * (((((11404 ? 1 : var_6)) == var_14)))));
    var_19 = (65535 | ((var_1 ? (((var_11 ? 1576148709 : var_5))) : var_11)));
    var_20 = ((((351649383772281583 > 1985571701518354834) / (!var_13))));
    #pragma endscop
}
