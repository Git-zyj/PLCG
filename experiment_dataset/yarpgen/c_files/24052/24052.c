/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_2;
    var_19 &= (max(var_6, 1));
    var_20 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] |= (((min((arr_3 [i_1 + 1]), var_9)) - (arr_3 [i_2])));
                    arr_9 [i_0] [i_1 + 1] [i_1] [i_0] = ((((max((arr_3 [i_0]), ((var_6 ? var_12 : (arr_1 [i_1])))))) ? ((((arr_0 [i_0] [i_0]) ? 3499490016 : (arr_3 [16])))) : (46674 ^ 9223372036854775807)));
                }
            }
        }
    }
    #pragma endscop
}
