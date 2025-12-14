/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = (min(var_20, ((min((((max(var_16, var_3)) * -var_4)), var_1)))));
    var_21 &= (((((((var_10 ? var_0 : var_3)) * (var_15 * var_10)))) ? var_6 : ((((max(549232398, 396095126))) ? 4294967288 : var_9))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_22 = (((((!var_4) != (arr_1 [i_0]))) ? (max((arr_1 [11]), var_15)) : (!4294967295)));
        var_23 &= ((var_7 <= (arr_1 [i_0])));
        var_24 = min((((((((arr_0 [i_0] [i_0]) % var_12))) ? (((!(arr_0 [i_0] [i_0])))) : (!var_0)))), ((-(((arr_0 [i_0] [i_0 - 2]) ? (arr_0 [i_0] [i_0]) : 2675618426)))));
        var_25 = ((((arr_0 [i_0 - 2] [i_0 + 1]) || (arr_0 [i_0] [i_0 - 1]))) ? (arr_1 [i_0]) : (((max(16152894572315342528, (arr_1 [i_0]))) ^ var_15)));
    }
    #pragma endscop
}
