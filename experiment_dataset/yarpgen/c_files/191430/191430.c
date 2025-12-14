/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = (min((((((var_3 ? 2183440447 : var_12)) == 0))), ((var_11 + ((var_12 ? var_12 : 3559594544710516496))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((~(((var_4 > (((var_10 ? var_7 : var_11))))))));
                            var_16 = (arr_10 [i_3] [i_2 - 1] [i_1] [i_1] [i_0]);
                            var_17 = ((+(((arr_0 [i_2 + 1]) * (arr_0 [i_0])))));
                        }
                    }
                }
                var_18 = (max((arr_6 [i_1]), (var_1 - var_8)));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 &= ((max(-116, 57)));
                                var_20 = (max(((~(arr_0 [i_0]))), (((!(arr_0 [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
