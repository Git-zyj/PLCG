/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = ((((min((569271074 - var_2), var_18))) ? var_0 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [1] [i_0] = (((max(10445029999721858895, 616516162))));
                var_21 = ((~((~(arr_2 [i_0])))));
                arr_5 [i_0] [i_0] = ((((((!(arr_1 [i_0] [i_0]))))) >= (((var_12 - var_16) | (arr_1 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
