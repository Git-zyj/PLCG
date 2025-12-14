/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((var_11 ? ((max(var_3, var_4))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = -32;
                arr_4 [i_0] = -124;
                var_21 = (max((((53206 != (arr_0 [i_0 + 2] [i_0])))), ((((var_16 ? var_15 : 23)) * 0))));
                var_22 = (((((13858217210812589870 >> (((arr_2 [i_1 + 3]) ? 58 : -2564647028543386260))))) ? 1 : ((-87 ? (arr_0 [1] [i_1 + 3]) : (arr_0 [i_0 - 2] [i_0 - 2])))));
            }
        }
    }
    var_23 = 1;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                var_24 |= (arr_8 [i_2 + 2] [9] [i_3]);
                var_25 = (((arr_6 [7]) ? ((-7481236696707074516 ? (max((arr_8 [i_2] [i_2] [21]), 1491402350)) : -6345586399118843749)) : ((21911 ? ((((var_12 + 2147483647) >> (((arr_6 [i_3]) + 123))))) : (max(32765, (arr_9 [i_2] [i_2])))))));
                var_26 &= ((-33 / 4165527218083666435) ? (max((arr_9 [6] [i_3]), ((min(3247656336, -40))))) : (arr_7 [i_2 + 2] [i_3 + 2] [i_3 + 2]));
            }
        }
    }
    #pragma endscop
}
