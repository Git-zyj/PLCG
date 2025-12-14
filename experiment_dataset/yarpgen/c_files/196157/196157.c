/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = (arr_0 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_0] = max(var_10, (max(5789836489509691828, ((((arr_6 [i_0] [i_0] [i_0]) ? var_12 : (arr_6 [i_0] [i_1 - 1] [i_2])))))));
                            var_15 = (min(var_15, (((-1706973032 ? (max((((arr_12 [i_0]) ? var_1 : var_4)), (((arr_4 [i_2]) ? (arr_11 [i_3] [i_2] [i_1] [i_0]) : (arr_6 [i_1] [i_1] [i_1]))))) : ((((max(12656907584199859788, 13236511704269178616))) ? var_13 : var_9)))))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1] = (max((((arr_12 [i_1 - 1]) << ((((((var_3 ? var_8 : (arr_6 [i_0] [i_0] [i_1]))) + 101)) - 11)))), (((arr_6 [i_0] [i_1] [i_1 - 1]) ? var_13 : (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                arr_15 [i_0] [i_1] = (((max(-var_5, var_0))) ? (arr_8 [i_0] [i_1 - 1] [i_0]) : (((((31907 ? var_7 : (arr_3 [i_1 - 1])))) ? (min((arr_6 [i_0] [i_1] [i_1 - 1]), var_14)) : (((arr_4 [i_0]) ? (arr_3 [i_1]) : 12697910983647770885)))));
                arr_16 [i_1] [i_0] [i_0] = arr_10 [i_0] [i_0] [i_0] [i_0] [i_1];
            }
        }
    }
    var_16 = var_13;
    #pragma endscop
}
