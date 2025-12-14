/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_3 ? var_8 : var_7)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (arr_2 [4] [3]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_8 [0] [i_1 - 1] [i_2 + 1] |= (((~var_8) ? (arr_3 [i_1 - 1] [i_2 + 2]) : (arr_6 [i_1 - 1])));
                    var_18 |= (((((-(arr_3 [i_1] [i_1])))) ? (((arr_4 [i_1]) + (arr_5 [i_1]))) : 0));
                    var_19 = (((arr_2 [i_1] [i_0]) ? var_9 : var_5));
                }
            }
        }
    }
    #pragma endscop
}
