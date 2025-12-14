/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_12 ? (max((var_6 || var_0), ((-31 ? var_1 : -29)))) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = (((((var_7 - (arr_3 [i_0] [i_0])))) ? 255 : ((var_9 ? (arr_1 [i_2] [i_2 - 2]) : var_11))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((((((((var_7 ? 2070153128 : (arr_3 [i_0] [2])))) ? (arr_1 [i_1] [i_2 + 1]) : (((~(arr_5 [i_0] [i_1] [i_1] [i_2]))))))) ? (max((((arr_3 [i_0] [i_0]) ? var_3 : var_11)), ((var_0 ? var_11 : 110)))) : ((((var_10 ? var_8 : var_11)) - ((max(var_3, (arr_0 [i_0] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
