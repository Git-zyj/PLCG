/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 ? 2147483648 : (((var_0 * (!var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_9 [7] [i_0] [i_2] = ((-(max((arr_4 [i_0] [i_0]), ((-(arr_3 [i_0] [i_1])))))));
                            var_11 += (max(((var_6 ? (arr_0 [6] [i_1]) : (arr_1 [i_0]))), (((arr_2 [i_0] [1]) - (~var_1)))));
                            arr_10 [i_0] = 62012;

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] = var_3;
                                arr_15 [i_0] = (8229865752159432784 >= 8229865752159432779);
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_19 [i_0] [i_0] [3] [6] [i_5] = (((min((arr_0 [i_5] [i_3]), -8229865752159432784))) ? ((((max((arr_13 [i_5] [i_0] [16] [i_2] [i_0] [i_0]), (arr_4 [i_0] [i_5])))) / ((var_5 ? -9027 : 0)))) : ((((((arr_16 [12] [i_1] [i_2] [i_3] [i_5]) ? 30 : var_2)) * (((arr_3 [7] [7]) ? (arr_2 [i_5] [i_2]) : (arr_8 [i_5])))))));
                                arr_20 [i_0] [i_0] = (var_3 <= var_2);
                            }
                            arr_21 [i_0] [i_0] [i_0] [i_3] = ((max(((2 ? var_1 : (arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [15])), (var_3 + var_1)))));
                        }
                    }
                }
                arr_22 [i_0] = (max(((~(9027 < var_4))), ((7 % (arr_5 [i_1] [i_0] [14])))));
            }
        }
    }
    #pragma endscop
}
