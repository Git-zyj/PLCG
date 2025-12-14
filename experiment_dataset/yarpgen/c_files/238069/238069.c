/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((76 || (((1902768216 ? var_15 : 753635799)))))));
    var_18 = (((((!var_7) < var_12)) ? var_6 : (((((2147483584 ? var_10 : -4444))) ? (42 <= 127) : var_14))));
    var_19 = var_12;
    var_20 = (max(872450063, (((((var_11 ? var_1 : 120)) | 127)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (arr_6 [i_1] [i_1]);
                    var_22 *= var_6;
                    var_23 *= (arr_3 [0] [0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
