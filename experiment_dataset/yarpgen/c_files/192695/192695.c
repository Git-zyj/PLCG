/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0 - 3] [i_0] [i_1 - 1] = arr_1 [i_0] [i_1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] = (arr_2 [i_1 - 1] [i_4 - 1]);
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0] = ((+((((((arr_9 [i_0] [i_2] [i_2] [i_1 - 1] [i_0]) ? (arr_12 [i_3] [i_0]) : var_8)) <= (arr_6 [i_1 - 1] [i_2] [i_1 - 1]))))));
                                var_10 = (max(var_3, var_7));
                            }

                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_11 ^= (arr_7 [i_2]);
                                var_12 = (max(var_12, ((((((((((arr_6 [i_0] [i_1] [i_2]) ? (arr_6 [i_2] [i_3] [i_5]) : var_2))) && (arr_3 [i_0] [i_1] [i_0])))) + (min((arr_6 [i_0] [i_1] [i_2]), ((((arr_2 [i_0] [i_0]) <= (arr_8 [i_0 - 3] [i_1] [i_2] [i_3])))))))))));
                                var_13 = (arr_9 [i_0] [i_1] [i_0] [i_2] [i_5]);
                            }
                            arr_17 [i_0 + 1] [i_3] [i_2] = (min((((~(arr_15 [i_0] [i_0] [i_1 - 1] [i_2] [i_3])))), (min(((var_5 ? var_4 : (arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_0 - 4]))), 1993629851))));
                            arr_18 [i_0 - 4] |= ((((-((min(145, -19739))))) - (var_4 - var_9)));
                            var_14 = (((((var_6 ? var_8 : (arr_2 [i_0] [i_3])))) ? 5498650105520186089 : ((((var_2 || 1993629863) ? (max((arr_3 [i_0 - 2] [i_1] [i_3]), (arr_6 [i_0] [i_1 - 1] [i_2]))) : ((((!(arr_8 [i_0] [i_1] [i_2] [i_0]))))))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_1;
    var_16 = ((-19720 ? 2301337433 : 0));
    #pragma endscop
}
