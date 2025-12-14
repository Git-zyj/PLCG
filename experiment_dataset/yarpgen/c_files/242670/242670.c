/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (arr_2 [i_0]);
        arr_3 [i_0] &= ((((((13120767495688994075 ? var_10 : var_4)))) ? ((max((arr_0 [i_0] [i_0]), var_3))) : ((((arr_0 [i_0] [i_0]) ? (((arr_1 [i_0]) | (arr_0 [i_0] [i_0]))) : (((((-32767 - 1) >= (arr_1 [i_0]))))))))));
        var_15 = ((+((max((3169057812 >= var_12), var_13)))));
        arr_4 [i_0] [i_0] = (((max((arr_2 [i_0]), var_8))));
    }
    var_16 = (!var_7);
    #pragma endscop
}
