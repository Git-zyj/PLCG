/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_8 ? 6 : var_7)))));
    var_13 = (max((((var_8 ? 1 : var_9))), var_8));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_14 = 2040;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_15 = ((3266968557345426201 && (arr_2 [i_0])));
            var_16 = (((!17924044685383647599) >= ((-(arr_0 [i_0] [i_1])))));
            arr_5 [i_0] [i_0] = ((-(arr_1 [i_0 + 2] [i_0 - 3])));
            var_17 = ((2850945776 % (var_8 ^ 11)));
        }
        var_18 = ((((((11 ? (arr_2 [i_0]) : var_3)))) ? (arr_0 [i_0 - 2] [i_0]) : 43));
    }
    #pragma endscop
}
