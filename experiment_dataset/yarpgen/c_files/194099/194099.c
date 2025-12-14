/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? (max(var_9, ((max(var_11, var_11))))) : (((~(~var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = var_3;
                    var_14 = ((!-var_7) ? ((max((arr_6 [i_1] [i_1 + 1]), var_1))) : (((!(arr_3 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] = (~var_5);
                                arr_14 [i_0] [i_1] [i_0] [i_4] = var_1;
                                arr_15 [i_2] [i_2] [i_2] = (((~var_8) ? (((!var_6) ? (arr_5 [i_0] [i_1 - 2]) : ((((arr_1 [2]) ^ var_3))))) : (arr_8 [i_0] [i_0] [i_3] [i_4])));
                            }
                        }
                    }
                    arr_16 [i_0] = (((((var_5 ? (arr_9 [i_1 + 1]) : var_4))) ? (max(((1375 ? -1375 : 4003442960)), var_1)) : ((((arr_7 [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 1]) ? (arr_0 [i_0]) : (~var_10))))));
                }
            }
        }
    }
    #pragma endscop
}
