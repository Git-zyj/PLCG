/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (-17604 ? (min((arr_7 [i_0] [i_0]), var_8)) : (!var_8));
                var_13 = ((25 ? 1 : (arr_7 [i_1 + 2] [i_1 - 1])));
                var_14 = ((((max((-5905981886409673924 / -2147483620), -1437528792))) ? (max(var_2, (arr_6 [i_1 + 1]))) : (-1437528795 == -943648442)));
                var_15 *= min(((~(arr_6 [i_0]))), ((+((15419 ? (arr_5 [12]) : 3225742771)))));
            }
        }
    }
    var_16 += ((var_1 == (max((var_0 / var_0), (max(-1211220512, var_6))))));
    var_17 = var_5;

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_18 = (max(((max(-943648442, var_11))), (max((((var_2 ? 115 : var_11))), var_8))));
        var_19 = ((-(((((1 ? 53970 : -1437528792))) - (min(-6903244190350209827, (arr_1 [i_2])))))));
        var_20 ^= (((-2147483647 - 1) ^ 6903244190350209858));
    }
    #pragma endscop
}
