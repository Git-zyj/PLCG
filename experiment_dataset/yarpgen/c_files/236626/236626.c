/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(23975, (min(-101, 23981)))))) + (max(var_3, (18446744073709551615 & var_7)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 = ((((((max(var_1, (arr_2 [i_0])))) ? ((min(1, 23997))) : var_4)) - (arr_0 [i_0])));
        var_15 = ((((((arr_0 [i_0]) >> (((var_8 >= (arr_1 [i_0]))))))) + (((max(41552, var_5)) * ((max((arr_2 [i_0]), var_9)))))));
        var_16 = 1788705445;
    }
    #pragma endscop
}
