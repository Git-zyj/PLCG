/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (min(((((arr_5 [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_1 + 3]) ? var_9 : ((((arr_4 [i_0] [4]) && 1289353098)))))), (max(var_4, 3005614174))));
                    arr_9 [i_0] [18] [i_2] = arr_3 [i_0];
                }
            }
        }
    }
    var_10 = (min((((~var_0) ? (min(var_8, var_3)) : (((max(var_2, var_0)))))), var_2));
    #pragma endscop
}
