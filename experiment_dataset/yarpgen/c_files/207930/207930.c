/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 7441;
    var_14 = (max(63382, ((-var_5 ? var_11 : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((var_7 < (arr_3 [i_0] [i_0]))) ? ((max(var_2, var_12))) : (~var_5)));
                arr_6 [i_0] [i_0] = (((((((4900 % (arr_1 [i_0] [19]))) % (arr_4 [i_0] [i_1])))) ? ((((!((min((arr_1 [i_0] [i_0]), 2153))))))) : ((((((arr_4 [i_1] [i_0]) ? var_4 : (arr_0 [i_1])))) ? var_7 : (((max(var_11, var_8))))))));
                var_15 = (var_2 ? ((max(63382, var_2))) : var_3);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_0] [i_4] = (((arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]) * ((min(var_3, (arr_4 [i_0] [i_3]))))));
                                var_16 = (((arr_11 [i_0] [i_2] [i_3] [i_4]) ? (arr_3 [i_0] [i_1]) : (((arr_4 [i_2] [i_4]) ? (arr_3 [i_4] [i_3]) : (arr_11 [i_4] [i_3] [i_2] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_17 = ((~(((arr_21 [i_5] [i_5] [i_5]) ? (~var_7) : (((2153 ? 18529 : 0)))))));
                    arr_24 [i_5] [i_6] = (max(((((min(var_7, (arr_23 [i_5] [i_5] [i_5] [i_5])))) ? (arr_17 [i_5]) : (max((arr_23 [i_5] [i_5] [i_5] [i_5]), var_2)))), 103));
                    var_18 = 18535;
                }
            }
        }
    }
    #pragma endscop
}
