/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 ^= 243;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (arr_2 [i_1]);
                var_15 = ((var_4 ? ((max(var_0, (~244)))) : ((var_8 ? var_2 : (min((arr_2 [i_0]), (arr_3 [i_1])))))));
                var_16 = ((((var_2 ^ (arr_3 [i_1]))) != (((max((arr_2 [1]), (arr_4 [i_1] [i_1] [i_1])))))));
            }
        }
    }
    var_17 = (((var_6 ? -874611287 : ((255 ? 227 : 96)))));
    var_18 &= ((((var_2 ? -var_0 : var_7)) + ((((max(var_7, var_3))) - ((max(var_4, var_7)))))));
    #pragma endscop
}
