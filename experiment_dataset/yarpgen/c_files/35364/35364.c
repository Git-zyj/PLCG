/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-9 ^ 1151295107) / (((((19336 & var_8) || (((4294967295 ? 93256402 : var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((((((((arr_0 [i_1]) | (arr_4 [i_1]))) & ((~(arr_0 [i_0])))))) & (0 & 4201710885)));
                var_16 = (((1 == 1) << ((((((var_9 < (arr_5 [i_1]))) ? ((var_0 ? (arr_0 [i_0]) : 6161)) : ((4068674027 ? 31 : 46383)))) - 10041))));
                var_17 = (((((((((arr_1 [i_0]) != (arr_1 [i_0]))))) + (0 % 134201344))) - ((((var_4 > var_6) / (var_12 >> 0))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = ((((-31077 % (!var_6))) << (((-74 ^ -51) - 110))));
                                var_19 = ((((((!var_2) - (var_13 + var_7)))) ? (--96) : (((-(arr_9 [i_0] [16] [1] [1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
