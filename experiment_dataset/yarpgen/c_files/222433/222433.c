/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((((~28) ? (((((arr_7 [i_0 + 1] [i_2 + 3] [i_4]) && -1983179335)))) : (max((-2147483647 - 1), (arr_7 [i_0] [i_2 - 2] [i_1]))))))));
                                var_15 = (min(var_15, ((max((((~(min((arr_6 [i_0] [i_2] [1] [i_4]), var_4))))), ((((((arr_10 [i_0] [i_1] [i_2 - 1] [i_2] [i_0] [i_4]) ? var_10 : (arr_4 [i_4] [i_2 + 2])))) ? ((55 ? -1840505506219615089 : var_12)) : (~var_4))))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2 - 1] = ((var_7 ^ (max(var_10, (arr_11 [i_2 - 1] [i_2 - 2] [i_1] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0])))));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_2 + 1] [i_0] [i_5] = (max((((arr_6 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 - 1]) ? var_6 : (arr_5 [i_2 - 1]))), (!var_0)));
                        arr_17 [6] [i_1] [3] [i_1] = ((237765013 ? 1983179344 : 18446744073709551612));
                    }
                    arr_18 [i_0] [i_1] [9] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
