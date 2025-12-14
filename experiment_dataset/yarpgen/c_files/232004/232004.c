/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_4 ? var_2 : 0))) ? (var_2 + -26343) : ((var_5 ? var_2 : 0))))) ? var_0 : (((0 ? 7 : -8)))));
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (max((max(((var_4 ? var_4 : 13504821625673591324)), (var_2 && 504))), ((max((~var_0), (244 >> 7))))));
        var_15 = (((((((11635 ? 1004820710 : 1)) | 1004820710))) ? ((((((-23432 ? -5 : -5))) ? var_11 : (min(var_9, var_4))))) : ((((5 ? var_6 : var_9)) >> ((((32767 ? -13 : var_7)) - 4294967233))))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_16 = var_11;
        var_17 = ((38434 & ((((min(var_9, 4009))) ? (((var_9 ? var_7 : var_3))) : (~var_6)))));
    }
    #pragma endscop
}
