/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((1 ? 192 : 18446744073709551590)) * (!48)))) ? (var_0 < var_2) : ((-(~var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = -106;
                var_16 = (max(var_16, ((((((!((max(31568, 0)))))) <= var_10)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2 + 1] [i_3] = ((min((arr_0 [i_1 - 2]), -77)));
                            arr_12 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] = ((~(((var_0 ? var_9 : (arr_8 [i_0 + 2] [i_0] [i_0]))))));

                            for (int i_4 = 3; i_4 < 22;i_4 += 1)
                            {
                                var_17 *= (((((arr_13 [i_0 + 1] [i_1 - 1] [i_2] [i_2] [i_2 - 1]) | var_4)) <= var_12));
                                var_18 = (((min(var_3, var_8))));
                                var_19 = ((((min(2147483647, var_5))) ? (((-(arr_9 [i_0] [i_1] [i_0] [i_0] [17])))) : 3450420530941444179));
                                var_20 = (((var_5 ^ 2305843008139952128) / ((((max(var_4, (arr_3 [i_0] [i_1])))) ? ((var_12 ? var_2 : var_1)) : ((min(var_2, var_0)))))));
                            }
                            arr_15 [i_3] [i_0] [i_1] [i_0] [i_0] = (((max(var_2, 16017)) * (((((arr_13 [i_3] [i_3] [i_2 - 1] [i_2] [i_2 - 1]) == -4))))));
                        }
                    }
                }
                arr_16 [i_0] [1] = -2218763077;
                var_21 = (min(var_21, 6700773858861947249));
            }
        }
    }
    #pragma endscop
}
