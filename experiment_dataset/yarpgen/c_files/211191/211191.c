/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max((!var_7), var_5)));
    var_11 ^= var_3;
    var_12 = (min(var_12, (((min(var_6, (var_2 + 11929516088053948680)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 ^= (!2297005706);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] = (((arr_4 [i_0] [i_0] [i_2]) & (((min((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), var_5))))));
                                arr_13 [i_0] [i_2] [i_1] [i_2] [i_3] [i_3] = max((min((!var_8), (116 + var_3))), (((-(((!(arr_0 [i_0]))))))));
                                var_14 += (min(((116 ? var_3 : (arr_1 [i_3 - 1]))), (((!(((var_6 ? (arr_1 [i_0]) : var_4))))))));
                                var_15 = (((((max((arr_8 [i_0] [i_0 - 1] [i_0] [i_0]), var_1)))) << ((min((var_2 || 116), (!var_7))))));
                                var_16 = ((max((arr_5 [i_2] [i_0 - 3] [i_2 - 2] [i_3 + 2]), (arr_4 [i_3 + 2] [i_0 - 1] [i_2 + 1]))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] = (!((max((var_5 <= var_8), (min(var_2, (arr_8 [i_2] [i_1] [i_2] [i_2])))))));
                    arr_15 [i_2] [i_2] = (((!((min(var_5, 4294967295))))));
                    var_17 = (arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
