/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = ((11624296025800661213 ? 12863279168964210620 : 1573200467));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((arr_0 [7] [6]) ? (arr_0 [i_0] [i_0]) : -677003899))) ? ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) : (~var_9))) ^ (((~((max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
        var_18 = max(((((((min((arr_1 [i_0] [9]), var_7)) + 2147483647)) >> var_1))), (min((~var_8), (~var_13))));
        arr_3 [i_0] = max((((1 ? 2037790910 : 1))), (min(10420654783371500869, ((-7170078899413959792 ? 1 : -7170078899413959792)))));
        var_19 = (max(var_9, ((((arr_1 [i_0] [i_0]) ? ((153416018 ? -1065711013 : var_13)) : 1)))));
        var_20 = -1;
    }
    var_21 = var_10;
    var_22 *= (((1292496629 / var_13) | (!178)));
    #pragma endscop
}
