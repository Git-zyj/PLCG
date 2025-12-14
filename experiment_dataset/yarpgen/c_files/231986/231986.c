/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_10;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = ((((min(127, (!127)))) ? ((~((var_5 >> (107 - 101))))) : (((30177 || ((max(28266, 164))))))));
        var_19 -= var_0;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 = (arr_7 [i_1] [i_2]);
            var_21 = (!var_15);
            var_22 = (~171);
        }
        var_23 = ((+(((~31714) ? ((max((arr_3 [i_1] [12]), 78))) : ((2563515785 ? -6255 : var_6))))));
    }
    #pragma endscop
}
