/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0 - 1])))) ? (((6917529027641081856 ? (arr_0 [i_0 - 2] [i_0]) : (arr_1 [i_0 - 2])))) : (((!var_1) & ((var_9 ? var_9 : var_1))))));
        var_16 = ((1 ? -24354 : 0));
        var_17 |= (arr_1 [i_0]);
    }
    var_18 = var_4;
    var_19 = (max(var_19, var_8));
    var_20 -= var_7;
    var_21 = (max(var_21, var_5));
    #pragma endscop
}
