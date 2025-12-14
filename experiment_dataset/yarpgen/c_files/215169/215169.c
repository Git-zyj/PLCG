/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = (min(((((var_2 ? var_5 : var_9)))), var_9));
    var_13 ^= (min((((((var_8 ? var_3 : var_2)) >= (max(var_2, var_7))))), -30367));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((~((((-71481618 * (arr_1 [4] [10]))) ^ (arr_1 [4] [i_1]))))))));
                arr_4 [i_0] = (max((max((max(47917, var_4)), (((var_4 <= (arr_3 [i_0])))))), (((!((((arr_0 [i_0 - 1]) ? (arr_2 [i_1] [i_0] [i_0 - 1]) : -71481622))))))));
            }
        }
    }
    #pragma endscop
}
