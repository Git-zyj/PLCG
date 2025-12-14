/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-26629 ? (max(((var_4 ? 0 : 0)), ((0 ? 1 : 11398594471859951190)))) : (-1211974995 + var_11)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] = 9223372036854775807;
                            arr_9 [i_1] = ((((((arr_3 [i_1] [i_1]) ? ((min(var_7, 8704))) : ((-8704 ? (arr_2 [i_1 - 1]) : 1))))) ? (min(17777, 4120122237)) : (arr_4 [i_2 + 1] [1])));
                        }
                    }
                }
                var_15 = (arr_0 [i_1]);
                var_16 |= ((arr_2 [i_0]) ^ (arr_2 [i_0]));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_17 = (((-31317 < (arr_0 [i_1 - 1]))));
                            var_18 = (max(((2139095040 ? (arr_13 [i_1] [i_4 + 1] [i_4] [i_5]) : -1211974998)), (((min((arr_1 [i_0]), (arr_1 [i_5 - 1])))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_7 != (max(((109 ? -10288 : var_11)), var_8))));
    var_20 = var_7;
    #pragma endscop
}
