/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!((((var_12 ? 10 : 1055634700)))));
    var_14 = (~var_4);

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_1 ? ((-(arr_0 [i_0]))) : (max(((min((arr_0 [i_0]), var_10))), ((~(arr_0 [i_0])))))));
        var_15 = (min(var_15, (((!(((10 ? (!18034866204535098814) : 597344266))))))));
        arr_3 [i_0] = ((((((arr_1 [i_0 + 1]) ? (arr_0 [i_0]) : var_9))) ? -1294084550 : (var_2 + var_8)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 += arr_5 [10];
        arr_6 [i_1] = var_4;
        var_17 *= var_1;
        arr_7 [i_1] = ((~((var_0 % (arr_0 [i_1])))));
        var_18 ^= (arr_5 [12]);
    }
    #pragma endscop
}
