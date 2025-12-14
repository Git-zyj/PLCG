/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] = (((max(((((((arr_7 [i_0] [i_0] [i_2]) + 2147483647)) << (((((arr_3 [i_1] [i_2]) + 24829)) - 17))))), (max(11, (arr_2 [i_0] [i_1]))))) > var_7));
                    var_11 = 3081225791;
                }
            }
        }
    }
    var_12 = ((var_5 % (max(var_1, var_4))));
    var_13 = var_6;
    #pragma endscop
}
