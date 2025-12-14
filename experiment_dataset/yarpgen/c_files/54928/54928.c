/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 -= ((+(min((arr_0 [16] [i_1 + 1]), (arr_0 [2] [i_1 - 1])))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] = 8862;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [2] [i_2 + 3] [i_1] [2] &= (max((max(var_5, (arr_1 [i_4] [i_2]))), (((!((max(var_12, (arr_7 [i_0] [i_1] [i_0] [i_1])))))))));
                                var_17 = ((-(((!(arr_4 [i_0]))))));
                            }
                        }
                    }
                    arr_15 [i_0] = var_5;
                    var_18 |= -15143740535947878485;
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_20 [i_0] [i_5] = (arr_7 [i_0] [i_1] [i_1 - 1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_19 = (min(6662628613097784073, 1));
                                arr_26 [i_0] = (((arr_17 [i_0] [i_0] [i_6] [i_7]) > var_3));
                            }
                        }
                    }
                    arr_27 [i_0] [i_1] [i_5] = ((((((arr_4 [i_0]) - (arr_13 [i_0] [i_0] [i_5] [i_5])))) ? (arr_4 [i_0]) : var_9));
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
