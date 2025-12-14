/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = var_8;
        var_19 = (+(max((arr_1 [i_0] [i_0]), var_1)));
        var_20 = (max(-129, (126 / 63)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_21 ^= ((var_17 ^ (arr_1 [i_1] [i_1])));
        var_22 = (((arr_2 [i_1] [i_1]) != (arr_2 [i_1] [i_1])));
        var_23 = ((-((var_10 ? 99 : (arr_3 [i_1])))));
        var_24 = ((-(arr_0 [i_1] [i_1])));
        var_25 = (116 != (227 - -1881972641));
    }
    var_26 = (max(var_26, ((max(((var_17 ? (!var_2) : (~129))), var_14)))));
    var_27 = var_12;
    var_28 = min(((-1881972641 * (4656100171820809266 % 1))), (((1149292027 >> (-1881972641 + 1881972664)))));
    #pragma endscop
}
