/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_13 ? var_2 : -31462))) / (max(var_7, var_1)))) | (((max(51537, 13998))))));
    var_20 = (((1 - 10) ? 13998 : (65535 / var_12)));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((var_13 <= -var_13) ? (((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? var_13 : ((31 ? 1049236454 : 3246799429))))) : ((var_13 ? (arr_0 [i_0]) : (max(var_0, -853))))));
        var_21 = var_1;
        arr_3 [i_0] = ((((16345766155470692273 ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 14002)) : ((-(arr_0 [i_0]))))) + (((arr_0 [i_0]) - (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = var_2;
        arr_8 [i_1] [i_1] = (arr_4 [i_1 - 1]);
        var_22 -= (((arr_6 [4] [4]) <= (((arr_6 [i_1] [2]) + var_12))));
    }
    var_23 = var_9;
    var_24 = var_0;
    #pragma endscop
}
