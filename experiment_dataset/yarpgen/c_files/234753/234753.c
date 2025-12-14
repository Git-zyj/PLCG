/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((-(~0))), var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = ((-((var_11 ? (158 == 178) : ((~(arr_5 [i_1])))))));
                var_17 = ((var_1 << (((((~93) + 109)) - 15))));
                arr_6 [i_1] [i_1] [i_1] = -8359378779638002714;
                var_18 = (max((min(var_2, (arr_5 [i_0]))), ((max(163, ((var_14 ? (arr_5 [i_0]) : -170)))))));
            }
        }
    }
    var_19 = var_8;
    var_20 = var_4;
    #pragma endscop
}
