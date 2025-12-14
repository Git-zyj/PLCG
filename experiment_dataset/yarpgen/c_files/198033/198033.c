/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((-(min(var_9, var_15))))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_0 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_22 = (arr_3 [i_0] [i_0]);
            var_23 ^= var_13;
            arr_4 [24] [i_1] = (~491424418008368342);
            arr_5 [i_0] = (((arr_1 [i_0 - 2]) ? (arr_0 [i_0] [i_0 + 2]) : (arr_1 [i_0 + 1])));
            var_24 -= (arr_2 [i_1] [i_0]);
        }
    }
    var_25 = 491424418008368338;
    #pragma endscop
}
