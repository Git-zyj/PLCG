/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((-(arr_1 [i_0])));
        arr_5 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [17] [i_0]) : (arr_0 [i_0] [i_0])));
        arr_6 [i_0] = (~var_3);
        arr_7 [i_0] [i_0] = (((var_5 ? var_3 : 8)));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_12 [6] = ((~((var_2 ? (~var_5) : var_1))));
        arr_13 [i_1] [2] = ((((var_2 ? (!var_7) : ((max(var_6, (arr_8 [i_1])))))) + ((((((var_10 / (arr_11 [i_1] [i_1 - 2])))) == var_1)))));
        arr_14 [8] = (max(((min((arr_8 [11]), var_9))), (arr_0 [i_1 - 2] [3])));
        arr_15 [i_1] [i_1] = var_8;
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_28 [i_2] [i_3] [i_4 + 1] [i_4 - 2] [i_5] [i_3] [i_6] = (var_6 > var_2);
                                arr_29 [i_3] [i_3] [i_3] [i_5] = var_1;
                                arr_30 [i_2] [i_5] = var_0;
                                arr_31 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_3] [i_2] = (((((arr_16 [i_4 - 1]) ? var_3 : (arr_27 [i_2] [i_3] [19] [i_2] [i_3]))) + 16383));
                                arr_32 [i_3] [i_3] [i_3] = var_1;
                            }
                        }
                    }
                    arr_33 [i_3] [i_3] [i_4] = 16383;
                    arr_34 [i_4] [i_3] [i_3] [i_4] = (var_5 % var_4);
                }
                arr_35 [i_3] [i_2] [i_3] = (max((max((arr_22 [i_3] [i_3] [i_3]), -var_1)), (var_10 % var_5)));
            }
        }
    }
    var_11 = ((((((!(!var_8))))) - var_1));
    var_12 = ((+(((var_0 != var_1) - var_1))));
    #pragma endscop
}
