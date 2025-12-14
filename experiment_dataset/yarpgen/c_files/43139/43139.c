/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (!var_9)));
    var_17 = (!-33);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((~(((!(arr_1 [i_0])))))));
        var_18 = (-(arr_0 [i_0] [i_0]));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_19 ^= (!-4642664863386421727);
            arr_6 [i_0] [i_1] = (arr_0 [i_0] [i_0]);
        }
        var_20 = ((~(~1)));
        var_21 += ((~(arr_3 [9])));
    }
    #pragma endscop
}
