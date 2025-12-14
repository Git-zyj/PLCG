/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_5 ^ (-1 | var_1)))) ^ ((((var_18 ? var_1 : var_9)) & var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (min(var_1, (max(var_17, (arr_0 [i_0] [i_0])))));
                    arr_10 [i_2] [i_2] [8] [i_0] = ((-(max(((-1 ? 2289873155968904832 : var_0)), -12))));
                    arr_11 [i_0] = (min(-var_2, (min((arr_8 [i_1] [i_1] [i_2 - 2] [i_2 + 1]), (arr_8 [i_1] [16] [i_2 + 1] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
