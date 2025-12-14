/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_1 - ((var_9 ? var_6 : var_4)))), var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((((min(var_8, var_8))) + (min(var_5, (arr_3 [i_0] [i_1]))))) * -var_1)))));
                    var_17 = (max(var_17, ((((arr_0 [i_0 + 3]) / (!0))))));
                    var_18 = (arr_4 [i_0 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
