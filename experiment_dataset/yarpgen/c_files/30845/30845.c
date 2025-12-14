/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = max((!7510), (14123067716720381948 && 46354));
        arr_4 [i_0] = min((min(46354, 2674)), (((((min((arr_1 [i_0]), var_15))) ? (((var_19 == (-9223372036854775807 - 1)))) : (~8217)))));
        var_20 ^= (((max(var_9, (arr_2 [i_0]))) < ((((max(var_12, var_9))) ? -46364 : -5728732647078059217))));
        var_21 -= (-9223372036854775807 - 1);
    }
    var_22 = (min(var_6, var_12));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = ((~(arr_6 [i_1])));
        var_24 = (min((((arr_7 [i_1]) ? (arr_6 [i_1]) : (arr_5 [i_1]))), (arr_5 [i_1])));
    }
    #pragma endscop
}
