/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (max(3489285020, 1));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (((((var_9 ? (!10285) : ((max((arr_1 [i_0]), 55250)))))) ? var_0 : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 = 55250;
            var_19 = (((((var_9 ? 60999 : ((55250 ? 18446744073709551615 : 11307271210925525288))))) ? 65 : (~var_9)));
        }
        var_20 = (((((0 ? 65 : var_6))) ? (!55251) : ((var_1 ? var_3 : (arr_1 [13])))));
    }
    var_21 = ((var_8 ? (((((min(-15, var_2))) ? ((14939494914622868135 ? 50976 : -16)) : 28433))) : ((var_3 ? var_13 : 7396))));
    #pragma endscop
}
