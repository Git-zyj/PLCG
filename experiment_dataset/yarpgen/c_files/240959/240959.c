/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min(var_13, var_0)))));
    var_19 = ((~(min(((var_0 ? var_3 : var_4)), var_11))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 += ((((((((var_13 + (arr_1 [i_0])))) != (((arr_0 [i_0]) - 1))))) > ((max((arr_1 [i_0]), -65)))));
        arr_2 [1] = (((((((((arr_1 [i_0]) ^ var_7))) - ((var_16 ? var_4 : (arr_0 [i_0])))))) ? var_14 : (!125)));
        arr_3 [i_0] = ((((((var_14 != 112409681) < (((arr_1 [i_0]) ? 1774960542 : -123))))) ^ (arr_1 [i_0])));
    }
    var_21 = ((((min(var_3, var_6))) ? ((536870912 ? var_8 : ((min(var_11, var_5))))) : (((!(var_10 | var_5))))));
    var_22 -= var_5;
    #pragma endscop
}
