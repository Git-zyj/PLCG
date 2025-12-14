/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 ^= ((((min((arr_1 [i_1] [i_0]), (arr_1 [i_1] [8])))) ? ((~(arr_1 [i_1] [i_0]))) : (((arr_1 [i_1] [1]) ^ (arr_1 [i_0] [i_1])))));
                var_14 ^= var_4;
            }
        }
    }
    var_15 = ((((max(var_4, (min(var_4, var_11))))) ? var_7 : ((~(var_7 - var_9)))));
    var_16 = var_5;
    var_17 *= (!var_7);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                var_18 = ((((!((((arr_8 [10] [i_2] [i_2]) ? (arr_5 [i_2]) : var_8))))) ? (min((arr_5 [i_2]), var_3)) : ((max((((!(arr_6 [i_2] [i_3])))), 1073195805)))));
                arr_10 [i_3] [10] = 0;
            }
        }
    }
    #pragma endscop
}
