/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (arr_0 [i_0 - 1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (max((min(((0 ? 12387433526192741475 : 105)), ((min(var_5, var_10))))), (min(12387433526192741475, 1))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] [i_4] = ((((min((arr_0 [i_0 + 1]), var_5))) ? (((arr_10 [i_0 + 2] [4] [i_3] [i_3]) / ((min(var_8, var_5))))) : (((max((arr_14 [i_3] [i_1] [i_0 + 2] [i_3 + 2]), var_6))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_22 [i_5] = (max((((arr_19 [4] [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_3 [i_0 + 1]) : (max(var_9, var_8)))), (arr_20 [0] [i_1] [4] [i_6])));
                            var_14 = (arr_3 [i_0 + 2]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
