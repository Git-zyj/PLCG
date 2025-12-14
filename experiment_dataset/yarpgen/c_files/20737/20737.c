/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((~-3220293880777427604) + ((((min(var_16, var_9))) + var_4))));
    var_19 = (max(var_19, ((((0 / 1) >= -1)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0 + 2] [i_0] = var_5;
                    var_20 += (((((((((arr_4 [i_0]) ? var_5 : (arr_4 [15])))) ? (((arr_7 [i_2]) + 0)) : (((-1 ? -16054 : 4192527420)))))) ? ((-(((arr_6 [i_0] [i_0] [i_1] [i_2]) ? 0 : var_4)))) : ((max(((var_17 ? var_10 : var_12)), 9223372036854775807)))));
                }
            }
        }
    }
    #pragma endscop
}
