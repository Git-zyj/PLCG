/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = var_6;
                arr_6 [i_0] [8] &= (max(((var_10 | (arr_4 [i_0] [i_0 + 1]))), (((!(arr_1 [2]))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = var_7;
                                var_14 = (((!var_11) ? ((((((max((arr_15 [i_0] [i_3] [i_2 + 1] [i_0] [i_0]), -17032))) == (arr_8 [i_1] [i_1] [i_0]))))) : (((255 / var_9) - 17042))));
                                arr_17 [i_0 + 3] [i_1] [i_0] [i_2 - 3] [13] [i_4] = (min((((1073733632 <= -17046) ? 49 : ((-17045 ? var_5 : 216172782113783808)))), ((max((var_1 != var_3), ((107 || (arr_13 [i_0] [i_3] [i_2 - 3] [i_3] [i_4 - 1]))))))));
                            }
                        }
                    }
                }
                var_15 *= ((17043 || (arr_13 [i_0] [i_0 + 1] [15] [i_1] [15])));
                var_16 = (((min(((min(var_7, (arr_7 [i_0] [i_1] [i_1])))), (1 - 728602151))) >= 57));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_17 = ((-17017 ? 27 : 14));
                    var_18 *= 2291798069;
                }
            }
        }
    }
    #pragma endscop
}
