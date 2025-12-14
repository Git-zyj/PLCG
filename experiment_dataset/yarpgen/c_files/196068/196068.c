/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((((-3240460386724040990 ? (arr_2 [i_0]) : ((min((arr_4 [i_0] [i_1]), var_1)))))) ? (min(((var_2 - (arr_3 [i_1]))), var_6)) : (arr_4 [i_0] [i_0])));
                var_13 &= 0;
                arr_5 [i_0] [i_1] [i_1] = ((+(((arr_2 [i_1]) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
            }
        }
    }
    var_14 -= min((((((34359738336 ? var_11 : var_6))) ? var_2 : (((min(91, -541)))))), var_4);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3] = (((~1) ? (min(((var_3 ? -34359738337 : 1)), var_1)) : (((var_8 >> (((arr_7 [i_3 - 1] [i_3 + 1]) + 2728049818435896081)))))));
                arr_12 [i_2] = (min((((((min(var_3, (arr_6 [i_2]))))) + (arr_7 [i_3 - 2] [i_3]))), ((((((17647 ? 91 : (arr_8 [i_3 - 2])))) ? ((0 ? var_1 : (arr_8 [i_2]))) : 0)))));
                var_15 = (min((((arr_7 [i_3 - 3] [i_3]) / (min((arr_7 [i_2] [i_3]), var_8)))), (((((var_8 ? var_7 : var_7))) ? ((var_10 ? var_2 : var_6)) : (((var_9 ? var_7 : 0)))))));
            }
        }
    }
    var_16 = ((var_11 ? 0 : ((var_11 ? -3934 : ((var_0 ? 3545514707001107916 : var_3))))));
    var_17 = (min(((34359738336 ? (((-1 ? 119 : 0))) : ((var_0 ? var_1 : var_9)))), (var_11 + var_3)));
    #pragma endscop
}
