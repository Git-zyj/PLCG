/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [0] [8] = 15499358873062047962;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [1] [1] [4] [i_1] = (max(var_0, var_7));
                    arr_11 [4] = (max(var_9, (((((min(var_2, 0))) ? var_7 : 0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_17 [1] [1] [i_1] [i_2] [i_3] [i_3] [i_4] = 1;
                                arr_18 [i_3] [i_2] [i_0] = 4095;
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_2] [i_2] = var_9;
                }
            }
        }
    }
    var_10 = var_7;
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            {
                var_12 = (min(((2380622173 ? 1 : -578577161)), 4978291636588843496));
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_13 = var_5;
                            arr_29 [i_8] [i_8] [i_8] [i_8 - 1] = (min(var_2, 1));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
