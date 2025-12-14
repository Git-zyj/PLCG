/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 1] [i_1] [i_2 - 1] [i_2] [i_3] = ((--18446744073709551604) * (((-(!1)))));
                            arr_12 [i_0 + 1] [i_0 + 1] [i_3] = ((-((min(((min((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2]), (arr_7 [i_2] [i_2] [i_0] [i_0])))), (arr_6 [i_0 + 1] [i_1] [i_2 - 2]))))));
                            var_15 = ((-(max(var_4, (1 | var_11)))));
                        }
                    }
                }
                var_16 = (max(var_16, ((~(min(((((arr_2 [i_1]) && (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (-1359379280953029631 / var_2)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                {
                    var_17 = 32752;
                    arr_20 [i_4] [i_5] [i_5] [i_6] = (max(((((!(arr_1 [i_5]))))), (((211 | (arr_0 [i_6 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_26 [i_4] [i_4] [i_6 + 1] [i_5] [i_8] = (-(min(((min(var_0, 211))), (arr_25 [i_8] [i_6 + 3] [i_5] [i_5] [i_4]))));
                                var_18 = (((max((16383 << 1), (~109))) | (((~(min(var_13, 255)))))));
                            }
                        }
                    }
                    var_19 = (((((max((var_13 > var_4), (!0))))) != ((var_5 + ((min(4294967295, 32)))))));
                    arr_27 [i_5] = (!(((-(((var_8 && (arr_6 [i_4] [i_5] [i_6]))))))));
                }
            }
        }
    }
    #pragma endscop
}
