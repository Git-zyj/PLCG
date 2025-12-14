/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((+((max((arr_7 [i_0] [i_3]), (3062333043 == 1))))));
                                var_15 = (max(var_15, (arr_4 [i_3] [i_1])));
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [1] [i_1] &= (((!var_12) + ((-var_14 - (!1)))));
                                arr_16 [i_0] [3] [i_2] [i_3] [i_2] [i_3] [3] = var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 -= ((var_1 != ((((-3115715449321957158 != 1) << (((max(471068875, 47799)) - 471068856)))))));
                                arr_21 [i_0] [i_5] [i_5] = ((~(((1 ? 0 : var_0)))));
                                var_17 = (max((max(var_14, (arr_1 [1]))), (((((max(1, 1)))) & ((4294967295 ? 0 : var_2))))));
                                var_18 = (max(var_18, (((~(((arr_9 [i_6] [i_5] [i_6] [i_6] [i_1] [i_0]) ? -4303 : (0 % var_4))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 1;
    var_20 = var_0;
    #pragma endscop
}
