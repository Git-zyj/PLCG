/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((((var_8 ^ (var_6 + var_8)))) ? ((((var_3 ? -2108904663 : var_1)))) : (var_2 == var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max(((~(arr_4 [i_0]))), ((((((-117 || (arr_0 [i_0])))) > (arr_0 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = (!-25986);
                                var_16 = (((((!(arr_3 [i_0] [i_1 + 1])))) < (arr_3 [i_0] [i_1 + 1])));
                                var_17 = var_1;
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4] [i_2] = (1 < (((min((arr_1 [i_0]), 0)))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [3] [i_0] [i_4] = (max((((arr_1 [i_0]) | ((211 ? (arr_0 [i_0]) : (arr_10 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] [i_2]))))), (arr_3 [i_1 + 1] [i_1 + 1])));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1 + 1] [i_0] &= ((((((min((arr_7 [i_0] [i_0] [i_1 + 1]), 31190))) && 1)) ? (max((((!(arr_8 [i_0] [i_0] [i_0] [i_0])))), (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : ((min((arr_12 [10] [10] [i_0] [i_0]), (1 * var_1))))));
                var_18 = (max(var_4, (max((max(1624286500915737267, 16822457572793814366)), (~var_8)))));
            }
        }
    }
    #pragma endscop
}
