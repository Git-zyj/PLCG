/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (var_4 > var_2)));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0 - 1] [i_0] = var_4;
                    var_11 += ((-(arr_9 [i_2 + 2] [i_1])));
                    var_12 = (min((arr_8 [i_0 + 1] [i_1 + 1] [i_2 - 1]), ((-(arr_8 [i_0 - 1] [i_1 + 2] [i_2 - 1])))));
                }
            }
        }
        var_13 = (max(var_13, ((((var_7 + var_7) | (~var_2))))));
        arr_11 [i_0] [i_0] = (arr_4 [i_0 - 1] [i_0] [i_0]);
        var_14 -= var_7;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_15 = (arr_12 [i_3]);
        var_16 = (min(var_6, (arr_13 [i_3])));
        var_17 = (((((arr_12 [i_3]) | (arr_12 [i_3]))) + var_7));
        var_18 = (((((arr_13 [i_3]) ? (arr_12 [i_3]) : (arr_13 [i_3]))) & ((((max((arr_13 [i_3]), var_4))) ? (arr_12 [i_3]) : 578592778))));
    }
    #pragma endscop
}
