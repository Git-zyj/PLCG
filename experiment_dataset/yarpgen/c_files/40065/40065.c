/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((((!var_6) < var_12)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) ? ((max(((var_5 ? 64 : 64)), 153))) : -8589380342631251266));
        var_15 ^= (((((~((max(var_8, 46393)))))) ? ((~(arr_0 [2] [2]))) : ((((arr_0 [i_0] [8]) ? var_2 : var_7)))));
        arr_4 [i_0] [i_0] = (((+(((arr_1 [i_0]) ? 28063 : (arr_1 [i_0]))))) != ((-81 & ((102 ? var_0 : var_2)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (-9223372036854775807 - 1)));
        arr_7 [i_1] [i_1] = (~var_7);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] = 42117;
                        arr_17 [i_2] = (18128400446991781750 - var_7);
                        arr_18 [i_2] [i_4 - 1] = ((6699 ? 189 : 361664809));
                        arr_19 [i_1] [i_1] [i_2] [i_4 - 3] = var_8;
                    }
                }
            }
        }
    }
    #pragma endscop
}
