/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((var_0 + var_19), var_17));
    var_21 = max((max((!var_15), (max(var_3, 0)))), var_12);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_23 = (max(var_23, ((max((8888 * 11897), (((arr_8 [i_0] [12] [i_2] [i_3] [i_0] [i_1]) ? var_2 : ((min(-1, (arr_6 [i_0] [i_1] [i_2] [i_0])))))))))));
                        var_24 = arr_0 [i_1];
                        var_25 ^= ((+(((arr_1 [i_2] [i_3]) ? (arr_1 [i_0] [i_0]) : (arr_4 [i_0])))));
                    }
                }
            }
        }
        var_26 |= var_3;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_27 = (arr_3 [i_4] [i_4] [i_4]);
        var_28 = (max(var_28, (arr_2 [i_4 - 2] [i_4] [i_4 - 2])));
        var_29 = (max(var_29, ((((((arr_13 [i_4 - 2]) > var_7)) ? (arr_2 [i_4] [i_4 + 1] [i_4]) : var_5)))));
    }
    var_30 = (max(var_30, ((min(14191, var_14)))));
    #pragma endscop
}
