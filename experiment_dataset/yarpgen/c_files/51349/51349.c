/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -222387524;
    var_15 = (max(((var_13 ? (((var_13 ? 828357763 : var_8))) : (max(var_6, -222387519)))), var_7));
    var_16 = (((((var_1 ? 1 : (-9223372036854775807 - 1)))) ? var_10 : ((max(var_12, ((min(-222387519, 13968))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = ((var_3 == (arr_0 [i_0])));
        var_18 *= (!-222387513);
        var_19 = ((((222387524 ? -1563523286 : (arr_2 [i_0] [i_0]))) >= (!222387523)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 18446744073709551605;
        var_20 = min((min((arr_1 [i_1]), (arr_1 [i_1]))), (arr_1 [i_1]));
        arr_8 [i_1] = (min(-1768900020, (~85)));
        arr_9 [i_1] = (min(((((65093 || 28) ? (((arr_5 [i_1]) << (243 - 237))) : (max(222387523, -222387501))))), ((var_13 ? ((-584668318 ? (arr_0 [i_1]) : var_0)) : (arr_3 [i_1])))));
    }
    #pragma endscop
}
