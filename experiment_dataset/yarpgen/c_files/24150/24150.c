/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = var_10;
        var_16 ^= ((((var_11 ? (arr_0 [i_0]) : (arr_0 [i_0]))) + ((var_0 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_17 = ((((((1 ? -11935 : -11935))) ? var_8 : ((min(var_13, 9))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = ((((min(-9223372036854775802, 238))) ? (~17617970016461901610) : var_6));
        var_19 = (max(var_19, var_9));
        var_20 = ((((~(min(18446744073709551615, -18))))) ? (~var_7) : ((242 ? (((18446744073709551615 ? -8598282279843361744 : 9))) : (min(0, 17617970016461901584)))));
    }
    var_21 = var_0;
    var_22 = ((!(!var_12)));
    var_23 = 11909;
    #pragma endscop
}
