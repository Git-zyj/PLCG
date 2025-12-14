/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_10 = ((-((min((arr_3 [i_4] [i_3] [i_1 - 1]), (arr_3 [i_0] [i_1] [1]))))));
                                var_11 = (((((((!(arr_8 [i_3] [i_3]))) ? 54218 : (((arr_2 [i_0] [8]) ? 11310 : -15781))))) ? 1 : (((max(var_1, 1))))));
                            }
                        }
                    }
                }
                var_12 = ((((((arr_4 [i_1] [i_1 - 3] [i_1 + 2]) ? var_8 : (((arr_7 [i_0] [10] [i_0] [i_0]) ? (arr_1 [i_1 - 3]) : (arr_5 [i_0] [i_1] [i_1] [i_0])))))) ? ((-(arr_0 [11] [11]))) : ((((((arr_8 [i_0] [i_0]) / var_2))) ? (!1) : var_8))));
                var_13 = (arr_5 [i_0] [i_0] [i_1 + 1] [i_1]);
            }
        }
    }
    var_14 = (min(1, var_1));
    #pragma endscop
}
