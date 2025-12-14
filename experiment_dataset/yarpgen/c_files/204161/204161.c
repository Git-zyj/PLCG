/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min((max(var_6, var_14)), ((min(var_5, var_11)))))) ? ((((max(var_16, var_12))) ? (~65535) : var_4)) : (!var_16)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((-(arr_4 [i_1] [21] [10]))))));
                                var_20 = (min(var_20, ((min(4611404543450677248, 127)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_21 = ((((min((arr_0 [i_0 - 2]), (arr_0 [i_7])))) ? ((max((arr_0 [i_5]), (arr_0 [i_0 + 1])))) : (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 - 1])))));
                                var_22 |= (max(((((arr_0 [i_5]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_7])))), 4611404543450677245));
                                arr_21 [1] [i_1] [0] [i_1] [i_1] [i_0 + 3] = (arr_16 [i_0] [i_1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 *= (~var_13);
    #pragma endscop
}
