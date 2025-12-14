/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((var_7 + (((arr_1 [i_0 + 2] [i_0 - 1]) - ((min(2470, var_6)))))));
        var_17 = (max(var_17, (((~((63061 << (((~var_1) + 9)))))))));
        var_18 = ((!((min(-1405392724, (arr_0 [i_0]))))));
        var_19 = (((!2470) ? ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((arr_0 [16]) ? 14560 : (arr_0 [i_0]))) : (arr_0 [i_0 + 2]))) : ((((arr_1 [i_0 + 3] [i_0]) ? 2470 : (arr_1 [i_0 + 3] [i_0 + 3]))))));
        var_20 += (((min(var_14, 0)) << (((arr_0 [0]) - 37016))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 ^= 31;
            var_22 = (((32768 << (((((arr_4 [i_1] [i_2]) + 16555)) - 13)))));
        }
        var_23 = (max(var_23, (63066 && 223372902)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 ^= (40 != 576460752303423360);
        var_25 = ((!((78 && (arr_3 [16] [i_3])))));
    }
    var_26 = var_0;
    var_27 = ((1985389002 ? 2470 : 3056819428121543831));
    #pragma endscop
}
