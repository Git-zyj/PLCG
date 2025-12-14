/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (9904590136846155666 != 22978);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_1] [13] = 3529397928;
            var_13 = 1371134776689950778;

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                var_14 = var_4;
                arr_10 [i_2] = 1371134776689950802;
                var_15 -= 17787613129082075901;
                arr_11 [1] [i_1] [i_1 + 3] = (17787613129082075887 * 9904590136846155652);
            }
        }
        var_16 = 1449204615;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_17 *= (arr_0 [i_3 - 1]);
        arr_14 [i_3] = arr_5 [i_3];
    }
    var_18 = 612436890;
    #pragma endscop
}
