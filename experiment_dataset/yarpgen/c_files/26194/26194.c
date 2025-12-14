/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((9028223760621545594 ? ((((max(var_4, 0))) ? var_8 : ((var_7 ? var_7 : 1082735617)))) : (var_1 / var_6)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (((((var_9 ? (((arr_3 [i_0] [i_0] [i_0]) + (arr_2 [i_0] [i_0]))) : (((max(-7, 6))))))) ? -7 : var_5));
                    arr_8 [i_0] [i_2] [i_1] [i_0] = (arr_2 [i_0] [i_0]);
                }
            }
        }
    }
    var_12 = var_0;
    #pragma endscop
}
