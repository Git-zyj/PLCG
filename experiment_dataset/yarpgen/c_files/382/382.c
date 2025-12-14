/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = ((-11 ? (((((-2 ? (-127 - 1) : -9)) > var_15))) : ((max(var_8, (var_7 != 96))))));
        var_17 = (max((min(-var_1, 30)), (arr_0 [i_0])));
        var_18 = (max(var_18, (((((((~127) ? (~1) : ((min(var_11, var_4)))))) ? ((-122 * (arr_1 [i_0]))) : 31)))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_19 = (max(-88, (arr_2 [i_1 - 1])));
        var_20 = (min(((var_6 ^ (arr_3 [i_1 + 1] [i_1 - 1]))), -var_11));
        arr_4 [i_1] = 0;
    }
    var_21 = min((((-91 > ((min(-32, var_9)))))), var_12);
    var_22 = var_14;
    #pragma endscop
}
