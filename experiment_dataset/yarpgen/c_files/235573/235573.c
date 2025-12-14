/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = ((((((min(var_17, var_11)) * ((var_8 ? var_17 : 63))))) ? (((((((1 ? 1 : -878919074))) && 0)))) : var_9));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] |= -var_4;
        var_20 = (min(var_20, (arr_1 [i_0])));
        arr_4 [i_0] = (((!((min((arr_0 [i_0]), var_11))))));
        arr_5 [i_0] [i_0] &= (min((arr_2 [i_0] [i_0]), (((arr_0 [i_0]) ? var_1 : (((!(arr_1 [i_0]))))))));
    }
    var_21 &= (min(((262143 * ((var_7 ? var_14 : 17253151727503309901)))), ((min(var_15, (!var_3))))));
    #pragma endscop
}
