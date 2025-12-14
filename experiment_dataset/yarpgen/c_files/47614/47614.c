/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((((-81 != 2) ? (min((arr_2 [i_0]), (((0 >> (var_5 + 5473873971812757937)))))) : ((((!(33488896 && 361188128))))))))));
                    var_22 &= (min((arr_1 [i_0] [i_0]), (arr_7 [i_2 + 1] [i_2] [i_2 + 1] [i_2])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_23 = (((!(arr_11 [i_4] [i_4] [i_4] [i_4 + 1]))));
                    arr_13 [i_3] = -6183;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_3] [i_4] [i_4] [i_6] = ((((((min((-9223372036854775807 - 1), 478903384)) / ((~(arr_15 [i_3] [i_5] [i_6])))))) ? ((-8348891047036257716 ? (arr_4 [i_0] [i_4]) : (arr_15 [i_0] [i_0] [i_0]))) : (arr_3 [i_0] [i_4 - 1])));
                                var_24 = (min(var_24, ((((((min((arr_16 [i_3] [i_4 - 1] [i_4] [i_4 - 1] [i_6]), (arr_16 [i_0] [i_4 + 1] [0] [i_5] [i_6]))))) != (arr_14 [i_0] [i_3] [i_4] [i_5]))))));
                            }
                        }
                    }
                    var_25 ^= (((((-(var_13 * 255)))) ? ((((arr_8 [i_4 - 1]) / (arr_1 [i_4] [i_0])))) : (arr_12 [i_4 - 1] [i_4] [i_4 + 1])));
                    var_26 = (((arr_9 [i_0] [i_3] [i_4 - 1]) != (max(7070, (arr_9 [i_0] [i_0] [i_4 + 1])))));
                }
            }
        }
        var_27 = (min(var_27, ((((arr_15 [i_0] [i_0] [i_0]) && ((min(((((arr_4 [i_0] [1]) != 1846582552))), (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_9 [i_0] [i_0] [i_0])))))))))));
        arr_21 [i_0] = ((((14408 && (arr_10 [6] [6]))) && (arr_10 [2] [i_0])));
        var_28 = max(65524, (((arr_3 [i_0] [i_0]) / (arr_3 [i_0] [i_0]))));
    }
    #pragma endscop
}
