/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((max(18446744073709551615, var_2)), ((max(7849, var_1)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [0] = ((((max((arr_1 [i_0]), 0))) ? ((min(-16, 65535))) : (((arr_0 [i_0]) / ((-14428 ? -22202 : 1))))));
        var_12 = (!-var_4);
    }
    var_13 = (max((((!(var_4 ^ 32767)))), -1321011435));
    #pragma endscop
}
