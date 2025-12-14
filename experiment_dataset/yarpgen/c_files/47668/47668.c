/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_15));
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((var_16 ? var_5 : (((arr_0 [i_0]) ^ (arr_0 [i_0])))));
        var_19 = (min(var_19, ((min(((((arr_1 [i_0]) || (arr_1 [i_0])))), (((arr_1 [i_0]) ? var_3 : 61201)))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 = (max(var_20, ((max(10694, (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))))))));
        var_21 = (((((var_3 ? (arr_0 [i_1]) : 10694))) * (((arr_4 [i_1]) / ((-10705 ? var_16 : (arr_3 [i_1])))))));
        arr_5 [i_1] = (((((((arr_4 [11]) / -7278253800887706164)))) ? ((((arr_0 [i_1]) / -10707))) : (((arr_3 [i_1]) / (arr_1 [i_1])))));
        arr_6 [10] &= (((arr_1 [i_1]) ? 168 : -5197));
        var_22 = (((arr_1 [i_1]) * (((10707 ? 57644 : 43700)))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_23 = (arr_7 [10]);
        var_24 = (((((-10714 / ((-10707 ? 61324 : -7278253800887706164))))) ? ((min(((min(10694, 10704))), (max((arr_9 [i_2]), (arr_10 [i_2])))))) : (max((88 || 141), (arr_8 [i_2])))));
    }
    #pragma endscop
}
