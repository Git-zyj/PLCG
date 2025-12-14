/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_10 * (~1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = ((((1073741824 < 698573658) ? (((((arr_8 [21] [i_1] [i_2]) >= var_14)))) : var_11)));
                    var_19 = (max((((1 - ((max(var_1, var_6)))))), (1 % 115)));
                }
            }
        }
    }
    #pragma endscop
}
