/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max(-1842254417, var_6)))));
    var_17 |= (max((max(var_8, (min(var_12, 49)))), var_7));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 = (max(var_18, ((((var_2 ? var_7 : (max(var_9, var_5))))))));
        var_19 *= ((max(((var_9 ? var_7 : var_11), (((~(arr_0 [i_0]))))))));
        var_20 = (arr_1 [i_0]);
    }
    #pragma endscop
}
