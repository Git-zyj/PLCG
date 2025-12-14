/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_8));
    var_21 = -15165;
    var_22 = ((1000351442 ? 15166 : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 1778534777;
                    var_23 = (min((((((var_3 ? -1778534777 : var_2))) ? (((1000351432 ? var_16 : 0))) : (arr_6 [i_0] [i_1 - 2] [i_2 - 3]))), 1));
                }
            }
        }
    }
    #pragma endscop
}
