/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max(((min(0, 104))), (max((max(var_7, var_5)), (!var_11))))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((5308762610815923002 ? 65535 : 110))) | 10271902318434865528)))));
        var_14 = var_11;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = ((!(1954289785362627906 && var_10)));
        var_16 = (min(var_16, (((-(-268435456 - 6829942849319658793))))));
        var_17 += (((((((arr_3 [i_1]) + var_10))) ? (((arr_0 [i_1]) ? (arr_0 [i_1]) : -25253)) : (((var_6 ? var_1 : 32276))))) % -var_4);
    }
    #pragma endscop
}
