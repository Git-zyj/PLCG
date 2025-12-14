/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((((!-31228) ? var_7 : var_8)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = arr_0 [i_0];
                    var_20 = (max(var_20, ((((max(((~(arr_4 [i_2] [i_1]))), -2))) ? (arr_5 [i_1] [i_2]) : ((~(((arr_6 [i_0] [i_0] [i_2]) ? 127 : (arr_2 [i_2])))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_21 = var_17;
                arr_14 [i_3] = (((max((arr_9 [i_3 + 1] [i_3 - 1]), var_5)) >= var_15));
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
