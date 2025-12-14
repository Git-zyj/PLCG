/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((109 ? ((var_2 ? (min(var_8, var_2)) : var_2)) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = var_1;
                arr_7 [i_1] = ((-(min((((var_3 ? 3 : (arr_4 [i_0] [i_0] [i_0])))), (min((arr_1 [i_0]), (arr_0 [i_0])))))));
                var_12 = (min(((-(arr_4 [i_1 + 2] [i_1 + 2] [i_1 - 1]))), (!var_2)));
                var_13 = 7577420610048284810;
            }
        }
    }
    #pragma endscop
}
