/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (max(var_7, ((((var_12 ? var_10 : var_12)) | (((max(17050, var_7))))))));
    var_18 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = var_3;
                arr_5 [i_0] = (max(((var_6 ? 28 : var_3)), var_6));
                arr_6 [i_0] [i_0] [i_0] = (var_9 - ((var_9 * (16094 <= var_11))));
            }
        }
    }
    #pragma endscop
}
