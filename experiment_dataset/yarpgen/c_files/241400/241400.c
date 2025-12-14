/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_16;
        var_19 = (min(var_7, ((((max(var_7, -5508939395186852633))) ? 50995 : 58))));
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0 - 1] [i_0]) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 - 1])))) ? 14533 : (~var_0)));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 = ((((((arr_5 [i_1 - 1] [i_1 + 1]) / ((var_9 ? (arr_1 [i_1 + 1] [1]) : var_13))))) ? (min(var_14, -var_15)) : -4848331222653209407));
        arr_6 [i_1 + 1] = ((((((var_4 ? var_14 : 8953173250749155185))) ? (((arr_0 [i_1 - 1] [i_1]) ? -9223372036854775805 : var_10)) : (((var_8 ? (arr_1 [i_1] [i_1]) : -8953173250749155195))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, ((((arr_9 [i_3] [i_2 - 1] [i_1]) != ((+(((arr_9 [i_1] [i_1] [i_1]) + var_7)))))))));
                    var_22 = (max(var_22, 9223372036854775807));
                    var_23 = (max(var_23, (min((min((arr_9 [i_3] [i_3 - 3] [i_1 - 1]), var_2)), (max(var_7, (arr_9 [i_3] [i_3 - 1] [i_1 + 1])))))));
                    var_24 = var_7;
                }
            }
        }
    }
    var_25 = (min(var_25, (~var_1)));
    var_26 = var_14;
    #pragma endscop
}
