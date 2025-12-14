/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_13, ((((var_4 ? var_4 : var_9)) % var_5))));
    var_16 = ((max(var_7, ((var_2 ? var_13 : var_2)))) + -var_3);
    var_17 = (var_14 ? (((((var_0 << (var_2 + 1918831203882020239)))) ? var_2 : var_7)) : var_5);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((var_5 ? var_7 : var_2))) ? -var_7 : var_11)));
        var_18 = var_11;
        var_19 = ((((max(var_8, var_12))) < (var_14 < var_1)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 = min((((!(((var_10 ? var_11 : var_13)))))), (max(var_4, var_9)));
        arr_5 [i_1] = ((var_7 < var_13) ? (!var_8) : (((~var_4) ? var_5 : (-9223372036854775794 > 9223372036854775794))));
        var_21 = (min((var_12 ^ var_8), var_1));
        arr_6 [i_1] = (-15 >= -8752318927049575131);
        arr_7 [i_1] [i_1] = (min(var_11, (40760 / 8752318927049575157)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = min(((~(min(4743474994578339592, 23351)))), var_8);
        var_22 ^= (((min((max(var_13, var_7)), (max(var_12, var_0))))) ? ((((min(var_9, var_9))) ? ((var_10 ? var_12 : var_13)) : var_11)) : ((((var_5 ? var_8 : var_7)))));
        var_23 = (max(var_23, var_8));
    }
    #pragma endscop
}
