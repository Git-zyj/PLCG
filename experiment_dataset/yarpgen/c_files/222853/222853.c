/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (max(var_2, var_9));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((-(arr_1 [i_0])))) ? (arr_0 [i_0 + 2]) : 63084)));
        arr_3 [i_0] [i_0] = ((-((((max(var_10, var_6)) < (!63084))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((!((min((arr_5 [i_1 + 1]), var_2)))));
        arr_7 [i_1] = (arr_5 [i_1]);
        var_17 &= (max(((((arr_5 [i_1 - 1]) && var_9))), (arr_5 [i_1])));
        arr_8 [i_1] = ((var_11 || (13041 & -13041)));
    }
    #pragma endscop
}
