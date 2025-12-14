/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((245 ? (((min((arr_1 [i_0] [5]), (arr_1 [i_0] [i_0]))) ^ ((((arr_0 [i_0]) | (arr_0 [i_0])))))) : (((-3 ^ (arr_0 [i_0]))))));
        arr_3 [i_0] = (arr_2 [6]);
        arr_4 [i_0] = var_9;
        var_20 = ((((((2255 ? 247 : var_12)))) ? ((3847219649418802814 ? ((var_3 ^ (arr_0 [i_0]))) : -50860)) : ((min((arr_2 [i_0]), ((((arr_1 [i_0] [1]) != (arr_1 [i_0] [i_0])))))))));
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        arr_8 [19] = (max((9 + 14671), (arr_6 [i_1 - 1])));
        var_21 = ((((((arr_5 [i_1 - 3]) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 - 3])))) && (((arr_7 [i_1 - 2]) && (!var_9)))));
        var_22 = ((max((arr_5 [i_1 - 1]), (arr_6 [i_1 - 3]))));
    }

    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_11 [i_2] = ((((((112 ? 7922645540456003442 : 30849)))) ? var_0 : ((-(arr_6 [i_2 - 3])))));
        var_23 += var_14;
    }
    #pragma endscop
}
