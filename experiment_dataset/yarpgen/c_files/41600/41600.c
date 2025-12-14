/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((var_6 ^ (var_15 || var_14)));
    var_21 = (max((((!(((var_10 ? 32186 : 224)))))), var_1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max(((~((var_2 ? (arr_1 [i_0]) : 32)))), (arr_1 [i_0])));
        arr_3 [1] &= ((21 ? 4294967274 : 9223372036854775807));
        var_22 = ((((min(14929, (arr_0 [3])))) ? 3165872937310801766 : (arr_1 [9])));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_23 = 0;
        var_24 = (min(var_15, (-9223372036854775807 - 1)));
        var_25 = (((((3165872937310801782 ? 1 : 1))) ? -16042 : ((31 ? ((min((arr_4 [7] [i_1]), 10671))) : -234))));
    }
    #pragma endscop
}
