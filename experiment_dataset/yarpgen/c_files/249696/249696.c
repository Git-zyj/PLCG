/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((arr_2 [i_0]) ? var_12 : (arr_0 [i_1])));
                var_13 &= (((arr_4 [14]) ? 10611 : ((-(arr_1 [i_1])))));
                arr_6 [i_1] = ((-(arr_0 [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = ((~(max((((arr_12 [i_4] [i_1] [3] [i_1] [i_0]) ? -7518 : (arr_3 [i_1]))), -717821637))));
                                var_15 = ((+(((arr_7 [i_3 - 1] [i_1] [i_3 - 1] [i_3 + 2]) ? (arr_7 [i_1] [i_1] [10] [i_3 - 1]) : (arr_7 [16] [i_1] [i_0] [i_3 - 1])))));
                                var_16 += (arr_11 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]);
                                var_17 = (arr_13 [i_0] [i_1] [0] [i_2] [i_0] [i_1]);
                                var_18 += ((18446744039349813248 ? ((10611 ? ((2147483647 ? 3892 : 9223372036854775786)) : 3883)) : ((((max(-10611, -10637)))))));
                            }
                        }
                    }
                }
                arr_14 [i_1] [i_1] = (arr_3 [i_1]);
            }
        }
    }
    var_19 = (min(var_3, var_10));
    var_20 = (max(var_11, var_3));
    #pragma endscop
}
