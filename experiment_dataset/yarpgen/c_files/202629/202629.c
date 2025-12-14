/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = ((((max((max((arr_11 [i_2] [i_2] [i_2] [i_2] [4]), (arr_0 [i_0] [i_0]))), ((((arr_2 [i_1] [i_1]) ? var_7 : var_1)))))) ? (min(((var_0 ? var_9 : var_8)), -1)) : (max((max(2030830655, 43402)), -23))));
                                var_12 |= (max(((min((arr_4 [i_4 + 2] [i_4 + 3]), (((var_9 ? (arr_12 [i_3] [i_1] [i_4 + 2] [i_3]) : (arr_12 [i_0] [i_0] [6] [i_3]))))))), ((-35 ? 153 : 18446744073709551615))));
                                var_13 = (min(var_13, (min((min((((34 ? var_5 : var_5))), (min(4294967295, (arr_0 [i_0] [i_1]))))), ((min((arr_11 [i_0] [7] [i_2] [i_3] [i_4]), var_8)))))));
                            }
                        }
                    }
                    var_14 = (max(((min((arr_7 [i_1] [i_1] [i_1]), 16473))), (arr_7 [i_0] [i_0] [i_0])));
                    var_15 &= (max(0, (min(0, (arr_4 [i_1] [i_1])))));
                }
            }
        }
    }
    var_16 = (max(var_8, (min(((var_10 ? var_10 : var_3)), ((var_0 ? var_3 : var_8))))));
    var_17 = max(var_3, var_2);
    #pragma endscop
}
