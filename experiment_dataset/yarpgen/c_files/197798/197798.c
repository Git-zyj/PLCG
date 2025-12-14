/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_14 ? var_7 : var_2))) ? ((var_14 ? var_3 : var_14)) : ((var_13 ? var_0 : var_3))))) ? ((var_0 | (var_0 & var_6))) : ((min(((24370 >> (var_12 - 26272))), (var_16 || var_12))))));
    var_20 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_0 [i_0] [i_0]) && (arr_0 [i_0] [i_0]))) ? (arr_0 [i_0] [i_0]) : ((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (((((var_3 >> (((arr_6 [i_0] [i_1] [i_2 + 2]) + 252370577))))) ? ((((arr_4 [i_0]) && (arr_3 [i_2])))) : var_18));
                    var_22 = (min(var_22, ((((arr_7 [i_2 - 2] [i_2 - 1] [i_2 - 2]) & ((~(arr_5 [i_2]))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2 + 3] = ((!(arr_3 [i_0])));
                    var_23 = (min(var_23, (((!(255 != 0))))));
                }
            }
        }
    }
    #pragma endscop
}
