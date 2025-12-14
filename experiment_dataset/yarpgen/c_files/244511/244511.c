/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_13 = (min(var_13, ((max(((var_8 ? ((max(var_1, var_0))) : 1)), var_7)))));
        arr_2 [i_0] [i_0] &= (((max(236446479, 1)) != 255));
    }
    var_14 = (max(var_14, (((var_6 ? (!149) : (max((max(var_6, 9223372036854775807)), (!var_6))))))));
    var_15 = (min((min(var_8, (!var_12))), ((((!15) && 8161)))));
    var_16 = (max(var_16, var_8));
    #pragma endscop
}
