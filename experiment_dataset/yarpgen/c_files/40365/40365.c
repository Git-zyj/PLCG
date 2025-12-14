/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = ((((~var_2) >= (~4294967295))));
        var_18 = ((((((((arr_1 [i_0]) ? (arr_3 [i_0]) : (arr_0 [i_0] [i_0]))) * (((((arr_3 [i_0]) < var_16))))))) ? ((-2600137884502147316 ? (~var_8) : var_12)) : (arr_1 [i_0])));
        var_19 = (max(var_19, (((+(((arr_3 [i_0]) / (arr_3 [i_0]))))))));
        arr_4 [i_0] = ((((((var_15 >> (var_6 - 96))))) ? (arr_3 [i_0]) : (~var_10)));
        var_20 &= 1;
    }
    var_21 = 246290604621824;
    var_22 = var_4;
    var_23 = (max((!0), (max((max(var_3, var_9)), var_14))));
    #pragma endscop
}
