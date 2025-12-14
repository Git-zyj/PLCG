/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_11));
    var_13 = (min(102, ((min((min(var_5, var_9)), var_2)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, var_2));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = ((-((-18 - (arr_0 [i_1])))));
                    arr_7 [i_2 - 1] [i_1] = ((((arr_3 [i_2 - 1] [i_2 + 1] [i_2]) ? (arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 2]) : (arr_3 [i_2 - 1] [i_2 + 1] [i_1]))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_16 = (max(var_16, ((((((((20 + (arr_8 [i_3])))) ? (min((arr_9 [8]), (arr_9 [2]))) : -var_1)) / (max((arr_9 [4]), (arr_8 [i_3]))))))));
        var_17 = (min(var_17, ((min(((((min(-2108796219841062003, 63)) >= ((((!(arr_9 [12])))))))), (min((~-42), var_1)))))));
    }
    #pragma endscop
}
