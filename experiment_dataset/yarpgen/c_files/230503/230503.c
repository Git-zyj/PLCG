/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1388858842;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 -= (((var_2 ^ 1201927939) ? (arr_5 [i_0] [i_1] [i_1] [i_0]) : var_7));
                    var_21 = (min((306144723755875439 + 8191), (((var_0 * (arr_5 [i_1] [i_1] [i_1] [i_2 - 2]))))));
                    var_22 *= (min((((var_9 ? -306144723755875440 : (arr_4 [i_2 - 2] [6])))), (min(140737488355327, (arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 2])))));
                    var_23 *= ((((1 ? 0 : (arr_5 [i_2 - 1] [i_2] [i_2] [i_2 + 1]))) <= ((((arr_2 [9] [i_2 - 3] [i_2]) || (((var_15 ? (arr_3 [i_2] [i_0]) : (arr_3 [i_1] [i_1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
