/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_16;
    var_18 = var_3;
    var_19 = ((-(((((var_13 ? var_11 : var_9))) ? (var_12 != var_0) : (var_10 != var_16)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = ((!(((var_13 ? (arr_2 [i_1 - 1]) : (arr_6 [i_1 - 1] [i_1 - 1]))))));
                    var_21 = (((min((arr_1 [i_2 - 4]), ((65535 ? 370107011 : 1879048192)))) >= (arr_6 [i_0] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_22 *= var_12;
                                var_23 = (var_15 != -3);
                                var_24 &= -var_15;
                                var_25 = ((((arr_3 [i_2 - 1] [i_2 + 1]) ? (arr_13 [i_1 - 1] [i_1 - 1] [9] [i_1 - 1]) : (arr_3 [i_2 - 4] [i_2 - 4]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
