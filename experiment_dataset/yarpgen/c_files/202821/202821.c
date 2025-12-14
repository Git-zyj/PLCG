/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_11 ? ((var_7 ? (var_4 / var_13) : (min(0, 18446744073709551615)))) : -0)))));
    var_16 = var_11;
    var_17 = ((((((18446744073709551615 / var_0) >> (var_2 - 8742845803521525292)))) ? (((var_10 - var_9) + var_5)) : -605740602));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max((((arr_3 [i_0]) ? var_9 : var_11)), (((!(arr_2 [10]))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 ^= (arr_0 [i_0]);
                    var_19 = arr_4 [i_0 + 2];
                }
            }
        }
    }
    #pragma endscop
}
