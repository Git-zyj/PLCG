/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((-var_15 ? (-16202 == -34) : 1));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((1271593036 ? 24 : -1404));
        var_20 *= (arr_1 [6] [6]);
        var_21 = (((((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))) * -25677));
        var_22 = (max(668952681, ((var_16 ? ((min(9007199254675456, 9))) : (min(4, 8475680149711894897))))));
    }
    var_23 = var_5;
    #pragma endscop
}
