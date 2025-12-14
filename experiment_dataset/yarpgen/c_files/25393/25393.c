/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-1242194912 << (var_4 + 75)));
    var_15 &= min((var_10 < var_0), var_13);
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_3;
                arr_6 [i_1] [9] = min((((var_9 ? ((min(var_12, var_5))) : (max(1657619618, 233))))), ((30 - ((var_13 ? var_13 : var_13)))));
                arr_7 [i_1] [i_0] &= ((((((arr_0 [i_0] [i_1]) - (arr_0 [6] [i_1])))) + (min((arr_3 [i_1 - 1] [i_1 - 3] [i_1 - 4]), (arr_4 [i_1 - 4] [i_1 - 4])))));
            }
        }
    }
    #pragma endscop
}
