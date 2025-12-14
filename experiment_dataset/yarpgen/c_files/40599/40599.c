/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 += var_11;
                                var_14 *= (max(((-(max(149339885, -37)))), (((((arr_5 [i_0] [i_0] [i_4]) - (arr_4 [i_4])))))));
                                arr_15 [i_0] [i_0 - 1] [8] [i_0] |= (((var_4 - ((214 ? 27994 : 1321827423474554610)))) * var_3);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_18 [i_1] [i_5] [i_5] [i_1] = ((!(((-65 ? ((((arr_11 [i_0] [i_1] [i_5] [i_1]) && (arr_12 [i_0] [i_0 + 1] [i_1] [i_1] [i_1] [i_1] [5])))) : (arr_4 [i_0 - 1]))))));
                    var_15 = (min(var_15, ((((var_9 % (arr_7 [i_0] [i_1] [i_5] [i_1])))))));
                    arr_19 [i_0] [i_1] [i_5] = (--4542504799142354256);
                    arr_20 [i_1] [i_1] [7] = (max((((arr_14 [i_0] [i_0]) ? var_3 : (arr_17 [i_0 + 2] [i_0 + 2] [i_1]))), -var_6));
                }
            }
        }
    }
    var_16 = -49832;
    #pragma endscop
}
