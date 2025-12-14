/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(var_6, ((var_8 & ((var_0 ? var_9 : var_9)))));
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = ((!(((~(min(-541074523, (arr_2 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_0] [9] = ((((-(arr_3 [9] [i_0] [i_1 - 1]))) != (((arr_3 [1] [i_0] [i_1 - 1]) ? (arr_3 [11] [i_0] [i_1 - 2]) : (arr_5 [i_0] [i_0 + 4])))));
                arr_7 [i_0 + 4] [i_0] [14] = (arr_2 [i_0] [i_1 + 1]);
            }
        }
    }
    #pragma endscop
}
