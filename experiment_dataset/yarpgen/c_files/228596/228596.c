/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((!var_8) ? var_1 : (9 != 1433368717))), (!-4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = 556153925;
                arr_7 [i_1] = ((!(((var_18 | ((var_12 ? 2199023254528 : var_0)))))));
                arr_8 [i_0] [6] = 9144082267091061207;
                arr_9 [i_0] = 1;
            }
        }
    }
    var_21 = var_18;
    var_22 = (((var_18 && (var_9 / var_9))));
    #pragma endscop
}
