/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((733566636 ? ((26627 ? 1916597702 : (-2147483647 - 1))) : 0))) ? -255546224253575257 : (max((0 + var_1), var_9))))));
    var_15 ^= (min(var_2, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_2 [i_0] [15] [18])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = 61935;
                                var_18 += (((((var_12 ^ (arr_3 [i_4 + 1])))) ? ((((!-124) ? (arr_1 [i_4 - 1]) : 19782))) : (((arr_6 [i_4 - 1] [i_4 + 3] [i_4 + 3]) ? (min(7812238555550289254, var_13)) : (arr_6 [i_0] [i_0] [i_0])))));
                                var_19 ^= (max((arr_11 [i_0] [i_3] [i_2] [i_4 + 3] [i_4 - 1]), 85));
                                arr_14 [i_0] [i_1] [i_2] = ((-((~(((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 + 3]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_0 [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 ^= var_10;
    var_21 = (((-1728454844 && var_10) ? ((~((min(var_11, 45717))))) : var_11));
    #pragma endscop
}
