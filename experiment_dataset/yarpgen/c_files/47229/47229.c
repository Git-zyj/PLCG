/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((var_4 * var_8) % var_3));
                arr_6 [6] = ((max(var_9, 3802037359529539620)));
            }
        }
    }
    var_14 = var_1;
    var_15 = 4294967295;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_12 [i_3] = (arr_8 [i_2]);
                arr_13 [i_3] = (((((max(61122, var_1)))) ? ((var_4 - (max(20089, (arr_10 [i_3] [i_3] [i_2]))))) : var_3));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_16 = (max(2617845399, 129));
                var_17 = ((-((max(2409, (min(-20089, 255)))))));
                var_18 = (((((20089 ? (arr_14 [i_4]) : 2951))) ? ((var_12 ? (((min(0, (arr_2 [i_4]))))) : ((-20089 ? var_0 : var_7)))) : var_10));
            }
        }
    }
    #pragma endscop
}
