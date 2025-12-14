/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 = (var_2 ? (((((var_1 ? 0 : var_15))))) : ((var_1 ? ((var_13 ? var_6 : 18446744073709551615)) : (((max(var_17, var_7)))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_21 -= (((max(-22352, 15662245970469401975)) * (((-(arr_0 [i_0] [1]))))));
        var_22 = (-(((((max((arr_2 [i_0] [i_0]), var_15))) && -28561))));
        var_23 &= max((((((min(var_6, var_4))) && ((min(15908730713031450814, 18446744073709551615)))))), (arr_0 [22] [22]));
        arr_3 [i_0] = ((44229 ? (var_12 - var_4) : (((max(-1, 65535))))));
    }
    #pragma endscop
}
