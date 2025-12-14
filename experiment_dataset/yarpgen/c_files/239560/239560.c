/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((((((max((arr_2 [i_0] [i_0]), (arr_2 [i_0 - 1] [i_0]))) && (!16384)))) == (arr_0 [i_0]))))));
                    var_12 = 42867340;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((arr_7 [i_0] [i_2 - 1] [15]) > ((var_10 + (arr_13 [i_4 + 1] [i_4 + 1] [i_4 - 1]))))))));
                                var_14 += ((arr_13 [i_1] [i_1] [i_4 - 4]) | (arr_5 [i_0 - 1]));
                                var_15 = ((~(arr_6 [i_1] [i_1] [3])));
                            }
                        }
                    }
                    var_16 = (min(var_16, ((max((min(42867340, (arr_8 [i_0 + 2] [i_0]))), ((((arr_2 [i_2 - 1] [i_0 + 2]) & (arr_2 [i_2] [i_0 + 2])))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_22 [i_6] [15] = ((((((1 ? var_1 : (arr_10 [i_6] [i_5] [i_5] [i_6] [i_7] [5]))))) ? (42867359 >> 1) : ((((min(4194176, (arr_13 [i_5] [i_6] [i_7])))) - 8608566785420798460))));
                    var_17 &= (((max(42867359, var_10))) ? 29 : (min(((min((-32767 - 1), 223))), (((arr_2 [7] [i_5]) ? (arr_12 [i_5] [i_5] [i_5] [i_5] [1] [i_7]) : var_1)))));
                    var_18 *= (((((var_7 << (arr_2 [i_6] [16]))) / (~var_2))));
                }
            }
        }
    }
    #pragma endscop
}
