/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((max(var_9, 12732892503843763412)))))));
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = ((((((arr_4 [i_2] [i_2] [12]) ? (max(4294967283, var_5)) : var_6))) && -2918014924855391996));
                            var_14 = (((max((~-4611686018427387904), -var_9)) | ((((15991771889534323733 || (arr_8 [i_0] [i_1] [i_2] [1])))))));
                            arr_9 [11] [i_1] [i_1] [i_2] [i_3] &= (((arr_5 [i_0] [i_1] [i_2] [i_3]) <= (((!(arr_5 [i_3] [i_2] [i_1] [i_0]))))));
                            var_15 = (((((var_9 ? (((var_5 ? (arr_1 [11] [i_0]) : var_2))) : 53))) ? ((((arr_0 [i_1] [i_2]) - (arr_1 [i_3] [i_0])))) : ((((!(-127 - 1))) ? ((min(3, 511))) : var_6))));
                        }
                    }
                }
                var_16 = -5255933304720947556;
                var_17 = (max(-256, -18041));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_18 *= (((((!(((-(arr_13 [i_4] [i_0]))))))) >> (-19565 + 19585)));
                            var_19 = var_4;
                            var_20 = (((((arr_0 [i_4] [i_5]) | ((var_7 ? 1 : 0))))) ? (arr_15 [i_0] [i_1] [i_4] [18]) : (31 <= 213));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_25 [2] [i_7] = (((((arr_15 [i_6] [i_7] [i_8] [i_7]) ? (((arr_11 [i_8] [i_9]) ? (arr_16 [i_8]) : 9843934345322369840)) : (arr_3 [i_6] [i_7])))) ? (((-9 <= var_2) ? (~var_1) : (1455930214 | var_4))) : (~2871959874));
                            arr_26 [i_6] [i_7] [i_8] [i_9] = 3266478455;
                        }
                    }
                }
                var_21 = 3266478482;
                var_22 = (max(var_22, 18));
            }
        }
    }
    var_23 &= var_3;
    #pragma endscop
}
