/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (((min((max(562949953421311, -455102572027761060)), (arr_2 [i_1 + 2]))) >= ((((!((min(var_8, var_7)))))))));
                var_20 *= ((((min(889684191, (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? (((arr_3 [i_1 + 1]) ? (arr_5 [i_1 - 1] [i_1 + 2] [i_1 - 1]) : 15)) : (~889684214)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((((((((arr_8 [i_2]) >= var_18)))) > ((-(max(var_6, 6573414362337358448)))))))));
        var_22 = (min(var_22, ((max((min(var_12, (arr_10 [i_2] [i_2]))), ((var_11 ? (arr_10 [i_2] [i_2]) : var_16)))))));
        var_23 = (min(var_23, (-455102572027761060 < -889684215)));
        arr_11 [i_2] [i_2] = ((+(((~var_6) ? (((arr_9 [i_2] [i_2]) ? 5117625555260658037 : 48)) : (!25)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_24 = var_17;
        arr_14 [i_3] = (~var_6);
    }
    var_25 *= (max(var_9, var_14));
    var_26 = var_8;
    #pragma endscop
}
