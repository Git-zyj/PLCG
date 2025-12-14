/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!(!var_12))));
    var_16 = (~var_13);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_17 = ((+((-((-12499 ? (arr_3 [i_0 - 1]) : -654325400))))));
                        arr_9 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_2] [i_0] [i_0 + 1] = (max((((~27253) ? (arr_0 [i_1]) : -var_7)), var_4));
                        arr_10 [i_0] = ((((max((max(var_4, (arr_7 [i_1] [i_2] [i_3]))), (((!(arr_5 [i_0] [i_0]))))))) ? (((var_8 ? (~0) : 9))) : (((arr_2 [i_2] [i_0]) ? (min(9223372036854775807, -1892806955)) : (arr_6 [i_0 - 1] [i_2])))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_18 = (arr_4 [i_0] [i_0] [4] [i_0 - 1]);
                        var_19 = (~-3367862878166436862);
                    }
                    var_20 = (arr_3 [i_1 - 2]);
                    arr_13 [i_0] [2] = ((max(((min(var_0, (arr_7 [i_2] [i_1 - 1] [i_0 + 1])))), (((arr_2 [i_0] [i_0]) - (arr_12 [i_2] [i_2] [7] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_18 [i_5] [i_1] [0] [i_0] [0] [i_1] [i_6] = ((~(((max(var_13, (arr_2 [i_1] [i_0])))))));
                                arr_19 [i_0] [i_1] [i_2] [i_5] [i_6] = 1;
                                arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = (max(var_11, ((max(var_12, ((min((arr_17 [6] [i_1] [i_1] [i_2] [i_5] [i_6] [i_6]), var_6))))))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_2] = (max((arr_5 [i_0] [i_0]), (((27256 || ((!(arr_2 [i_0 + 1] [i_0]))))))));
                }
            }
        }
    }
    var_21 = 68719472640;
    #pragma endscop
}
