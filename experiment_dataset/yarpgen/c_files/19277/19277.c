/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = -27971;
    var_16 = (((253 ? -var_9 : 32709)));
    var_17 = ((!((min((!32827), 181)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = ((+(((var_3 + 2179987141) ? (arr_5 [i_0] [i_1]) : 185))));
                var_19 = (min(var_19, ((((!1793538411) % (arr_6 [i_0] [8] [i_1]))))));
                arr_7 [21] = -268435455;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_20 = min(((((arr_4 [i_2 + 3]) >= 0))), (max(var_4, (arr_4 [i_2 + 3]))));
                            arr_15 [i_3] [i_1] [i_2 + 1] [23] = 64;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
