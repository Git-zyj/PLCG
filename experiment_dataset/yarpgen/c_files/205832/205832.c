/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((-(~var_0)))));
    var_15 = (((((max(var_3, 127))) ? (((min(var_11, 38)))) : ((var_13 ? var_6 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min((((-(((arr_1 [i_0] [i_1]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_3 [i_0])))))), (arr_4 [i_0] [i_1] [i_0])));
                var_16 = (((arr_1 [10] [10]) * (arr_1 [i_1] [i_0])));
                var_17 = (min(var_17, ((-2273955055000929374 ? -35 : 1))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2 - 2] = ((18446744073709551592 ? ((((arr_8 [i_2 + 1]) ? var_1 : (arr_6 [13])))) : ((-18203 ? ((max((arr_12 [i_2] [i_2]), (arr_7 [i_3])))) : (arr_8 [i_3])))));
                    var_18 *= ((var_4 >> (((arr_10 [i_4]) - 141))));
                    var_19 = var_11;
                }
            }
        }
    }
    var_20 = (max(var_20, ((((((min(var_3, var_11))) + 2147483647)) >> (((max(var_5, ((max(var_13, var_3))))) - 10322))))));
    #pragma endscop
}
