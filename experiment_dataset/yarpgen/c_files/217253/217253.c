/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= 91;
    var_16 = (max(var_16, (((var_11 ? 6055339377107405679 : ((((80 ? 4294967295 : var_13)))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_17 = (((((1887840015 ? var_3 : (((-81 + 2147483647) >> (((arr_4 [6]) - 1850549403))))))) % (((arr_3 [i_0 + 2] [i_1 + 1]) ? (arr_3 [i_0 + 2] [i_1 + 1]) : var_7))));
            var_18 = var_6;
        }
        var_19 = arr_2 [i_0] [i_0];
        var_20 = (min(var_20, (!var_1)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_21 = (max(((var_9 ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2]))), (arr_6 [i_2] [i_2])));
        var_22 = var_5;
        var_23 = ((~((((min(var_3, (arr_6 [i_2] [i_2])))) >> (((max((arr_8 [i_2]), -1887840033)) - 4881309836417028729))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (((min((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3]))) / (((82 << ((((arr_10 [i_3] [i_3]) || var_9))))))));
        var_24 = (((arr_9 [i_3] [i_3]) != var_3));
    }
    var_25 = var_8;
    #pragma endscop
}
