/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((((arr_1 [3]) ? var_14 : (arr_1 [i_0]))) & (~var_9)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 -= (((arr_8 [i_1]) ? (((~var_5) ? (((16368 ? var_8 : (arr_9 [i_0] [i_3] [i_2] [i_0] [7])))) : (arr_6 [i_3]))) : ((((arr_9 [i_0] [i_0] [i_1] [i_2] [i_3]) ? (-16380 - var_3) : (arr_4 [i_0] [i_2]))))));
                            arr_10 [i_0] = ((~((0 ? ((((arr_4 [i_0] [5]) ? 9 : (arr_0 [i_0])))) : (min(var_3, (arr_3 [i_1] [i_2])))))));
                        }
                    }
                }
                arr_11 [i_0] = var_2;
            }
        }
    }
    var_18 = (max(((((!10) ? 4 : (((max(33, 28))))))), var_2));
    #pragma endscop
}
