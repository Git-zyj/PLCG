/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [6] [6] = (max(var_0, (!-908025418)));
                                var_10 = (var_0 << ((((~((var_5 ? 7 : var_1)))) + 68)));
                                var_11 = (min((((7658240364437471325 <= (12612 % 7658240364437471325)))), (((arr_11 [i_2 - 1] [i_3] [i_3] [i_2 + 1] [i_4] [i_4]) ? var_0 : (arr_11 [i_2 - 1] [i_3] [i_3] [i_3] [i_2 - 1] [i_1])))));
                            }
                        }
                    }
                }
                var_12 = ((max((max(-51, 3749507046)), 3)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_13 = (arr_5 [11] [11]);
                            var_14 = (max(var_2, (((((16 ? 18567 : (arr_7 [i_5] [i_5] [i_1] [1]))) == 243)))));
                        }
                    }
                }
                var_15 += (((4727610593112935508 ^ (var_8 < 16383))));
            }
        }
    }
    var_16 = 255;
    #pragma endscop
}
