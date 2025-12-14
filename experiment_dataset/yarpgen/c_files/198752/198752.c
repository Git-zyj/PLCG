/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((((4671007306813518206 / -6238) * (-6238 / -32747)))) ? ((var_16 ? var_10 : (min(var_5, 7654330160537899185)))) : ((((((var_0 ? var_14 : var_2))) ? ((709 ? 6238 : var_15)) : (-6239 / 6238)))))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = ((((((var_12 >= (arr_1 [16]))))) ? (((-(arr_0 [i_0])))) : ((+(((arr_0 [i_0]) ? var_0 : var_7))))));
        var_20 = ((((min((((arr_1 [i_0]) ? var_11 : -6218)), ((min((arr_1 [i_0 - 1]), (arr_0 [i_0]))))))) ? ((((min(-6216, -4059))) / (44 * -32763))) : ((+((max((arr_1 [i_0]), -6238)))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_5 [3] [i_0] = ((253 << ((((((9223372036854775807 ? (arr_0 [i_0 - 3]) : var_9)) + 31733)) - 11))));
            var_21 = (max(var_21, (~var_4)));
        }
    }
    #pragma endscop
}
