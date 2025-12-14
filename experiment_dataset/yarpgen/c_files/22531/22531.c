/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_11 &= (((arr_4 [i_0] [i_1 + 1]) & (arr_4 [i_1] [i_1 + 1])));
            var_12 = (max(var_12, (((1152921504606846975 ? 32767 : -32767)))));
            arr_5 [14] [i_1] = (((arr_3 [i_0] [i_0] [i_1 + 1]) | var_5));
        }
        var_13 = (min(var_13, var_10));
        var_14 = (max(var_14, ((((arr_2 [i_0] [i_0] [4]) || 32767)))));
        arr_6 [i_0] [16] = (var_2 + var_7);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {
                var_15 *= (var_8 >= var_5);
                var_16 = (max(var_16, (((var_7 ? (((arr_4 [i_2] [i_3 + 2]) ? ((32767 ? (arr_2 [i_2] [i_2] [i_3]) : 32746)) : (arr_9 [i_3 - 1]))) : ((31 ? 4294967295 : -1)))))));
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
