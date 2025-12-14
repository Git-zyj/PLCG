/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((-(((~var_10) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0]) : var_8))));
                    var_11 ^= (((((arr_0 [i_0 + 1]) ? 7043945144815091025 : (arr_0 [i_0 - 2]))) >> ((((arr_0 [i_0 - 2]) <= var_8)))));
                    var_12 = ((((max((((var_8 ? var_3 : 9223372036854775790))), ((var_1 ? 58 : (arr_6 [i_2] [12] [i_0 - 1] [6])))))) ? ((((((arr_2 [i_0] [i_1] [i_0]) == 1011483935)) ? (var_6 && var_4) : 419379458088622545))) : ((var_6 ? (arr_6 [i_0] [i_1] [i_2] [i_0 - 1]) : var_2))));
                }
            }
        }
    }
    var_13 = (max(var_13, (((277076930199552 ? var_5 : var_3)))));
    #pragma endscop
}
