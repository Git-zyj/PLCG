/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_12 &= (((((19431 && (arr_0 [i_0] [i_1 + 1])))) | ((max(((!(arr_4 [i_0] [i_0] [i_0]))), (1 > 6358421421300391491))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 |= ((((var_7 + 2147483647) >> ((((max(65535, (arr_3 [i_3] [i_4])))) - 65519)))) | ((-(var_1 / var_7))));
                                var_14 = (((((!(arr_4 [i_2 + 1] [i_1] [i_1 + 1])))) >> ((((-((var_9 ? var_4 : var_9)))) - 87))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_15, (((var_0 <= (var_8 % -var_0))))));
    var_16 += 31;
    var_17 ^= ((var_5 <= (min((var_6 - var_7), var_1))));
    #pragma endscop
}
