/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min((var_6 / var_6), -21416)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (arr_6 [i_2]);
                    arr_10 [i_0] = -8192;
                    var_15 = ((max(((9114334045126616325 ? 18446744073709551615 : (arr_0 [i_0] [i_0]))), (((-23788 ? (arr_8 [i_0] [i_1] [i_0] [i_1]) : (arr_1 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_2] = (-var_5 ? (min((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_1] [i_2] [7] [i_0] [i_4]) : (arr_9 [4] [4] [i_2]))), (arr_9 [i_0] [i_1] [i_2]))) : var_10);
                                arr_17 [i_0] [i_1] [i_3] = (((min(9332410028582935269, 16384)) >> (((~1) + 65))));
                                arr_18 [i_4] [i_0] [i_2] [i_0] [i_0] = -var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 *= var_9;
    var_17 = (!2251798739943424);
    #pragma endscop
}
