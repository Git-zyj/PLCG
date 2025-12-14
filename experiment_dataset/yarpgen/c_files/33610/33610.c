/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -2;
    var_16 = ((~(max(var_7, (var_8 & var_7)))));
    var_17 += ((var_5 ? ((0 ? -20526 : 96)) : var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (((var_11 ? (arr_0 [i_2 - 2] [i_2 - 1]) : var_7)));
                    var_19 = var_1;
                    var_20 = (max(var_20, (((((((arr_5 [i_1 + 2] [i_1] [i_1 + 1] [i_2]) ? -1 : 65518))) && ((max(245, (arr_5 [i_1 + 2] [1] [i_1 - 1] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
