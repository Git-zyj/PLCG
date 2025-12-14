/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_19 = (max(var_19, (((((((var_15 % var_1) || var_16))) > var_3)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                var_20 = (32767 | 1);
                var_21 = (max(var_21, (var_8 - var_4)));
                arr_10 [i_1] = var_15;
                var_22 = var_13;
            }
            arr_11 [i_1] [i_1] = (var_0 | var_9);
            var_23 = (((min(var_11, var_9)) ^ (var_5 & var_9)));
        }
        var_24 = -32767;
        var_25 = (max(((((-32760 / 1990683005) > var_7))), (187 | var_4)));
    }
    #pragma endscop
}
