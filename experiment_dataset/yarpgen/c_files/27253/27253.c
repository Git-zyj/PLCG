/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(((((var_13 ? var_2 : (arr_2 [i_0]))) | (-9223372036854775807 - 1))), ((max(((var_15 ? var_1 : var_1)), (arr_1 [i_0]))))));
        var_20 = (((((arr_2 [i_0]) > (arr_2 [i_0]))) ? ((((4 * var_11) ? 184 : (arr_0 [i_0])))) : (var_13 * var_2)));
    }
    var_21 = (+-1);
    var_22 = ((((max(46193, 9))) ? (min((6291456 / 197), ((2256862332 ? -26 : 9223372036854775807)))) : ((((1 == ((var_9 ? var_14 : 46193))))))));
    var_23 = var_0;
    var_24 = ((-116 - ((-(65535 + var_1)))));
    #pragma endscop
}
