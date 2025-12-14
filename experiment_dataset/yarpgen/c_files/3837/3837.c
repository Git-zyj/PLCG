/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_12 = (((((arr_0 [i_0]) || var_11)) ? 0 : var_6));
        var_13 = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_11)), ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                var_14 *= (arr_4 [i_2]);
                var_15 |= (min((arr_4 [i_1]), var_3));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_16 = (max(var_16, var_5));
                arr_14 [i_3] = var_2;
                arr_15 [i_3] [8] [10] |= ((~(((!(arr_11 [1]))))));
                var_17 = (max(var_17, (((((min(-var_5, ((var_1 ? (arr_12 [i_4] [i_4] [i_3]) : (arr_3 [i_4])))))) ? var_2 : (((((arr_12 [i_3 + 2] [i_3] [i_3]) && (arr_6 [6]))))))))));
                var_18 = (((arr_9 [i_3]) ? ((-(((arr_1 [4] [i_4]) ? 4503599618981888 : var_8)))) : ((((32767 ? var_0 : var_5))))));
            }
        }
    }
    #pragma endscop
}
