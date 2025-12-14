/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((!(((var_4 ? -977236798 : 2016542916))))) ? ((((max(var_13, var_1))) ? (min(var_7, 2113322270)) : (!var_1))) : (((max(var_9, var_5)) & var_2)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 += (var_10 | var_6);
            arr_5 [i_0] [i_0] = (((var_9 > var_0) ? 110 : (!var_8)));
        }
        var_17 += ((var_4 ? ((var_9 ? var_5 : var_8)) : var_1));
    }
    #pragma endscop
}
