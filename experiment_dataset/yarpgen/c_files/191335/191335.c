/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (((8042890820136426326 << (2559227237 - 2559227237))) < -4190208);
                var_13 = ((((-8042890820136426326 ? 1651947721156927931 : 13)) != (((((arr_5 [i_0]) == ((var_8 ? 8042890820136426319 : -31))))))));
            }
        }
    }
    var_14 = (max(var_14, ((max(var_3, (((((var_9 ? var_2 : var_11))) ? (max(var_11, var_4)) : var_3)))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_15 = ((var_4 ? (arr_5 [i_2]) : (arr_6 [i_2] [i_2])));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_16 = (max(var_16, ((((var_5 || var_1) ? (arr_6 [9] [14]) : ((47812 ? 0 : 0)))))));
            var_17 = var_5;
        }
        var_18 = (((((var_5 >> (((arr_0 [i_2] [i_2]) + 6))))) ? var_9 : var_11));
    }
    #pragma endscop
}
