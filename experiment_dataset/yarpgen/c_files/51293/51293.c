/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = (((arr_1 [i_2]) && -1939599556));
                                var_16 = (((-(arr_5 [i_4 + 2] [i_0 - 4]))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_17 = 0;
                                var_18 = (min(var_18, (((((((((((arr_19 [i_0]) ? (arr_8 [i_0 - 2] [i_1 + 1] [i_1]) : (arr_2 [i_5 + 1] [i_6])))) <= 9197490009375119689)))) & (max((((!(arr_16 [i_0] [i_1 + 1] [i_1] [i_5 - 1] [i_6] [i_5 - 1] [i_0])))), 9197490009375119689)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (var_12 * ((0 ? var_13 : 0)));
    var_20 = 19010;
    #pragma endscop
}
