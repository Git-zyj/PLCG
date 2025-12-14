/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = (-((9223372036854775808 ? (min(-1243, 18226052200549813631)) : (var_16 <= 18226052200549813644))));
    var_22 = ((((min(((var_12 ? var_13 : -8716384894812706245)), (13 || var_17)))) ? (!var_4) : ((((!1) && (!1))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_23 = min((((max(18226052200549813610, (arr_6 [i_0]))) * (max(10758, 220691873159737962)))), (((~(((arr_9 [i_0] [i_0] [i_0]) ? 14 : var_4))))));
                    arr_10 [i_0] [i_1] [i_2 - 1] = ((~((var_13 * ((1 ? 0 : 220691873159738003))))));
                }
            }
        }
    }
    var_24 |= -var_9;
    #pragma endscop
}
