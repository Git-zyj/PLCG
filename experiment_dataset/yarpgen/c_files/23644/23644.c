/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(3415270902389782338, var_15)));
    var_17 = ((((!((max(var_0, var_5))))) && ((max(var_0, var_8)))));
    var_18 -= (((((var_11 << (!var_6)))) + var_10));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_19 ^= ((((-(~255))) == var_3));
        var_20 = (max(((max((arr_1 [13]), ((~(arr_1 [i_0])))))), (((max((arr_0 [i_0 - 1]), var_11)) + (arr_1 [i_0 + 4])))));
    }
    #pragma endscop
}
