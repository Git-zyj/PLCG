/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_9 % var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((-(!-32)));
                    var_19 = (max((arr_3 [i_0] [i_1 + 3] [i_1 + 1]), 15360));
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_1 + 2] = -var_13;
                    arr_9 [i_0] [i_1 + 1] [i_2] = ((-(((arr_4 [i_0] [i_1 + 3]) ? ((max(26, var_6))) : 59167))));
                }
            }
        }
    }
    var_20 = max(19565, var_17);
    var_21 = (min(var_21, ((max(var_1, 7)))));
    #pragma endscop
}
