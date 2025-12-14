/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_3 [i_0]);
                var_15 = (arr_2 [8]);
                var_16 *= (arr_4 [0]);
                var_17 = (arr_3 [i_0 + 2]);
                arr_6 [i_0] [i_0] = ((min((-1939074744030078496 & -1939074744030078496), ((max((arr_2 [i_0 + 2]), 241))))));
            }
        }
    }
    var_18 = (((var_14 + 9223372036854775807) >> (min(((var_4 ? var_0 : var_2)), (var_6 & var_14)))));
    var_19 = ((var_5 || ((max((var_0 ^ -1939074744030078496), (var_5 > var_4))))));
    var_20 = var_10;
    #pragma endscop
}
