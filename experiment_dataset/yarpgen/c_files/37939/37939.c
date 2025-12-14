/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 = ((((-223 && (arr_8 [i_2 + 1]))) ? 1011299833 : (~var_13)));
                            var_18 = ((((var_14 > (arr_5 [i_1] [i_1 + 1] [i_1 + 1]))) ? ((~(arr_5 [i_1] [i_1 + 1] [i_1 + 1]))) : (((arr_6 [i_2 - 2] [i_1 + 1] [i_0]) ? (arr_5 [i_1] [i_1 + 1] [i_1 + 1]) : (arr_5 [1] [i_1 + 1] [i_1 + 1])))));
                        }
                    }
                }
                var_19 = (-((-4294815805234673706 ? ((var_13 ? -1669974708 : var_13)) : ((var_14 ? 3413598464 : (arr_5 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {
                var_20 *= (max((arr_9 [i_5 + 3]), 3132978844));
                var_21 = ((249 ? (((arr_11 [i_5 + 1]) | ((~(arr_11 [i_4]))))) : ((~(~-1669974719)))));
                var_22 = ((~(~var_2)));
            }
        }
    }
    #pragma endscop
}
