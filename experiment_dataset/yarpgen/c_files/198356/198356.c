/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_11 = (max(var_11, -607049652321957654));
            var_12 = (max(var_12, (((~((4095 ? (((60 ? 33897 : 4103))) : ((1 ? -4096 : 4294967275)))))))));
            arr_4 [i_0] = (((1 ? 4093 : 1650463204493484384)));
        }
        var_13 = (((var_8 ? var_0 : 0)));
    }
    var_14 = ((-4100 ? (((-4067 ? (((var_2 ? var_6 : var_6))) : var_9))) : (((((1039745184721946012 ? var_2 : var_6))) ? ((var_2 ? 2147483629 : var_7)) : (((1166827496 ? (-127 - 1) : 192)))))));
    #pragma endscop
}
