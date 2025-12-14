/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 % (((((var_7 ? 3542816157216484346 : var_7))) ? var_9 : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = ((((max((arr_4 [i_0] [i_0]), (arr_5 [i_0 + 1])))) ? (((arr_4 [i_0] [i_1 + 1]) ? 14903927916493067265 : 15492797342760236820)) : ((((arr_4 [i_1 - 1] [i_0 + 1]) ? ((min(8588137, var_6))) : (((arr_3 [i_0 - 2]) ? (-127 - 1) : var_3)))))));
                var_12 = var_3;
            }
        }
    }
    var_13 = var_0;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_15 &= ((~(arr_12 [i_2 + 1] [12] [i_3])));
                arr_14 [i_2] [i_3] [i_3] = ((var_0 ? (arr_11 [i_2 + 1] [i_3] [i_3]) : (arr_9 [i_3])));
            }
        }
    }
    #pragma endscop
}
