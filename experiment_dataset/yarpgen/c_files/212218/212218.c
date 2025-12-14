/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((~(max((max(var_3, var_4)), var_16)))))));
                                var_20 = ((-6483786524988113482 ? (((arr_5 [i_0] [i_1] [i_0 - 2] [i_3]) ? 31 : (arr_5 [i_0] [i_1] [i_0 + 1] [i_1]))) : (arr_5 [i_0 - 2] [i_1] [i_0 + 1] [i_3])));
                            }
                        }
                    }
                    var_21 = ((+((max((arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2] [13]), (arr_4 [i_0 - 2] [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((-(arr_6 [i_5 + 1] [i_1] [i_0 + 1])))) ? (min((arr_8 [i_1] [i_2] [i_6] [i_6]), (((31 != (arr_15 [18] [i_5] [i_0 + 1] [i_0 + 1])))))) : 0)))));
                                var_23 = (0 | (min(((var_6 ? var_8 : 2292723815)), (min((arr_16 [5] [12] [i_2] [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]), (arr_11 [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                arr_25 [i_7] = (max(((~(arr_24 [i_7 - 2] [i_7 + 1] [1]))), (~33)));
                var_24 = ((-((+((max((arr_4 [i_7 - 1] [i_8]), 29835)))))));
            }
        }
    }
    #pragma endscop
}
