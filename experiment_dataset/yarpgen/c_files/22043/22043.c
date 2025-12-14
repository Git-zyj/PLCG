/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (1 < var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((((((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 2]) : 1))) <= (((arr_1 [i_1 - 1]) ? var_9 : (arr_1 [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = ((((arr_5 [i_3 + 3] [i_1 - 1]) ? (arr_5 [i_3 - 1] [i_1 - 1]) : 66060288)));
                                arr_16 [i_3] [i_3] = (((!var_7) ? (((var_3 || (arr_10 [i_0] [i_0] [i_3] [i_0] [i_0])))) : (((!((var_7 || (arr_2 [i_1]))))))));
                            }
                        }
                    }
                    var_17 -= var_4;
                }
            }
        }
    }
    var_18 *= (((((min((-98 | var_5), var_8)) + 2147483647)) << (((~var_14) - 4741868246826223525))));
    #pragma endscop
}
