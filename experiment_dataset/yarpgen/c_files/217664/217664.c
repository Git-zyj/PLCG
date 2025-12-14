/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [14] = ((-(((!(arr_1 [i_0]))))));
                arr_6 [i_0] [10] = 5445;
                var_20 = ((-((-(arr_3 [i_0 - 1] [i_0 - 1] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 = (5462 - 92);
                            arr_14 [i_0 - 1] [i_1] [i_2 - 1] [i_0 - 1] [i_0 - 1] = ((((-var_3 ? var_13 : (arr_0 [i_0 - 1])))) ? 5445 : (((arr_11 [i_0] [i_0] [i_0 - 1] [i_2]) ? (arr_9 [i_2 - 1]) : (1256989189 * var_9))));
                            var_22 = (((((1 ? 50789 : 2147483647))) ? (((arr_12 [i_0] [i_1] [i_0] [0]) ? var_18 : ((var_9 - (arr_8 [i_3] [1]))))) : (((var_10 ? (arr_3 [i_0] [i_1] [12]) : 792033684)))));
                            var_23 += (((((max(-1226436212, 65535)))) - var_11));
                            arr_15 [i_0] [i_1] [i_2 - 1] [i_1] [i_2] [i_0] = (max(-1226436215, 1));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_5] = (min(((1621168149912362004 ? 1 : 7873632450806396761)), (arr_19 [i_5 - 3] [i_5])));
                arr_21 [1] [i_5] = (arr_19 [i_4] [i_5]);
            }
        }
    }
    var_24 = (min((max((~var_0), var_13)), var_13));
    #pragma endscop
}
