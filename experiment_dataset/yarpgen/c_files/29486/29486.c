/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_17 = (min((((arr_5 [i_3] [i_2 - 2] [i_1 - 1]) ? var_15 : (arr_5 [i_3] [i_2 + 2] [i_0]))), (((-((min(var_5, var_11))))))));
                        arr_9 [i_0] [i_0] &= (min(((var_3 ? 2287828610704211968 : (1 == 1))), ((1 ? 12733057579727311389 : 1))));
                    }
                    var_18 = ((+(min((4294967295 & var_9), var_16))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            {
                var_19 = (min(((-var_10 ? (arr_10 [i_4]) : 13743134628854581436)), -2025895531));
                var_20 = ((+((((max((arr_11 [i_4] [i_4]), 13615669230000188390))) ? (min(1, 1944583954512083201)) : var_4))));
                arr_14 [i_4] [i_4] = var_4;
                var_21 = (((((~1) + 2147483647)) >> (((min(1, (arr_11 [i_4] [i_5])))))));
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
