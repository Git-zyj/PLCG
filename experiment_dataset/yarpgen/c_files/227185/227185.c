/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_6;
    var_14 = (min(var_14, var_7));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, (((var_6 << (((arr_6 [i_0] [i_2]) - 114162293)))))));
                        arr_9 [i_3] [i_1] [i_0] [i_1] [i_0] = 1376368813;
                        var_16 = (min(var_16, ((((((var_1 ? (arr_6 [i_2] [i_2]) : 1)) >> (2918598484 & 1376368803)))))));
                    }
                }
            }
        }
        var_17 = (((18446744073709551608 ? 1871094737 : (arr_5 [i_0]))) << (((((180 + 56) & 26690)) - 64)));
    }
    var_18 = ((var_11 ? (((-1871094731 ? 252 : 74))) : var_3));
    #pragma endscop
}
