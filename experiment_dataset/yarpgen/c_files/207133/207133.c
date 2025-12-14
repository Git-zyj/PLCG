/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((((arr_0 [i_0]) < (arr_5 [i_0])))) << (((arr_3 [1]) + 63))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, (((-((88 ? var_5 : (arr_4 [i_1]))))))));
                            var_12 = ((((((max(var_7, -88))) ? (((min(var_0, (arr_1 [i_0]))))) : ((var_1 ? var_10 : var_7)))) & (((arr_9 [i_2 + 2] [i_2 + 2] [4]) << (var_4 - 10548087314634864825)))));
                            var_13 = (arr_6 [i_2]);
                        }
                    }
                }
            }
        }
    }
    var_14 = (var_10 <= var_3);
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_15 = (max(var_15, (arr_6 [i_4 + 2])));
                var_16 = (max(var_16, var_8));
            }
        }
    }
    var_17 = (((max(((var_10 ? var_1 : -77)), (((6515445948403369584 ? var_9 : var_0))))) | (max((var_10 | 0), var_2))));
    #pragma endscop
}
