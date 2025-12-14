/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0 - 3] = (((-2147483647 - 1) ? -2147483647 : 1955192360536356857));
                arr_6 [i_0] = ((var_2 != (((((arr_4 [i_0] [i_1]) || 15212228296166837276)) ? (var_0 % var_2) : (547062057 << var_7)))));
                var_14 -= ((((65 ^ (min(15212228296166837276, (arr_1 [i_0]))))) | (((~(arr_2 [16]))))));
                arr_7 [6] [1] [i_1] = (((((min(-32757, var_5))) ? ((3912747172 ? 51 : 0)) : (((arr_0 [20] [11]) ? 60686 : 2)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 += (max(((-(min(459010682207849919, -16898)))), ((min((arr_12 [i_2] [i_2] [8] [i_2]), (arr_13 [i_0] [0] [i_0] [i_0] [i_0 - 2] [i_0]))))));
                                var_16 += (((min((arr_12 [i_3 + 2] [i_3] [i_3 + 2] [i_0 - 3]), (arr_12 [i_3 - 1] [i_0 - 2] [i_3 + 2] [i_0 - 2])))) && (~2860550442));
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_1] [i_1] [17] = ((!((max((arr_14 [i_0 - 3] [i_2]), 33923)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, (~1136842423)));
    #pragma endscop
}
