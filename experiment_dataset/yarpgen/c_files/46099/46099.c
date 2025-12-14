/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_10 = ((max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1]))));
            var_11 -= (arr_1 [i_1] [i_1]);
            var_12 = (min((max((arr_4 [i_0 + 2] [i_0 + 2] [7]), (arr_1 [i_0] [i_0 + 2]))), (arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2])));
        }
        var_13 = (((arr_2 [i_0] [i_0]) << (((((arr_1 [i_0] [i_0 - 1]) ? ((min(var_4, var_9))) : (arr_2 [i_0 + 2] [i_0 + 2]))) - 219))));
        var_14 = (max((var_8 != var_2), (min((arr_0 [i_0]), var_1))));
    }
    var_15 *= (((var_8 << (29464 - 29460))));
    #pragma endscop
}
