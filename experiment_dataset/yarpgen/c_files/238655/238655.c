/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = ((var_7 ? ((2979819267 ? var_1 : ((var_12 ? var_5 : var_11)))) : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = min(65535, (arr_3 [i_1] [10]));
                    arr_8 [i_1] [8] [8] = ((max(65534, ((var_8 ? var_9 : (arr_6 [i_2] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
