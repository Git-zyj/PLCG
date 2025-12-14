/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((32767 || (((var_6 ? var_9 : -21604)))))));
    var_12 = ((-(min((((16 ? 140 : 4918))), (max(var_1, var_6))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 = 0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((arr_7 [i_1 - 1] [1] [i_2 - 1] [i_2 + 4]) ? (arr_3 [i_1 - 1] [i_2 + 4]) : (var_2 | var_1))))));
                    var_15 = ((1 ? 1 : -21604));
                    var_16 += (~-1);
                    var_17 *= (((arr_7 [i_2] [i_2] [i_2] [i_2 + 4]) ? 11820 : 2131511919));
                }
            }
        }
        arr_9 [10] = 16;
        var_18 = ((var_6 ? ((110 ? (arr_7 [i_0] [i_0] [13] [13]) : 1)) : 33285));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_12 [12] [i_3] = max(17562, -6670553293167639028);
        arr_13 [i_3] = (min(((~((36 ? 53697 : var_7)))), ((((((5749 ? 17 : 0))) ? (arr_6 [6] [i_3] [7]) : ((max(7, 119))))))));
    }
    #pragma endscop
}
