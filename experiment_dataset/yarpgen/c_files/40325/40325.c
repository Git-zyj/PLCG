/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (((min(-632569855, (max(14915350722351066941, 2039394629)))) * ((((min(2039394629, var_8)) / (arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] |= (((arr_2 [i_0]) < (((!(((arr_0 [i_0]) > 750615294)))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = var_7;
            var_20 = (min(var_20, ((var_15 ? (((var_1 < var_1) ? ((var_2 << (var_1 - 13658840092809182951))) : ((((arr_6 [i_0] [i_0]) < (arr_0 [6])))))) : (((var_5 ? 279489309 : -2037882702)))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] = var_4;
        var_21 = var_9;
    }
    var_22 = (((var_16 - (17 / -2039394629))));
    #pragma endscop
}
