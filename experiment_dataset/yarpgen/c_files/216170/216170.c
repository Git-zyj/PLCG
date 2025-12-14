/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (((((-(arr_3 [i_1 - 3] [i_1 - 1] [i_1 - 1])))) ? var_10 : (arr_3 [i_0 + 1] [i_1 + 1] [i_2 + 1])));
                    var_12 = (((arr_2 [i_0]) ? ((max((max(var_8, var_3)), (arr_0 [i_2 + 1])))) : (((var_4 << var_7) ? var_2 : (arr_3 [i_0] [i_0 + 2] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 *= (max(((65535 ? 9223372036854775807 : -9223372036854775789)), (9223372036854775807 % 9223372036854775807)));
                                var_14 = (((((((~(arr_11 [i_0] [11] [i_2 + 1] [i_2 + 1] [i_2 + 1])))) ? (-9223372036854775807 - 1) : ((max(1, var_0))))) == ((((arr_11 [i_4] [i_3] [i_3 - 1] [i_3] [i_3]) ? (arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2]) : (arr_11 [i_3] [i_3 + 1] [i_3 - 1] [i_1] [i_0]))))));
                                var_15 = (min(var_15, ((max(((~(arr_3 [i_3 - 1] [i_1 - 2] [i_0 + 1]))), (((arr_3 [i_3 + 2] [i_1 - 3] [i_0 + 1]) ? (arr_3 [i_3 + 1] [i_1 - 1] [i_0 + 1]) : var_1)))))));
                                arr_13 [i_4] [i_3 - 1] [i_2 - 1] [i_1] [i_0 + 1] [i_0] = ((((arr_6 [i_0 - 1] [i_0 + 2] [i_0 - 1]) / (arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_0;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_17 ^= 1323111023962741880;
                    var_18 = (((!var_6) ? (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((arr_18 [i_5] [i_6] [i_7] [i_5]) ? (!1584) : ((((arr_4 [i_5] [i_5] [11]) || (arr_19 [i_5]))))))));
                    arr_20 [i_5] [i_6] [i_7] [i_5] = (min(((((arr_0 [i_5]) + (arr_14 [i_6])))), (((arr_4 [i_5] [i_6] [i_7]) ? 9223372036854775795 : (arr_0 [i_6])))));
                }
            }
        }
    }
    var_19 = (((!(((var_6 ? var_3 : -99))))));
    #pragma endscop
}
