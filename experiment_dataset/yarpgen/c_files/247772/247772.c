/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 -= (((((min(var_12, (19275 <= var_6))))) * var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] |= (min((~var_3), 1911973234));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((max(((-(arr_11 [i_0] [i_1] [i_4]))), ((19278 ? 4294967295 : -1911973235))))) ? ((min(((var_0 ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : 2147483647)), (-1911973242 / var_3)))) : var_6)))));
                                var_22 = (max(var_22, var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [13] [i_2] [i_5 - 1] [i_6 - 1] = var_6;
                                var_23 = ((((min(var_10, ((-(arr_15 [i_0] [i_5 + 1])))))) ? var_18 : var_7));
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        arr_20 [i_0] [i_0] = var_3;

                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            arr_23 [i_0] [i_2] [i_0] = var_9;
                            var_24 = ((max(var_5, (arr_22 [i_8 + 1] [i_7] [i_2] [i_1] [i_0]))));
                            arr_24 [i_0] [i_0] = ((-var_8 * ((((arr_3 [i_1] [i_7 - 1] [i_8]) ? var_17 : (arr_3 [i_1] [i_7 - 1] [i_7]))))));
                        }
                        arr_25 [i_0] [7] [i_0] [i_7] = ((!(((~(arr_6 [i_0] [i_0] [i_0]))))));
                        arr_26 [i_0] [0] [i_2] [13] = (min(((((min(var_4, (arr_8 [2] [10])))) == ((-2055674204 ? var_13 : var_8)))), ((var_0 && ((((arr_19 [i_2] [i_0]) ? 2171358428 : (arr_2 [i_0] [i_0] [i_0]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
