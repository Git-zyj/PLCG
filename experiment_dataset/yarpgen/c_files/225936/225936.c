/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_4 [i_0] [i_1]) ? ((((var_10 > (13 >= var_5))))) : var_12));
            arr_7 [i_0] [i_0] [i_1] = (var_15 + var_10);
            arr_8 [i_0] [i_0] [i_0] = (((((arr_4 [i_0] [i_0 + 1]) ? (arr_4 [2] [i_0 + 1]) : (arr_4 [8] [i_0 - 1]))) + ((max((arr_4 [i_0] [i_0 - 1]), (arr_4 [i_0] [i_0 - 1]))))));
            arr_9 [16] = ((!((max(((var_0 ? var_13 : (arr_4 [i_0 - 1] [14]))), -81)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_12 [i_0] &= (((arr_10 [i_2] [i_2]) | (arr_10 [i_0 + 1] [i_2])));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_24 [i_0 - 1] [i_3] [i_5] [i_5] [i_5] [0] = (((arr_19 [i_5] [i_5] [i_0 - 1] [14] [i_0 - 1] [1]) ? var_1 : (arr_19 [i_0 - 1] [i_4] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])));
                            arr_25 [i_2] [8] [i_3] [i_2] [i_0] = 0;
                        }
                    }
                }
                arr_26 [1] [i_2] [i_2] [13] &= var_11;
                arr_27 [i_0] [i_3] [8] [i_2] = (((arr_1 [i_0] [i_2]) ? (arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) : (((arr_4 [i_0 - 1] [i_0 - 1]) ? 23641 : var_6))));
            }
        }
        arr_28 [6] [6] &= (((((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 - 1] [i_0])))) ? (arr_21 [1] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : ((~(((arr_10 [i_0 + 1] [i_0]) & (arr_14 [10] [15] [10] [i_0]))))));
    }
    var_16 = 32008;
    var_17 = (!(!var_1));
    var_18 = ((-((-(!var_0)))));
    var_19 = var_8;
    #pragma endscop
}
