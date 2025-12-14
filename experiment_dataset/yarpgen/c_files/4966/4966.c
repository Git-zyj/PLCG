/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 += (max((var_11 - 1938236145), var_13));
                arr_6 [i_1] = var_1;
                arr_7 [7] = ((!((((min(var_12, var_19)) + (((max(115, 122)))))))));
            }
        }
    }
    var_21 = (max((max(-115, 152)), (max(-141, 115))));
    #pragma endscop
}
