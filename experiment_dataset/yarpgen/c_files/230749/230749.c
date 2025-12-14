/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((min(var_10, -var_0)) + 9223372036854775807)) << ((((-var_2 ? (((max(-54, var_13)))) : (max(var_4, var_0)))) - 202))));
    var_16 = (!((var_6 != ((var_8 ? var_5 : var_6)))));
    var_17 = (min(var_17, (((~((var_10 ? (min(var_1, var_9)) : ((var_5 ? var_5 : var_2)))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 *= (((((var_8 > ((var_1 ? var_12 : var_0))))) << (((max((min((arr_2 [i_0]), (arr_0 [i_0] [6]))), (arr_2 [i_0]))) - 4294967257))));
        var_19 = (max((((((~(arr_2 [i_0])))) ? (min((arr_1 [i_0]), var_1)) : ((((arr_1 [i_0]) ? (arr_1 [8]) : (arr_0 [i_0] [i_0])))))), var_11));
        var_20 = (min(var_20, ((((arr_0 [i_0] [i_0]) ? (max((arr_1 [i_0]), (min((arr_0 [i_0] [i_0]), var_1)))) : ((((var_1 <= ((((arr_0 [i_0] [i_0]) ? 93 : var_13))))))))))));
        var_21 = (max(var_21, (((+(((arr_2 [i_0]) ? (arr_1 [i_0]) : ((-(arr_2 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = (arr_3 [i_1]);
        arr_5 [i_1] = var_5;
    }
    #pragma endscop
}
