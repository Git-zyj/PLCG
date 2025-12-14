/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = var_4;
    var_15 = (max(var_15, var_7));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (min((((-8846305387993408269 ? (arr_2 [i_0]) : var_0))), (((arr_1 [i_0]) ? 8846305387993408262 : 8846305387993408269))));
        var_16 = (((arr_2 [i_0]) ? -8846305387993408287 : 255));
        arr_4 [i_0] = -1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [14] = (8655300056666852864 ? 243 : -8655300056666852865);
        var_17 -= ((!(-115 & 57521)));
    }
    #pragma endscop
}
