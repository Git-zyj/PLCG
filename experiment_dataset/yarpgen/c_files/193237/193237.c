/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = ((!((((max(-31415, var_2))) && (-9223372036854775807 - 1)))));
                var_20 = ((((min((arr_3 [i_0 + 3] [i_1 + 2]), (arr_1 [i_1 + 2])))) ? (((arr_3 [2] [i_0 - 2]) ? (arr_1 [i_0]) : (arr_1 [i_0 + 1]))) : ((~(arr_3 [i_1 - 1] [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = (((((max(31414, var_2)) ? 31425 : ((1 ? var_15 : -31426))))));
        arr_10 [i_2] [i_2] = (arr_0 [i_2] [i_2]);
    }
    #pragma endscop
}
