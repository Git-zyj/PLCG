/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = ((((max(((var_0 ? var_17 : (arr_2 [i_0]))), var_3))) ? ((((max(var_19, (arr_2 [i_0])))) ? var_2 : (((arr_0 [i_0] [i_0]) - (arr_1 [i_0]))))) : -var_12));
        var_21 = ((((arr_0 [i_0] [i_0]) > (arr_1 [i_0]))));
        var_22 &= ((-740745649 ? -1040467985 : 12285293460955870098));
    }
    var_23 = var_8;
    var_24 = (min((((((var_6 ? var_8 : var_18))) ? var_5 : ((var_16 ? var_7 : 25)))), 0));
    #pragma endscop
}
