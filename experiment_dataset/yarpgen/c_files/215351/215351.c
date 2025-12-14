/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = var_15;
                var_19 -= var_8;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_20 += var_3;
                                arr_20 [i_3] [i_4] = ((((min((arr_4 [i_2 - 1] [i_2]), (arr_5 [i_2] [i_2]))) * var_0)));
                                var_21 = ((!((max(1, -69)))));
                            }
                        }
                    }
                    var_22 = (((!(arr_18 [i_2 - 1] [i_4 + 1] [i_4] [i_4 + 3] [1]))));
                    var_23 = (((((arr_8 [i_2 - 2]) ? var_6 : (arr_8 [i_2 + 1]))) ^ ((((((var_6 ? var_1 : (arr_14 [i_3] [i_4] [i_3] [i_3])))) ? ((~(arr_0 [i_3] [14]))) : (arr_0 [i_3] [i_2 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
