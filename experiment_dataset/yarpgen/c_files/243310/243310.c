/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((~239) ? (~var_8) : (((var_7 << (var_9 - 6769801277776815167)))))), (min(var_12, (var_0 | var_6)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((-((-(arr_2 [i_0 - 1])))));
        var_16 = ((~((-(arr_0 [i_0 + 1] [i_0 + 2])))));
    }
    var_17 = (((min(((max(250, var_2))), var_1)) << var_4));
    var_18 = (max(var_2, (min((var_4 & var_0), var_10))));
    #pragma endscop
}
