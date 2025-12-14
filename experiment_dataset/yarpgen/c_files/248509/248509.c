/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= -124;
    var_12 = ((((((~-110) ? (var_5 * 29) : ((0 ? 18 : var_6))))) ? ((var_4 - (var_9 ^ var_1))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_3 [i_1 + 1] [i_0] [i_0]);
                arr_6 [i_1 - 1] |= ((!(arr_0 [i_0])));
                arr_7 [i_0] [i_1 - 1] [i_1] = ((((((arr_2 [i_1 - 2] [i_1 + 1]) | var_0))) ? (((arr_2 [i_1 + 1] [i_1 - 2]) ? var_9 : var_7)) : ((((arr_2 [i_1 - 1] [i_1 - 2]) ? var_10 : (arr_2 [i_1 - 2] [i_1 + 1]))))));
            }
        }
    }
    var_13 = var_5;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_2 [i_2] [13]) && (((13701 ? 83 : var_1)))));
        arr_11 [i_2] |= ((((((arr_2 [i_2] [i_2]) - ((1 ? (arr_4 [i_2] [i_2] [i_2]) : var_4))))) ? (((arr_2 [i_2] [i_2]) ? (((arr_8 [i_2]) ? (arr_3 [i_2] [i_2] [i_2]) : -23)) : ((var_3 ? var_5 : -1428)))) : -1410));
        arr_12 [i_2] [i_2] |= ((((((arr_0 [i_2]) ? var_6 : 31947))) ? (max((arr_8 [i_2]), (arr_0 [i_2]))) : (((((arr_8 [i_2]) && (arr_0 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_15 [i_3] = (arr_2 [i_3] [3]);
        arr_16 [i_3] = ((((((((arr_0 [i_3]) ? (arr_0 [i_3]) : -32766))) ? var_9 : (-8710286671716034521 & 1410))) <= ((((!var_9) ? ((var_2 ? var_5 : (arr_14 [i_3]))) : (arr_3 [i_3] [i_3] [i_3]))))));
    }
    #pragma endscop
}
