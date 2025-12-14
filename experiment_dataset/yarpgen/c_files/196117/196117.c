/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((var_3 != (var_2 + 6584057504353806118))), (((min(var_6, var_6)) > var_2))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = max((((arr_0 [2] [i_0]) ^ 2147483647)), ((-((63 ? var_3 : -3916)))));
        arr_3 [20] [i_0] = (max(var_5, (arr_0 [i_0 - 1] [i_0 - 1])));
        arr_4 [12] [i_0] = (max((max(var_7, var_0)), ((min(3916, 242)))));
        var_16 = var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_17 += ((var_11 ? (arr_0 [3] [i_1]) : (arr_0 [i_1] [i_1])));
        var_18 = (var_4 == -3917);
        arr_7 [i_1] = (((!-4927) >= (1 != 181590725)));
        var_19 = (max(var_19, var_5));
        var_20 += var_3;
    }
    var_21 = (min(((~((7624797136446370958 ? 32271 : -1842830159583021958)))), var_8));
    #pragma endscop
}
