/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((255 << ((((var_5 ? var_0 : var_0)) + 8665057930474125596))))));
    var_21 = 65281;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = ((-909796747 / (16384 - 909796747)));
        var_23 = ((+((var_10 << (((arr_1 [i_0]) - 9795))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_3 [i_1] [i_1 + 2]) <= ((((arr_2 [i_1 + 3] [i_1 + 1]) != 49152)))));
        var_24 = (max(var_24, (arr_3 [13] [i_1])));

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_25 = ((arr_7 [i_1 + 1] [i_1 + 3]) + (arr_7 [i_1 - 2] [i_1 + 1]));
            arr_8 [i_1] [i_2] = (((((((arr_4 [5]) >= var_7)))) > (arr_4 [i_2 + 1])));
            var_26 = (max(var_26, (((!(!var_11))))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_13 [i_1 + 1] [i_3] = (((arr_7 [i_1] [i_3]) >= (arr_10 [i_1] [i_1 + 3])));
            var_27 = (arr_3 [i_1] [i_3]);
            var_28 = (min(var_28, var_15));
        }
        var_29 -= ((15698574461724576374 ? (271213600 - 49168) : 5186403810529240829));
    }
    var_30 = (((var_6 & var_1) < (~var_10)));
    #pragma endscop
}
