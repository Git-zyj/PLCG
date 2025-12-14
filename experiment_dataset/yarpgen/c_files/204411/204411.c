/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 -= (((13200266489380134611 & (arr_1 [i_1]))));
                var_19 = (min((min(((((arr_0 [i_0]) / 1))), (arr_2 [i_0] [i_0] [i_1 - 1]))), (((!((max(var_11, (arr_0 [i_1])))))))));
                var_20 = (min((((((arr_3 [i_0] [1]) ? (arr_0 [i_1]) : (arr_0 [i_0]))) - var_16)), ((min((max((arr_1 [14]), (arr_1 [i_1]))), (arr_3 [i_1 + 1] [i_1 - 1]))))));
                var_21 += ((+(max((arr_2 [i_1 + 3] [i_1 + 3] [i_1 - 1]), (arr_2 [i_1 + 3] [i_1 + 3] [i_1 + 2])))));
                var_22 = (min(var_22, var_13));
            }
        }
    }
    var_23 = 11;
    var_24 = ((var_0 ? (((max(11, 255))) : (var_6 / var_5))));
    #pragma endscop
}
