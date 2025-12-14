/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (max(255, 62843));
                var_19 = 2346247740;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_20 = min(((var_7 ? (arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1]) : var_4)), var_8);
                                arr_13 [i_0] [i_0] [i_2] [i_3] [7] = ((((!(473625439 | -51)))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                var_21 -= ((-(arr_14 [i_5] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 2])));
                                var_22 = (((15867 | -1775606927) ? var_4 : (arr_10 [0] [i_2 - 1] [6] [i_3] [1] [7] [i_3])));
                                var_23 -= var_9;
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((-(arr_2 [i_2 + 1])));
                                arr_18 [i_0] [i_1] [i_2] [i_0] [i_2 + 1] = 1294989257;
                            }
                            arr_19 [i_0] [i_0] [i_0] [i_0] = (((~(~1948719535))));
                            var_24 = (min(var_24, (((((((var_17 ? var_18 : var_13)) >= ((min(223, 1))))) ? (((~(var_16 | var_6)))) : (min(var_18, var_4)))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, var_3));
    #pragma endscop
}
