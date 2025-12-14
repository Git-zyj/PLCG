/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = 143;

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] [i_0] = (arr_3 [5] [5]);
            arr_6 [i_0] [2] [9] = 8413023923804183554;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_12 += -12;
            var_13 = 11;
        }

        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_14 = 1139259582;
            arr_13 [i_0] [i_3] [i_0] = (((-118 * 27138) / (-12 * 12980)));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_15 = (arr_1 [i_0] [i_4]);
            arr_17 [i_0] [i_4] = ((-17350433932087264325 < ((var_0 ^ (arr_2 [i_0])))));
        }
    }
    var_16 &= ((~((14348208738853366749 ? (~var_4) : var_4))));
    #pragma endscop
}
