/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 13265511755003261977;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 *= (((((arr_0 [i_0]) & var_3)) * (var_5 || 2841468485)));
        var_21 = ((59146 ? 4294967295 : 13265511755003262000));
        arr_2 [i_0] = (((((11010848103444721636 ? 2657952638 : 16777215))) ? ((max(var_1, var_4))) : (13265511755003261979 * 245)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 -= (max(((((min(var_11, var_2))) ? var_9 : (arr_3 [i_1]))), (((((((2973535052 || (arr_3 [7]))))) < (min((arr_4 [i_1]), var_2)))))));
        arr_5 [i_1] = (((arr_3 [i_1]) < var_2));
        var_23 = (59136 ? ((3665625342 ? 6415 : 6793090575580482607)) : ((min((arr_4 [i_1]), (arr_4 [i_1])))));
        var_24 = (~(~536868864));
    }
    #pragma endscop
}
