/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_5 ? var_5 : (min(var_7, var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((((min(((((-2147483647 - 1) || 3470341660761866513))), (max((arr_2 [i_2]), (arr_3 [i_1])))))) ? ((4294967289 << (!var_10))) : 22849)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_15 = (((min(var_8, (arr_6 [i_4 + 2]))) > (((arr_0 [i_3 + 4] [i_4 + 1]) ? (arr_10 [i_2]) : (arr_3 [i_4 + 3])))));
                                var_16 += (((!42664) ? var_1 : var_5));
                                arr_18 [i_0] [i_2] [i_2] [i_4 + 2] = (((42664 + (var_10 > 118))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
