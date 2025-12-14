/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] = ((!((((min(-18758, -24))) != (arr_3 [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, ((((arr_0 [i_2 - 1] [i_1]) ? ((((!(((arr_10 [i_0] [i_1] [i_2] [19] [i_4] [11]) < (arr_3 [i_0]))))))) : (max((arr_12 [i_0] [i_3 + 1] [i_1] [i_2 + 1] [i_0 + 2] [i_4] [i_1]), (arr_9 [i_3] [i_3 - 1] [4] [i_2 + 2]))))))));
                                var_12 -= ((((~(arr_12 [i_0 + 2] [i_4] [i_3 - 3] [i_0 + 2] [i_0 - 1] [i_3 - 2] [i_3 - 1]))) == (((var_8 >= ((var_2 / (arr_0 [i_3] [6]))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_2] = (max((((arr_8 [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2]))), ((min(2011058556, var_0)))));
                                var_13 = 11114381440681279275;
                                arr_15 [i_0] [i_0] [i_2] = ((((((((7332362633028272335 ^ (arr_9 [i_2] [i_2] [i_2] [i_3 - 2])))) ? ((32767 ? var_5 : var_5)) : 7332362633028272340))) ? ((((32767 && 0) && 32767))) : (min(-294509329, (arr_13 [i_0 + 2] [i_1] [i_2] [i_3] [i_1] [17])))));
                            }
                        }
                    }
                    var_14 = (max((((arr_12 [i_2 + 1] [i_1] [i_2 + 1] [i_0 + 2] [i_2] [i_1] [i_0 + 2]) ? (arr_12 [i_2 + 1] [i_1] [1] [i_2 + 1] [i_2 + 1] [21] [i_0 + 2]) : (arr_12 [i_2 + 1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0 + 2]))), (((arr_12 [i_2 + 1] [i_2] [i_2 + 1] [i_0 - 1] [i_2 - 1] [i_2 + 1] [i_0 + 2]) ? 1 : 0))));
                }
            }
        }
    }
    var_15 = var_6;
    var_16 += ((!(((~((1 ? var_3 : var_7)))))));
    #pragma endscop
}
