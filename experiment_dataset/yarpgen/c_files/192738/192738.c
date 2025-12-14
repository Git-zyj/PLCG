/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 *= var_2;
        var_11 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_12 = (min(var_12, ((min(709732092, (max((arr_1 [i_1]), (arr_2 [i_1] [i_1]))))))));

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_13 = (max(var_13, (arr_4 [i_2 + 1])));
            arr_6 [i_2] [i_2] = (max((min(-91, (arr_0 [i_1]))), var_9));
            var_14 = (min(0, (((arr_4 [i_1]) ? (((arr_0 [i_1]) - 0)) : (arr_0 [i_2])))));
            var_15 = (max(((max((arr_4 [i_2 - 1]), 65535))), (arr_2 [i_2 + 3] [i_2 + 2])));
            var_16 -= (((((-81 - (arr_5 [i_2 + 1] [i_2 + 3])))) - (((arr_5 [i_2 + 1] [i_2 + 3]) - (arr_2 [i_2 + 1] [i_2 + 3])))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_9 [i_3] = (arr_2 [i_1] [i_3]);
            arr_10 [i_1] [i_3] = (min((arr_1 [i_1]), (min(var_6, (min(-113, (arr_5 [i_1] [i_3])))))));
        }
    }
    var_17 = var_2;
    #pragma endscop
}
