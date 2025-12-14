/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((((min(var_2, var_10))) ? (((var_16 ? var_2 : 7))) : (var_4 | -9072212502257140367))) <= (((((min(1620945438, -9072212502257140370))) ? ((var_14 ? (-127 - 1) : 2674021867)) : var_6)))));
        var_17 = var_2;
        var_18 = 145;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 = 9072212502257140386;
        arr_6 [i_1] [i_1] = (4294967284 || 65373);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_20 = -9072212502257140390;
                    var_21 = (arr_4 [i_1] [i_1]);
                    arr_11 [i_1] [i_2] [i_3] = (arr_0 [i_1]);
                    var_22 = ((-(arr_5 [3] [i_2])));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_23 = ((((var_12 ? (arr_5 [i_4] [i_4]) : 8016213506431629871)) ^ ((min(var_3, ((-9072212502257140375 ? 15 : 3061354019)))))));
        var_24 = (max((max((arr_5 [i_4] [i_4]), 240)), ((max(var_9, (arr_5 [i_4] [i_4]))))));
    }
    var_25 = 15857;
    var_26 = ((~(min(((var_5 ? 1233613260 : var_13)), (var_1 ^ 4)))));
    var_27 = var_9;
    #pragma endscop
}
