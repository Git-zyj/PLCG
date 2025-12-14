/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_2;
    var_18 = (min(var_18, var_9));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_19 = arr_1 [i_0 - 3];
        arr_3 [i_0] = var_14;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (arr_4 [i_1]);
        var_21 = ((max(122, (arr_5 [i_1]))));
        var_22 = (min(var_13, 3156));
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        var_23 = (max(var_23, (((((((arr_8 [i_2] [i_2 - 2]) / (arr_8 [i_2] [i_2 - 3])))) ? ((max((arr_8 [i_2] [i_2 + 1]), (arr_8 [i_2 - 3] [i_2 - 3])))) : (arr_8 [0] [i_2 - 3]))))));
        var_24 = (arr_8 [i_2 - 3] [i_2 + 3]);
    }
    var_25 = (max((((65535 != (max(var_13, 13))))), ((230 ? 21 : 224))));
    #pragma endscop
}
