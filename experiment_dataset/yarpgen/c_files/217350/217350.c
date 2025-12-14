/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_1 ? var_9 : ((max(1439, var_11))))));
    var_15 = (min(((max((!var_11), (-1232443795 > var_4)))), (((14992663975466119394 != 1435) + var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((+(((arr_5 [i_1 - 3]) >> (((-127 - 1) + 142))))));
                var_17 = (((((((min(33, 1))) ? (((min((arr_2 [i_1 - 4]), (arr_2 [i_0]))))) : (max(-1953598126, var_4))))) ? ((max(var_8, var_13))) : (((~(((arr_3 [i_0]) ? 1 : (arr_5 [i_0]))))))));
                arr_6 [11] = (arr_2 [i_0]);
                var_18 = (((((1 ? var_5 : 26005))) && (((112 / 255) >= 112))));
                var_19 = (min((~-1798289834471305648), ((max(1, -17930)))));
            }
        }
    }
    var_20 = (((!1) >= (max(((var_6 ? var_12 : var_12)), var_6))));
    var_21 = ((((((1 && var_12) ? var_13 : ((53 ? var_0 : 1))))) ? (((((var_13 ? var_6 : var_13)) > ((var_2 ? -17919 : var_9))))) : ((((min(-20538, 14906777763398988820))) ? ((max(83, var_5))) : (16569422359587453086 || var_4)))));
    #pragma endscop
}
