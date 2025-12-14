/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min((var_14 + 16516074135932179550), ((max(126, -127))))) ^ var_12));
    var_19 = (min(var_19, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = var_0;
                    arr_9 [i_0] = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = var_2;
                                var_21 ^= var_1;
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [20] = (max((max(3918066761, var_8)), ((((arr_2 [i_0] [i_2]) ? (var_16 <= 154255310) : ((var_17 ? (arr_3 [i_0]) : (arr_11 [i_0] [i_1] [i_1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
