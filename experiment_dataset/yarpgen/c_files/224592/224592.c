/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 ^= (((((((var_7 ? var_13 : var_5)) << (var_13 - 34)))) ? ((var_17 ? var_16 : (var_4 != var_3))) : 113));
                    var_19 = (max(var_19, var_5));
                    var_20 = ((((var_5 >> (var_7 - 962853355283873856)))) ? var_17 : (var_2 != var_11));
                    var_21 = (min(var_21, (min(var_5, (((var_0 || (var_7 < var_13))))))));
                }
            }
        }
    }
    var_22 ^= (((((var_8 ? var_10 : var_15))) ? ((~(var_16 - var_6))) : ((((max(var_5, var_6)))))));
    var_23 = (((((var_0 || var_10) ? (var_7 - var_2) : ((var_3 ? var_12 : var_10)))) - var_1));
    #pragma endscop
}
