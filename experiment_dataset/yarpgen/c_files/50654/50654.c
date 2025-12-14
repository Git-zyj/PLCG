/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((((min(var_10, -19856)) % 19841))) ? (max((var_14 - 8266377470889943044), (((var_12 >> (var_13 - 147)))))) : ((9066672916919462075 ? ((-26566 ? -39 : -8266377470889943045)) : ((min(var_12, 1028269152))))))))));
    var_16 = var_11;
    var_17 = ((((((((max(-8266377470889943045, 46))) && var_7)))) - (max(var_10, -3082728684280029042))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [1] = max(-58, (1028269156 != -24));
        var_18 = (min(var_18, var_14));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    #pragma endscop
}
