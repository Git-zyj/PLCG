/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = 52;
    var_13 = ((((-(min(717018597615216469, var_1)))) / ((var_5 ? (min(var_3, 65514)) : -32745))));
    var_14 *= (min((min((var_1 != var_3), 2047)), var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 *= ((!(((arr_1 [i_1] [i_0]) <= 16415))));
                arr_4 [14] = var_9;
                arr_5 [12] [i_1] |= ((~(((((arr_3 [i_0]) ? var_5 : 17366)) * (50 == var_6)))));
                var_16 &= (((((~(arr_0 [i_0])))) >= -var_3));
            }
        }
    }
    #pragma endscop
}
