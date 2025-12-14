/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [5] [i_0] = ((~(arr_1 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_18 = (var_14 ? (~64512) : 3801734704761247573);
            var_19 = (var_9 || 3801734704761247570);
            var_20 = ((var_17 | (arr_1 [18] [18])));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_21 = (arr_5 [12] [i_0] [i_0]);
            var_22 = 195;
            var_23 = (max(var_23, (((255 ? (~var_7) : ((30765 ? 3801734704761247591 : 5156249682944349417)))))));
            arr_10 [i_0] [17] [i_2] = var_10;
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_14 [i_3] [5] = (max((((arr_12 [i_3]) + ((((arr_11 [i_3]) / var_2))))), var_10));
        var_24 += ((var_1 * (max((2612 | var_2), (((arr_13 [i_3]) ? var_1 : var_4))))));
    }
    for (int i_4 = 3; i_4 < 6;i_4 += 1)
    {
        var_25 = ((~(((((var_13 ? 65535 : 14645009368948304066)) < (((max(var_4, (arr_8 [i_4] [i_4] [i_4 - 3]))))))))));
        var_26 |= var_10;
        var_27 = ((~(arr_13 [i_4 - 2])));
    }
    var_28 = var_12;
    var_29 = var_7;
    #pragma endscop
}
