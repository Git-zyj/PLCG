/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 = ((-(arr_1 [i_0 + 1] [i_0 + 2])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0 + 1] [i_1] = var_11;
            arr_5 [i_1] [i_1] = ((2797229616 ? (!var_18) : (arr_1 [i_1] [i_0 + 2])));
            var_21 = ((((var_13 ? 1497737695 : (arr_1 [i_0] [i_1]))) << ((((31 ? 2797229616 : var_6)) - 2797229600))));
            var_22 = -var_11;
            arr_6 [i_0] = ((((1497737673 == (arr_1 [i_1] [i_0 + 2]))) ? ((1497737680 ? (-127 - 1) : (arr_1 [i_0 + 1] [i_0 + 1]))) : (~1735030947)));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_23 = (((!63) ? 1767728510 : var_3));
            var_24 *= var_19;
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            var_25 ^= 1902815656;
            arr_12 [i_0] [i_3] [i_3] = (((arr_0 [i_3 + 1] [i_3 + 1]) ? (arr_0 [i_3 - 3] [i_3 - 3]) : (arr_0 [i_3 - 1] [i_3 - 1])));
        }
        var_26 += ((1497737669 ? 1073741824 : -1513736231));
    }
    var_27 = var_7;
    var_28 = (max(var_28, ((((((var_7 << (((var_14 + 4274404079521081186) - 5)))) ^ var_12))))));
    var_29 = 4294967288;
    #pragma endscop
}
