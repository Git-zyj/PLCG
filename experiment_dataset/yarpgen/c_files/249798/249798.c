/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = (-(((!var_18) & (~1738289901))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 = (((((13713 ? 18446744073709551615 : 4294967291))) && ((((((var_12 ? var_0 : var_11))) ? ((var_13 ? 18446744073709551611 : var_0)) : var_9)))));
        arr_3 [i_0] [i_0] = (((!var_4) ? ((min(var_12, var_8))) : (((1206598857 ? (~var_15) : (((var_13 ? var_5 : -686733515))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_23 = (((65306 >= var_12) || ((((((var_12 ? var_16 : var_16))) ? (((2905432077 ? var_3 : var_15))) : (max(var_0, var_12)))))));
        var_24 = ((-((var_14 >> (var_15 - 3805594810)))));
    }
    var_25 = (((max((min(var_3, var_19)), (((var_1 ? var_18 : var_3))))) % ((((var_0 ? 668302410092478147 : var_6)) - (((max(31, var_1))))))));
    var_26 |= -5118313590657168294;
    #pragma endscop
}
