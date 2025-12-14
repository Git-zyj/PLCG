/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_3] = var_19;

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 12;i_4 += 1)
                            {
                                arr_16 [i_4] [i_4 - 2] [i_0] [i_2] [i_0] [i_1] [i_0 + 1] = (((((arr_14 [i_4] [i_3] [i_2 + 1]) ? var_19 : var_8)) + (((arr_0 [i_0 + 1]) ? (arr_10 [i_2] [i_0 + 1]) : var_18))));
                                arr_17 [i_0] [i_1] [i_4] [i_2 - 2] [i_3] [i_3] [i_4] = ((((-(arr_4 [i_1] [i_3])))) ? (((arr_7 [i_2] [i_3] [i_4]) ? 4007737699444523041 : (arr_13 [i_4] [i_3] [i_3] [i_2 - 4] [i_1] [i_0]))) : (arr_15 [i_3] [i_2 + 2] [i_3] [i_4 + 2]));
                            }

                            for (int i_5 = 2; i_5 < 15;i_5 += 1)
                            {
                                arr_20 [i_3] [i_5 - 1] [i_1] [i_5] [i_0] = (((((((min((arr_6 [i_3] [i_3] [i_3]), var_12))) ? 8679018886241493099 : ((((arr_12 [i_0 + 1] [i_0] [i_0] [i_1] [i_0] [i_3] [i_5]) % (arr_6 [i_5] [i_3] [i_2]))))))) ? (((!(arr_13 [i_2] [i_2] [i_2] [i_2] [i_2 - 4] [i_2])))) : var_9));
                                arr_21 [i_0] [i_5 - 1] [i_3] [i_2 + 2] [i_1 + 1] [i_1] [i_0] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
                            }
                            arr_22 [i_1 - 1] [i_0] [i_1] [i_2 - 4] [i_0] = (((((arr_15 [i_0] [i_2 + 2] [i_0] [i_0 + 1]) ? (arr_15 [i_0] [i_2] [i_0 + 1] [i_1]) : (arr_19 [i_3] [i_3] [i_0] [i_2] [i_3] [i_2 - 4] [i_1]))) << (((var_13 > ((255 ? (arr_10 [i_0] [i_3]) : (arr_0 [i_3]))))))));
                        }
                    }
                }
                arr_23 [1] = ((((min(201, (arr_18 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_0])))) ? var_18 : ((min(var_0, (arr_5 [i_1 - 2] [i_0 + 1] [14]))))));
                arr_24 [i_0] [i_1 + 1] = ((var_3 ? (arr_18 [i_1 - 2] [i_1] [i_0] [i_0] [i_0 + 1]) : (arr_19 [i_1 + 3] [i_1 + 3] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
            }
        }
    }
    var_20 = (min((-27 >= var_0), var_2));
    #pragma endscop
}
