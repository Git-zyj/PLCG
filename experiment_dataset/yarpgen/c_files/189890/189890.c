/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= -var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (arr_2 [i_1 - 1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 = (--107);
                    var_14 = (min(var_14, (((~(((arr_7 [i_1 - 1] [i_1 - 1] [i_2] [i_2]) - (arr_7 [i_1 - 1] [i_1 - 1] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = var_8;
                                var_16 = var_5;
                                var_17 = -8589926400;
                                var_18 = ((((((arr_10 [i_0] [i_2] [i_1 + 1] [i_0]) ? (arr_5 [i_0] [i_1] [i_1 + 1]) : var_10))) ? (max(((10381 ? (arr_0 [i_4]) : var_1)), ((~(arr_10 [i_0] [i_1] [i_2] [i_4]))))) : (~0)));
                            }
                        }
                    }
                    var_19 = (min((arr_4 [i_2]), (((arr_1 [i_1 + 1]) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1]) : (arr_0 [i_1 + 1])))));
                }
            }
        }
    }
    var_20 ^= ((((min(var_7, 7))) ? ((0 ? 4034183218 : 0)) : 140));
    #pragma endscop
}
