/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(~3682800823876276288)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (min(var_19, (((-var_11 && ((min((((14763943249833275338 ? (arr_1 [i_0] [4]) : (arr_1 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? 1672519508 : var_12))))))))));
        var_20 += (20 != 0);
        var_21 = ((((max((arr_0 [i_0] [i_0]), var_15))) ? (arr_1 [4] [i_0]) : ((3682800823876276288 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        var_22 = ((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (max(32, 25))))) ? -61 : 7141));
    }
    #pragma endscop
}
