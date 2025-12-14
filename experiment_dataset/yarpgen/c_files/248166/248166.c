/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(169, 0));
    var_20 = var_1;
    var_21 = (min(var_1, var_10));
    var_22 = ((-(var_11 ^ var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_23 = (((1 ? (arr_5 [i_1]) : (arr_5 [i_1]))) > ((((!(arr_5 [i_1]))))));
                    arr_7 [i_0] [4] [i_2] = (min(-4386002371255602542, ((((((~(arr_3 [2] [19])))) ? ((var_2 ? var_7 : var_11)) : var_16)))));
                }
            }
        }
    }
    #pragma endscop
}
