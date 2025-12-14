/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? ((max(178, var_7))) : (((var_5 / var_12) / var_11))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((min(35, 38135)) > 7464)))));
        var_14 = 7464;
    }
    #pragma endscop
}
