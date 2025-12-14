/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((~var_9), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [1] [i_1] [i_0] = 623725375;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] = arr_7 [2] [2] [i_2];
                    var_16 = var_4;
                }
                arr_10 [i_1] [i_0] = (!var_14);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_17 = (min(var_17, (arr_13 [i_4] [i_3] [i_3])));
                arr_15 [i_3] [i_3] [i_3] = (((((arr_14 [i_3]) ? var_12 : (arr_14 [i_3])))) ? (((37321 && (arr_14 [i_3])))) : ((28215 ? 28215 : 41574)));
                var_18 = (max(var_18, (!-9080845194591072269)));
                arr_16 [i_3] = (14917859758671504965 ? 815901142 : 1);
            }
        }
    }
    #pragma endscop
}
