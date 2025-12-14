/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = (((min(3631731714, ((3631731714 ? 3898147317 : 3631731699)))) | 34130));
    var_13 = ((var_5 ? var_0 : 0));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = ((-31405 ? ((((max(0, 6942394427069412321))) ? var_6 : (((1928792469 ? (arr_1 [i_0]) : 1610612736))))) : (!4658271184676264810)));
        var_15 = (min(var_15, ((max(((((max(-1738401852, 22270)) | ((min((arr_1 [i_0]), 180)))))), (((((75 >> (((arr_0 [i_0] [i_0]) - 24268))))) ? 4294967295 : 41271)))))));
        var_16 = (min((arr_0 [i_0] [i_0]), (((-3975 | -7888) ? var_6 : (arr_1 [i_0])))));
        var_17 = ((-(((!(arr_0 [i_0] [i_0]))))));
        var_18 = (var_9 ? var_5 : var_9);
    }
    #pragma endscop
}
