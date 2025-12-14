/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_5 ? var_1 : (var_9 - var_1))), (((var_5 > (166 && -7834315302929104655))))));
    var_16 = ((var_10 ? (((((var_14 ? var_5 : var_13))) ? (min(var_0, var_9)) : var_9)) : (var_0 > var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((max(var_12, (arr_3 [i_0]))))) ? ((90 ? (((max(30388, 1)))) : ((89 ? 2033894440614768764 : -88)))) : var_7));
                arr_6 [i_0] = ((((((arr_2 [i_0] [i_0]) && (arr_4 [i_0] [i_1] [17]))) ? ((var_10 ? (arr_2 [i_0] [i_0]) : var_0)) : (arr_4 [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_0] [i_0] [i_0] = (arr_9 [i_1] [i_0]);
                            arr_12 [i_0] [i_0] [i_2] [i_3] = (max((((!(arr_0 [i_0])))), ((((max(var_5, var_6))) ^ ((var_14 ? (arr_1 [i_0]) : var_5))))));
                            arr_13 [i_3] [i_0] [i_2] [i_1] [i_0] [15] = ((4715 ? -2912 : 39756));
                        }
                    }
                }
                var_17 = (((arr_0 [i_0]) * (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])));
                var_18 = (max((((~var_13) ^ (((532731777987471368 ? 60224 : 30388))))), (((166 ? 1 : 128)))));
            }
        }
    }
    #pragma endscop
}
