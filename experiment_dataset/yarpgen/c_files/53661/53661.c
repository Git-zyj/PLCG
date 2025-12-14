/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((var_6 | var_8), (((var_7 ? 12 : var_4)))))) ? ((((var_2 / var_6) ? ((var_5 ? 7510 : var_11)) : -25))) : var_5));
    var_16 = (max(var_16, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (max((((((max((arr_4 [i_0] [i_1 + 2] [i_0]), var_7)))) > var_9)), ((var_11 > (((arr_1 [i_2 - 1]) + var_6))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = (((((var_14 ? var_5 : (arr_9 [i_0] [i_0])))) ? ((((arr_1 [i_1 - 3]) ? 1404 : 34385))) : (arr_9 [i_4 - 3] [i_2 + 1])));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = 1;
                            }
                        }
                    }
                    var_17 ^= (arr_3 [i_0] [i_0]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_18 = ((((min((((arr_15 [i_5] [i_6]) ? (-9223372036854775807 - 1) : 32915)), (((~(arr_3 [i_5] [i_6]))))))) ? (max(var_8, (arr_5 [i_5] [i_6] [i_7]))) : (((!var_9) ? (max((arr_8 [i_7] [i_6] [i_6] [i_5]), var_12)) : 77))));
                    var_19 = (((2755081865 ? (arr_21 [i_5]) : (arr_4 [i_5] [i_6] [i_7]))) * ((max(var_1, (arr_21 [i_5])))));
                }
            }
        }
    }
    #pragma endscop
}
