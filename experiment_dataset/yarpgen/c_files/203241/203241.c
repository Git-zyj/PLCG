/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (max((~var_10), (((!((min(-32401, 32385))))))));
                    var_13 = ((var_1 ? (((-var_0 ? 306408989 : var_2))) : ((((max(-119, var_10))) ? ((-32392 ? var_5 : var_4)) : (((max(32391, (arr_7 [i_1] [i_1])))))))));
                }
            }
        }
    }
    var_14 = (max(var_14, var_5));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_15 = (((1970106360 ? 275896824 : 65535)));
                var_16 = (max(var_16, ((((((171 ? 1970106360 : 9580063514417902999))) ? (((min(-32392, -16)))) : ((min(16, (arr_6 [i_3] [i_4])))))))));
                arr_17 [i_3] [i_3] = (max(var_7, 32392));
                var_17 = (min(var_17, ((+(((arr_10 [i_4]) ? var_1 : 8368748011245198603))))));
                var_18 = (min(((((max(var_3, (arr_10 [i_3])))) ? (arr_16 [7] [i_4] [i_4]) : (((~(arr_7 [i_3] [i_3])))))), ((max(var_3, (arr_7 [i_3] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
