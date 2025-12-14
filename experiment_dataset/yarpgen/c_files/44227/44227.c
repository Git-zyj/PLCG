/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [9] [9] [5] [i_0] = (((((~-40) ? var_12 : var_12)) ^ (((((-18479 ? 65535 : var_18)))))));
                    var_20 = (var_18 <= var_9);
                    var_21 = var_0;
                }
            }
        }
    }
    var_22 = -18470;
    #pragma endscop
}
