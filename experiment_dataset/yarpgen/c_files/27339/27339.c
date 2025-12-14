/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = ((~((~((var_6 ? var_5 : var_0))))));
    var_14 = ((!((var_3 < ((var_0 ? var_9 : var_10))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_2 + 1] [i_2] [i_1 - 1] [i_0] = (arr_0 [i_1]);
                    arr_10 [i_2] [i_1 + 1] [i_0] = ((71 * ((((var_4 ? var_7 : (arr_0 [i_2 + 1]))) / (arr_4 [i_2 + 2])))));
                }
            }
        }
        var_15 = ((((((((arr_7 [i_0] [i_0] [i_0] [i_0]) >> 0)) << (arr_2 [i_0] [i_0] [i_0])))) ? ((var_5 ? ((((arr_5 [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [7])))) : ((var_7 * (arr_2 [i_0] [i_0] [i_0]))))) : (arr_8 [i_0])));
        var_16 = (max(((((((arr_6 [15] [i_0]) ? (arr_4 [i_0]) : var_3)) * (!13795528128275616668)))), -21));
        var_17 = ((!((var_3 && (arr_1 [i_0])))));
    }
    #pragma endscop
}
