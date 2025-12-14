/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max((((-(var_13 < var_16)))), (((((-(arr_4 [i_1])))) ? ((var_16 / (arr_1 [i_0]))) : (min((arr_3 [i_0] [i_0]), (arr_1 [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] &= ((~((min(-7, 30957)))));
                                arr_16 [i_3] [i_3] [i_3] [i_3] [i_4] [i_4 + 3] [i_0] = (((((arr_12 [i_4 + 1] [i_4] [i_3 + 1] [i_3] [i_3]) ? 11104 : (arr_12 [i_4] [i_4 + 3] [i_3 + 2] [i_3] [i_3]))) < ((((max(28244, 11077))) % -11088))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((~(max(-var_2, var_11))));
    var_20 = ((-(((var_0 ? 11127 : var_7)))));
    var_21 = ((-((var_7 ? -var_1 : (max(870970086, var_8))))));
    #pragma endscop
}
