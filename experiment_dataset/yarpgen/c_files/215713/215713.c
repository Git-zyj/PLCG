/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 + ((var_2 ? var_14 : ((var_8 ? var_1 : 11346))))));
    var_18 = var_13;
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((((((var_13 ? 32767 : (arr_0 [i_1])))) % (min((arr_3 [i_0] [i_1] [i_0]), var_11)))) + (32343 || -33)));
                var_21 = (((min((arr_3 [i_0] [i_0] [i_0]), -8796811016703319100)) + (32 != 13706)));
                var_22 = ((((((var_6 | 144) ^ 622956363))) ? var_14 : (255 == -33)));
            }
        }
    }
    #pragma endscop
}
