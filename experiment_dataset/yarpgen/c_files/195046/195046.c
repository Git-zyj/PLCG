/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (((arr_0 [i_1]) * (((18446744073709551615 * 742734349) * ((((arr_0 [i_0]) / var_11)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_15 = (((max((((arr_1 [i_1]) ? 974896724 : (arr_4 [i_1 - 3] [i_2]))), (arr_5 [i_3] [2] [i_2])))) ? (((((((arr_5 [i_0] [1] [i_2]) & 3552232947))) || 742734349))) : ((min(18446744073709551615, (max((arr_3 [i_0] [i_0 + 1]), (arr_6 [i_3] [7] [19] [i_0])))))));
                            var_16 += 4294967295;
                            arr_10 [i_0] [i_0] [21] [i_0] [i_2] [i_3] = ((((arr_7 [i_0] [i_0]) ? ((((arr_9 [21] [i_1] [i_1] [21]) * (arr_0 [i_0])))) : (arr_8 [i_2] [i_2]))));
                            arr_11 [i_0 + 2] [i_1] [i_2] [i_3] = (((min((min((arr_0 [i_2]), (arr_3 [i_0] [i_1 + 1]))), (max((arr_1 [i_0]), (arr_3 [i_0 + 1] [i_0 - 1])))))) ? (((3552232951 ? (arr_1 [i_0 + 2]) : 19))) : (arr_6 [i_0] [i_1] [i_2] [i_1]));
                        }
                    }
                }
                var_17 = (((arr_2 [i_1]) ^ (arr_4 [i_0] [23])));
                var_18 = (max(((((max((arr_4 [i_1] [i_0]), (arr_8 [15] [i_0])))) ? 18 : var_11)), (((((arr_7 [i_0] [i_0]) + (arr_1 [i_1])))))));
                var_19 = (+(((((arr_3 [3] [i_1]) > 1)))));
            }
        }
    }
    var_20 = (max(var_20, var_1));
    var_21 = (max(var_10, (max(var_5, var_0))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            {
                var_22 = (max(var_22, ((max((arr_6 [i_4] [i_5] [i_5 + 1] [i_5]), (arr_6 [i_5] [i_5] [i_5 + 1] [2]))))));
                arr_17 [0] [i_5] [1] = ((((max((arr_0 [i_4 - 1]), (arr_0 [i_4 + 1])))) && (((min((arr_13 [i_4]), (arr_2 [i_5])))))));
            }
        }
    }
    var_23 = (max(-63, 34));
    #pragma endscop
}
