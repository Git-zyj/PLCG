/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((!((max(-21, var_10)))));
                arr_4 [i_1] = (max(((((min(-1625033257, var_6))) ? ((1 ? 222 : var_10)) : ((var_8 ? var_5 : var_9)))), (((!(((1655960111 ? var_3 : 15))))))));
                arr_5 [13] [i_0] [i_0] = ((var_7 ? (((9659 <= 18446744073709551600) ? (arr_0 [i_0] [i_0]) : (((32767 ? 2016 : -22))))) : (min((arr_2 [i_0]), ((~(arr_0 [i_1] [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (((7059643502626580891 <= 309548051) ? (((arr_8 [i_0] [i_3 - 1] [1]) ? (arr_8 [i_0] [i_3 + 1] [i_4]) : 11387100571082970724)) : ((((((arr_6 [2] [2] [i_2] [11]) <= (arr_11 [i_1] [i_2] [i_2] [i_3]))) ? ((min(var_9, -27057))) : ((2019 ? 13127 : 20)))))));
                                arr_14 [i_0] [i_0] [i_3] = (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3 + 1]);
                            }
                        }
                    }
                }
                var_16 = (var_10 ? (((((2010 ? var_10 : var_1))) ? var_2 : ((max(var_10, var_9))))) : (min((arr_9 [1] [i_1] [9] [i_1] [i_1]), (var_7 + 32767))));
            }
        }
    }
    var_17 = (min(-var_9, (max((max(var_12, var_6)), (min(var_11, var_11))))));
    var_18 = ((((max(var_0, (min(var_9, var_5))))) && (var_6 | 2163702390)));
    var_19 = (min(var_19, ((~(max((max(var_0, var_12)), (min(18416829387813905588, var_5))))))));
    #pragma endscop
}
