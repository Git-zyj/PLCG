/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_1] [i_1] = 2487683015872564919;
                                var_18 = ((-((-1474501235 ? (arr_5 [i_0] [i_0] [i_1] [i_3 + 1]) : var_12))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [2] |= ((-((var_16 / (arr_12 [i_5 + 1])))));
                        arr_17 [i_0] [1] [i_1] [i_5 + 1] = ((1474501234 ? (65535 && var_10) : 3));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_19 ^= (((((~(arr_19 [i_7] [i_7 - 1] [i_0 - 3] [12] [i_0 - 1] [i_0])))) ? ((((min(var_1, var_1))) ? (arr_6 [i_1] [i_1 + 2] [i_2 - 1] [i_6]) : (65535 && var_15))) : ((((!(arr_0 [i_2 - 1])))))));
                                arr_22 [i_0] [i_1] [i_1] = ((((((arr_21 [i_0] [i_1] [i_2 + 1] [i_6] [i_7]) ? ((-(arr_6 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))) : 65535))) && ((min(1953, (arr_0 [i_2 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, 1541));
    #pragma endscop
}
