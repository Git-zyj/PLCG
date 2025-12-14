/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (arr_5 [12] [i_1] [i_1]);
                var_12 = (((((((arr_5 [19] [i_1] [19]) ? (arr_2 [i_0] [0]) : (arr_1 [i_0]))) - ((max(var_10, var_10))))) == ((~(arr_4 [i_1] [i_0])))));
                arr_6 [4] [i_1] = ((max(var_6, (arr_3 [i_1]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_13 = (((!var_3) ? ((max((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2])))) : (min(var_7, (arr_8 [i_2])))));
        var_14 = (min((min((arr_9 [i_2] [i_2]), (arr_9 [1] [i_2]))), var_6));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_15 = var_1;
        arr_13 [11] [11] = -4;
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_16 = (min(((var_5 % ((var_7 ? (arr_1 [2]) : var_6)))), var_3));
                            var_17 = (min(var_17, var_9));
                            arr_24 [i_7] [6] [i_5] [i_5] [i_5] [3] [i_3 + 1] = var_4;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_18 = (((arr_12 [i_3]) ? ((3 ? 30 : (arr_16 [4]))) : (((~(arr_12 [i_8]))))));
                            arr_27 [i_5] [i_5] [1] [i_5] = (arr_18 [7] [i_5] [i_4 + 2]);
                        }
                        arr_28 [i_6 + 1] [i_5] [i_5] [i_3] = (min((max(((1 ? (arr_11 [i_3]) : var_10)), ((min((arr_4 [i_3 + 1] [i_4]), var_4))))), (arr_21 [i_3] [7] [10] [i_5] [i_5] [11] [0])));
                    }
                }
            }
        }
        var_19 = ((((arr_22 [i_3] [i_3] [i_3 + 1] [6] [9]) ? ((var_4 ? var_0 : var_2)) : 30)));
    }
    var_20 += var_3;
    #pragma endscop
}
