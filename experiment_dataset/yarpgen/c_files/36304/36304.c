/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 &= ((var_9 << ((((~((3623036213 >> (-27531 + 27548))))) - 4294939651))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_12 = 255;
                                var_13 = ((min((max(4294967295, 5473859049235210008)), -115)));
                                var_14 = (min(var_14, (max((((min(51, (arr_3 [i_0] [i_0]))))), (min(1, (min(671931083, (arr_0 [i_0])))))))));
                                var_15 = (!var_8);
                            }
                        }
                    }
                }
                var_16 = ((((max(5, var_2) / var_2))));
                arr_12 [i_1] &= ((262143 + (((min(41685, -123))))));
            }
        }
    }
    var_17 = (max(((((!var_7) ^ var_4))), (~-var_6)));
    #pragma endscop
}
