/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((-((14 << (((arr_2 [i_1]) - 31341))))));
                arr_6 [i_0] [i_0] = (((((((-(arr_4 [i_1 - 2] [11])))) ? ((64 ? var_7 : 5321)) : -24188)) / (min(var_7, ((var_9 / (arr_4 [i_0] [i_0])))))));
                var_10 = ((~(((((!(arr_4 [i_0] [i_0])))) | -159946234))));
                arr_7 [i_0] [i_0] [i_0] = (max((((((min(33, var_6))) <= (((arr_2 [7]) ? (arr_0 [1] [i_0]) : (arr_4 [i_0] [i_0])))))), (max((arr_0 [i_1 - 1] [i_1 + 2]), -17))));
            }
        }
    }
    var_11 ^= ((var_7 ? var_3 : (((-159946218 - -1015042914012090051) - 2699))));
    #pragma endscop
}
