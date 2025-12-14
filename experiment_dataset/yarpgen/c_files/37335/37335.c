/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (min(32, -13084))));
    var_13 = var_8;
    var_14 = 19527;

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = (223 & 1008);
        var_16 = 238;
        var_17 = (((((((238 ? 19527 : 1955675649))) ? (((arr_3 [i_0 - 1] [i_0 - 1]) & 21088035)) : (((1 * (arr_1 [1])))))) / ((((arr_1 [i_0 + 1]) ? var_3 : (arr_1 [i_0 + 1]))))));
        arr_4 [i_0] [i_0] = 7413147729270793168;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_1 [i_1 - 1]);
        var_19 *= ((((max((min(972636831, -1096630797)), (((65238 + (arr_2 [i_1]))))))) ? (max(19527, (arr_0 [2]))) : ((((arr_7 [i_1 - 1] [i_1]) ? (((arr_5 [i_1 + 1]) / var_11)) : 1)))));
    }
    #pragma endscop
}
