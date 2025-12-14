/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_3));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [7] = -1130030782283114275;
        var_20 = (((var_3 ? 19652 : 1)));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_21 = 4733;
        var_22 ^= ((min((arr_3 [i_1 + 1]), (arr_3 [i_1 - 1]))));
        var_23 = (max(var_23, -9223372036854775802));
        arr_8 [i_1] = ((max((max((arr_5 [i_1]), 2385067969717269332)), var_9)));
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_24 = (arr_9 [i_2] [13]);
        var_25 = (arr_1 [i_2]);
        var_26 = (!-2385067969717269332);
        var_27 *= (((!16) ? (3424994932 - 13068853560280703729) : (arr_10 [i_2])));
    }
    #pragma endscop
}
