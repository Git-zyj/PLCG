/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = min(-4, 1063581850186917129);
                var_17 += (((!var_6) + ((-18057 ? (8064 + var_8) : (!var_6)))));
                arr_6 [i_0] [i_0] = var_1;
            }
        }
    }
    var_18 = (((((!((max(var_15, var_6)))))) + ((-5 ? 1 : 1))));
    var_19 += (max(var_1, var_3));
    var_20 = var_7;
    var_21 = var_13;
    #pragma endscop
}
