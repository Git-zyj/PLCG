/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -4206112996789676776;
    var_11 = ((1 ? var_9 : var_8));
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 1;
                arr_6 [i_0] [i_0] = 1;
            }
        }
    }
    var_13 = ((var_9 & (((((min(var_6, 1))) / ((max(var_6, var_6))))))));
    #pragma endscop
}
