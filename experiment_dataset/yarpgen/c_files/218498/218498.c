/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((-713675499 == (!var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = -2350915046797134706;
                    var_22 = (-1328140656 + 886322329);
                    var_23 = (((min(-2794202997778900352, 12745)) | 18192775896721429883));
                    var_24 = (((((arr_6 [i_0] [i_1] [i_2] [i_2]) ? (arr_3 [i_2] [i_1] [i_2]) : 1377733313)) - (((arr_6 [13] [i_0] [i_1] [i_2]) ? (arr_6 [i_2] [i_1] [i_1] [16]) : (arr_3 [10] [i_1] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
