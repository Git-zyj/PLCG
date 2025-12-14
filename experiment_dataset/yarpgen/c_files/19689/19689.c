/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min((min(2365707605883420677, 0)), (min(((var_8 ? 5688 : var_9)), (max(var_9, var_2))))));
                var_16 = (max(var_16, ((((((arr_2 [i_1 + 1] [i_1 + 3] [i_1 + 1]) + var_6)) | ((var_12 ? var_6 : 0)))))));
            }
        }
    }
    var_17 = (var_12 == var_10);
    var_18 = var_13;
    var_19 = 57;
    #pragma endscop
}
