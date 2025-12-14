/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-(!var_4)))) ? var_6 : (!var_9)));
    var_12 = ((((min(((32767 ? 1 : 65202)), 8929357157074121426))) - 9517386916635430189));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = (((((-89 ? 1743826243682201520 : 34))) ? (arr_2 [i_0] [i_0]) : (~-var_3)));
        var_14 += ((32 ? (min((arr_0 [i_0]), ((((arr_2 [9] [i_0]) / 6641639686172352918))))) : (arr_2 [0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (~1)));
        var_16 = (((((-((-7 ? (arr_3 [i_1]) : -29998369))))) ? (arr_1 [i_1]) : ((((((arr_4 [i_1] [i_1]) + (arr_2 [0] [i_1])))) ? (((arr_2 [1] [i_1]) ? 9223372036854775807 : 4194176)) : (arr_2 [i_1] [i_1])))));
    }
    var_17 = ((-0 ? var_8 : (-2147483647 - 1)));
    #pragma endscop
}
