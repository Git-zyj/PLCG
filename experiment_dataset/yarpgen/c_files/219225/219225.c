/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min(((var_16 + ((8903941559375874269 ? -7618616943188894855 : -5712259811194484185)))), var_14));
    var_19 -= -1;
    var_20 -= ((((min(var_1, (var_15 ^ 32758)))) ? ((((var_4 ? -8903941559375874250 : 30)) ^ (((814828750 ? 26 : var_15))))) : (((min(var_1, ((max(var_17, var_2)))))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((((-8903941559375874273 > 611061062857843797) << ((((65511 ? -43 : 26542)) + 69))))) ? (((22 == (18 + 65511)))) : var_15));
        var_21 = (min(var_21, ((((((arr_0 [i_0] [i_0]) == var_11)) && 152)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((max((max(13, (arr_1 [i_1]))), (arr_1 [i_1]))))));
        var_23 = ((((var_6 == -8903941559375874248) + ((-45 ? 13 : 118604373)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_24 -= ((((max((arr_6 [6]), 2592866459571338544))) ? (~var_1) : (min(1279, (~65521)))));
        arr_8 [i_2] = (max((max(((-(arr_0 [i_2] [i_2]))), (arr_3 [i_2]))), (((65517 != (arr_7 [6]))))));
        var_25 = (max(var_25, (((((0 || ((((arr_7 [i_2]) + 15853877614138213078))))) ? (((~(((arr_7 [3]) ? var_3 : 119))))) : (((2686865262 ? (arr_3 [i_2]) : (arr_4 [8])))))))));
    }
    #pragma endscop
}
