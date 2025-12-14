/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = var_6;
                arr_6 [i_0 - 1] = (((arr_0 [0]) ? (~4294967295) : (min((((((arr_2 [i_0 + 2]) + 9223372036854775807)) << (((arr_0 [i_0 + 1]) - 7683)))), ((var_8 ? (arr_3 [i_0]) : 1))))));
                arr_7 [2] [2] [2] = ((-1069 ? (((((arr_4 [4]) ? 1 : 9410913613483032607)) ^ (arr_3 [i_0]))) : var_5));
            }
        }
    }
    var_14 = (min(((var_7 ? var_3 : 0)), ((min((!-19612), (!1))))));
    #pragma endscop
}
