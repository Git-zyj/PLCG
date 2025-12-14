/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((49104 | ((-(var_3 >= var_4)))));
    var_21 = ((max(var_1, var_9)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = (max(var_22, ((((!(1 | var_18)))))));
                arr_5 [i_1] = (!201);
            }
        }
    }
    var_23 = (((((var_11 ? var_6 : var_11))) & (((max(1, 1565291773952660366)) | (max(var_3, 16881452299756891250))))));
    var_24 = var_7;
    #pragma endscop
}
