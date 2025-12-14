/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = var_1;
                    var_11 |= ((((((((((!(arr_4 [16] [i_2]))))) > -2078196522645661108)))) > (max(2078196522645661108, (arr_8 [18] [18] [i_2] [i_2])))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_5 [7] [i_0]);
                    var_12 = (((arr_6 [16] [i_2]) + (((!((((arr_8 [i_0] [i_0] [i_1 + 3] [i_0]) ? var_5 : (arr_8 [1] [i_1] [i_2] [i_0])))))))));
                    var_13 = (min(var_13, (arr_6 [i_0] [i_1])));
                }
            }
        }
    }
    var_14 = (max(var_14, (((-var_6 ^ ((var_7 ? ((2078196522645661108 ? var_4 : 16368547551063890507)) : (((var_5 ? var_1 : var_1))))))))));
    #pragma endscop
}
