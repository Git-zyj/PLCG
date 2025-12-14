/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2] [i_1 - 1] = (-((-(arr_9 [i_1 + 3] [i_1 - 2] [i_1 + 1] [i_1 + 2]))));
                    var_10 = ((((((arr_6 [i_1 - 3] [i_1 - 2]) ? var_6 : (!var_0)))) ? ((((((arr_5 [i_1]) / 3858346567270430340))) ? ((((arr_9 [i_2] [i_1] [i_1] [3]) > (arr_3 [i_1])))) : (!var_1))) : (((((var_9 % (arr_9 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 - 2]))) > var_1)))));
                }
            }
        }
    }
    var_11 = ((min(var_2, var_5)) ^ ((min(((-8192 ? var_6 : var_1)), ((var_9 ? var_7 : var_0))))));
    #pragma endscop
}
