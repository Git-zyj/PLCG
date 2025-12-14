/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_8 ? (var_13 <= 161) : ((var_16 ? ((94 ? var_16 : 116)) : (var_3 || var_10))))))));
    var_20 = 7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_21 = -21522;
        var_22 = ((((min(((min(94, var_11))), (min((arr_0 [i_0]), var_4))))) ? ((((((arr_0 [11]) ? var_12 : var_9))) ? (((94 || (arr_1 [i_0] [i_0])))) : (arr_0 [i_0]))) : (((!(arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = min((-498219997 & 84), (min((arr_0 [i_0]), -1500606192)));
    }
    var_23 = var_13;
    #pragma endscop
}
