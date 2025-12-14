/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = 866318674;
                var_19 = var_2;
                var_20 = ((((min(var_4, (arr_3 [i_0] [i_0])))) ? 3428648621 : ((((!(((var_6 ? var_1 : (arr_0 [i_0]))))))))));
                arr_4 [i_1] [i_1] = (((min(((((arr_3 [i_1] [i_0]) & var_15))), (min((-127 - 1), var_6)))) ^ ((var_11 ^ (~1807430907)))));
            }
        }
    }
    var_21 = 3;
    var_22 = var_3;
    #pragma endscop
}
