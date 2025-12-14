/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((+((((arr_1 [i_0]) || (arr_2 [i_0]))))));
        arr_3 [i_0] = ((~((~(arr_0 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 = (max(var_14, ((((((!(arr_10 [i_1 + 1] [i_1 + 2] [9])))) <= (((!(arr_10 [i_1] [i_2 - 3] [i_3])))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((((!var_12) ? ((7013 ? var_5 : 116)) : (arr_15 [i_1 + 1] [i_2 - 4] [7])))))));
                                var_16 = (arr_9 [i_1 + 2] [i_1 - 1] [i_1] [i_1]);
                                arr_17 [i_1] [6] [i_3] [i_5] [i_5] [i_5] = ((((min(29018, 130))) != (((var_8 && -6334644507243242036) ? 40 : 116))));
                                var_17 = (((min((arr_14 [i_2 + 1] [9] [i_2] [i_2] [i_2 - 1] [i_3]), (arr_16 [i_1] [i_1] [i_2] [i_1] [i_2 - 1]))) - (arr_16 [i_2] [11] [i_2 - 4] [i_2] [i_2 - 1])));
                            }
                        }
                    }
                    arr_18 [i_1 - 1] [15] [i_3] [i_3] = min((max(((var_11 & (arr_11 [i_1] [i_2] [i_2] [i_3]))), 1530633040)), (~-1));
                    arr_19 [i_1] [4] [i_1] = ((~(arr_16 [4] [i_1 - 1] [10] [10] [i_2 - 3])));
                    var_18 = (arr_6 [2]);
                }
            }
        }
    }
    #pragma endscop
}
