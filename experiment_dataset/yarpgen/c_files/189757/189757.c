/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0]) << ((((-31182 ? 14582827029669254597 : 31182)) - 14582827029669254597))))) < (((arr_1 [i_0 + 4] [i_0]) ? (arr_1 [i_0 + 3] [i_0]) : (arr_1 [i_0 - 1] [i_0])))));
        arr_3 [i_0] [i_0 - 1] = (((arr_0 [i_0]) ? (((((arr_1 [i_0 + 2] [i_0]) && 26830)))) : ((var_11 ? 76 : (((arr_1 [i_0] [i_0]) ? 11908190015473791902 : 31181))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [1] |= (-31206 <= 1648952396303718521);
        var_17 = (min((min(var_12, (~var_9))), var_1));
        var_18 = (arr_4 [i_1]);
    }
    #pragma endscop
}
