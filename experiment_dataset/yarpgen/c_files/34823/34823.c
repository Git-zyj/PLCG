/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((~var_14) | ((95 ? (((var_9 ? var_9 : 29401))) : (0 + 181820749)))));
                arr_7 [i_0] [i_1] = var_6;
                var_16 = (min(var_16, (((!(arr_3 [i_1 + 3] [i_1]))))));
                arr_8 [i_0] [i_1] [1] = (min(34906, ((var_7 ? ((0 ? var_2 : (arr_0 [i_0]))) : ((((arr_3 [i_0] [i_1]) ? 94 : var_3)))))));
            }
        }
    }
    var_17 = ((((min(var_1, (min(0, var_9))))) ? ((var_3 ? var_11 : var_10)) : (((((95 ? var_8 : 1)) + var_0)))));
    var_18 ^= ((((((!var_0) ? ((min(var_7, var_9))) : 56966))) ? (((var_1 ? ((min(var_9, var_11))) : var_13))) : ((var_13 ? (min(1, var_10)) : (((min(var_7, var_6))))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 -= ((-(((((~(arr_0 [i_4])))) ? var_13 : (min(var_1, 0))))));
                    arr_16 [i_2] [i_2] = var_5;
                }
            }
        }
    }
    #pragma endscop
}
