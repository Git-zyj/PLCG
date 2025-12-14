/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 *= (!var_9);
    var_21 = (!var_11);
    var_22 = (max(var_22, var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [7] [i_0] [i_2] = ((~((~(arr_0 [i_0] [i_1])))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((+(min((arr_0 [i_0] [i_1]), (min((arr_7 [i_0] [i_2] [8] [i_2]), (arr_3 [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
