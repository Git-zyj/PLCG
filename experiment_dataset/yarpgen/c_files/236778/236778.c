/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_17 [14] [14] [14] [i_4] [i_4] = (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                arr_18 [i_0] [i_1] [i_4] [i_3] [i_0] = (arr_11 [i_2] [12] [16] [i_0] [16] [i_0]);
                                arr_19 [i_0] [i_3] [i_3] [i_3] |= ((((((var_2 ^ (arr_1 [i_0]))) % ((max(-22986, -22986))))) < (min((arr_15 [i_0] [1] [i_0] [i_0] [i_0]), ((107 ? var_11 : (arr_1 [i_0])))))));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_1] = 1;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((min((arr_24 [i_6] [i_5] [i_1]), -107)))));
                            arr_27 [i_0] [i_1] [3] [i_5] = ((var_14 ? (((arr_14 [i_0] [i_0] [i_0] [i_0] [13]) * (arr_3 [i_0] [i_5]))) : (arr_1 [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
