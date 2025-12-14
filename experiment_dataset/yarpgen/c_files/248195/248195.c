/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (max((((var_16 > ((-124 ? var_17 : var_0))))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = arr_3 [i_1];
                arr_6 [i_0 - 2] [i_0 - 2] = ((~38) ? 36 : var_7);
            }
        }
    }
    var_19 = var_11;
    var_20 = var_17;
    #pragma endscop
}
