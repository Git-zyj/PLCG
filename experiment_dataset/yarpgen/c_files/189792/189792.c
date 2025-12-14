/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -3566;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = (max((((4611684918915760128 || 29) - (var_15 || 1))), ((((-809513552 + 65475) >= var_7)))));
                    var_17 = (arr_1 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (((((-((((arr_1 [i_0] [1]) == -6899)))))) ? ((-(arr_0 [i_2] [13]))) : ((((!(arr_2 [i_0] [i_0] [i_4 - 1])))))));
                                var_19 ^= 9223372036854775807;
                                var_20 = ((((~96) >= (arr_0 [i_0] [i_0]))));
                                var_21 |= (arr_10 [i_2] [i_1] [i_2] [i_1] [i_1] [10] [1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
