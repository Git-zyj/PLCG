/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((((var_18 ? var_11 : var_19)) | ((var_0 % (arr_4 [i_0 - 1])))));
                arr_7 [i_0] = (arr_5 [0] [i_0 - 1]);
            }
        }
    }
    var_20 = (max((var_9 * var_3), (!var_3)));
    #pragma endscop
}
