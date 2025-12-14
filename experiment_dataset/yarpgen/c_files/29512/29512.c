/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = ((!(!18446744073709551610)));
                arr_7 [i_0] [i_0] [i_0] = (((var_5 ? (arr_2 [i_0 - 2]) : var_1)));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_2] [i_2] = ((!(arr_2 [i_0])));
                    arr_11 [i_0 - 1] [5] [i_2] = (max(((((((arr_1 [i_1]) + (-9223372036854775807 - 1)))) ? ((max((arr_1 [i_1]), (arr_1 [i_1])))) : ((99 << (511 - 489))))), var_0));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_14 [i_2] [i_1] [i_3] = (((((!(((1 + (arr_1 [i_0]))))))) + (arr_13 [i_3 + 1] [i_3] [i_3 + 1] [i_2])));
                        arr_15 [i_2] [1] [i_3] = ((((((var_4 - (-9223372036854775807 - 1))) + var_4))) ? ((((arr_13 [i_0] [i_0] [i_0 + 1] [5]) ? ((-29478 ? (arr_12 [i_2] [i_3 - 1] [i_2 + 1] [i_1] [i_2 + 1]) : (arr_9 [i_1] [i_2] [i_2]))) : -42))) : ((+(((arr_0 [i_0]) ? var_3 : (arr_5 [i_1]))))));
                    }
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_18 [i_0 - 2] [1] [i_4] |= (arr_2 [i_4]);
                    var_12 = (((((arr_3 [i_0 - 1] [i_0 - 2]) ? var_8 : (!var_4)))) + (((29477 << (((-68 + 86) - 15))))));
                }
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_25 [i_5] [i_6] [0] [i_6] = (min((-9223372036854775807 - 1), (((1252902739 ? var_7 : -1632945284)))));
                        var_13 = ((-((73 ? (max(var_10, -1119090400)) : (arr_21 [i_1] [i_5 - 1] [i_6])))));
                    }
                    var_14 = -105;
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_28 [i_0] [i_7] [i_7] = ((-(max((arr_1 [i_0]), (arr_12 [i_7] [i_7] [4] [i_7] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_33 [i_7] [i_7] = ((~(((max((arr_16 [i_0 - 2]), (arr_16 [12])))))));
                                var_15 = (1 + ((-(arr_9 [i_0 - 1] [i_0 - 2] [i_1]))));
                                arr_34 [i_0] [2] [i_7] [i_8] [i_8 + 1] = (var_3 + ((((max((arr_1 [11]), (arr_5 [11])))) ? 1512216450 : -505)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            {
                                arr_40 [i_0] [i_10] [i_7] = (((arr_4 [i_11 + 1] [i_11 + 1] [i_0 + 1]) ? (arr_21 [i_0 - 1] [i_0] [i_11 + 4]) : 4294967295));
                                arr_41 [i_7] [i_1] [i_7] [1] [i_1] [1] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (var_7 + 1);
    var_17 |= ((-((5320887098283223764 << (((13905 + var_10) - 14012))))));
    var_18 = var_1;
    var_19 = ((((var_1 ? ((max(-29458, 147409680))) : ((1961225091314165876 << (150 - 134))))) + (29457 + var_10)));
    #pragma endscop
}
