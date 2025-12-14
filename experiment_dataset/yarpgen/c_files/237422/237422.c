/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_3, -var_4));
    var_15 = (min(var_7, (var_9 > -47413)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_10, ((max(var_8, ((min((arr_2 [i_4] [1] [1]), 1))))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [19] [16] = ((~((-(arr_6 [i_0] [6] [i_2] [i_4])))));
                                var_17 = (min(var_17, (((((((arr_10 [i_1] [i_1] [i_2] [i_1] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [18]) : var_4))) > (((arr_0 [i_0] [i_0]) ? (arr_0 [i_2] [i_2]) : (arr_0 [1] [i_3]))))))));
                                var_18 = ((((((((var_8 / (arr_6 [i_0] [i_0] [i_0] [i_0])))) < ((var_10 / (arr_0 [5] [18])))))) ^ -47413));
                                var_19 = ((-(min(((-899735241 ? var_4 : -113)), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                }
                arr_12 [i_0] = (min((max(var_11, (arr_6 [i_1] [i_1] [0] [4]))), (arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
