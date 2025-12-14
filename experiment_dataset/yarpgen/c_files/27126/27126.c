/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~(!9319458715246164885)))) % (((~15216774492945658646) ? 11344274279452781579 : 60153))));
    var_21 = var_9;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = ((((max(var_13, (((var_19 ^ (arr_1 [1]))))))) ? 2778126421 : (((var_14 ? ((var_3 - (arr_2 [i_0] [i_0]))) : var_9)))));
        arr_3 [i_0] [i_0] = ((((((arr_2 [i_0] [i_0]) > -37))) & 0));
        var_23 ^= (((arr_1 [i_0]) ? 1 : -27002));
    }
    #pragma endscop
}
