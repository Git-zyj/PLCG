/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = var_12;
                arr_6 [i_1] [i_1] &= (((((arr_5 [i_0]) ? 4 : 12))));
                arr_7 [i_0] [i_1] = (((((124 ? (arr_0 [i_0]) : -4))) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_0 - 1])));
            }
        }
    }
    var_21 |= var_5;
    var_22 = (max((((((var_12 ? var_8 : var_3))) ? var_8 : 65532)), (((((var_0 ? 4 : var_6)) > ((-1732956424 ? var_17 : var_4)))))));
    var_23 *= -var_8;
    #pragma endscop
}
