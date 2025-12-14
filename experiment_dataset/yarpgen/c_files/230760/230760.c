/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 473903981;
    var_12 = (((!var_10) >> (!var_6)));
    var_13 = ((-(!468763861)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = ((!((min((min(255, var_2)), (!var_1))))));
                                var_16 = var_4;
                                arr_14 [i_4] [i_3] [i_4] [12] [i_4] [0] [i_0 - 1] = ((var_4 ? (((min(1, 1)))) : (arr_10 [i_0 - 1] [i_2 + 1])));
                                arr_15 [i_0] [i_1 + 2] [i_2 - 1] [i_3 - 1] [i_4] = ((var_2 != (((!-1) ? ((var_8 >> (var_6 + 130))) : (((var_3 ? 1 : 119)))))));
                                var_17 = (max(2, 128));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
