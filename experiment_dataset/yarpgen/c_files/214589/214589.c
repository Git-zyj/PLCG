/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(var_9, var_0)) > ((13351909877043085639 ? 33554431 : var_11)))) ? (((min((arr_0 [i_0]), 1)))) : ((18396856957272296320 ? ((14923370249018610660 ? 15587671882425341526 : 12294319701552361959)) : (5725946780736123438 * 0))));
        var_14 = (min(15836723161830661758, 2793848804897668701));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = (0 >> (-var_1 - 4023108147507219618));
        var_16 = (((var_11 ? (arr_4 [i_1]) : var_9)) > (arr_3 [i_1]));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_17 *= (((arr_6 [i_2]) > (((arr_7 [i_2]) ? var_9 : (arr_7 [i_2])))));
        var_18 = ((!((min((arr_6 [i_2]), (((arr_7 [i_2]) | var_5)))))));
    }
    var_19 = (((~(4296661229621948186 > 31457280))));
    var_20 = (max(var_20, ((((max((~var_11), (min(1, var_6))))) ? var_2 : var_4))));
    #pragma endscop
}
