/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_10 ? 2175612201092431844 : ((-((var_6 ? var_9 : 16271131872617119777)))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [14] &= ((-(max(8847481797692452296, ((var_7 ? 16271131872617119772 : (arr_1 [4])))))));
        var_14 = (~-1090483249);
    }

    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_15 *= var_10;

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_16 = (~-8192);
            var_17 = ((((arr_0 [i_1] [i_1]) && (arr_0 [i_1] [i_1]))));
        }
    }
    var_18 = (-707959401 + -31403);
    #pragma endscop
}
