/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((249 - var_1) / var_1)) + ((var_5 ? 22999 : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] = max(((min(var_6, 0))), ((max(32131, (arr_1 [i_0] [i_0])))));
                var_13 += ((((min(65535, ((max(var_9, 34)))))) ? ((min(var_8, var_10))) : 255));
                var_14 = max(((((!var_9) ? (0 == var_10) : (arr_3 [i_0])))), (((arr_0 [i_1]) / ((227 ? (arr_5 [i_0] [i_0] [i_0]) : var_9)))));
            }
        }
    }
    #pragma endscop
}
