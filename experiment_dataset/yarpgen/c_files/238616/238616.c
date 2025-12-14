/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (max((arr_0 [i_0]), (max((arr_0 [i_0]), var_14))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [15] = (((((147639857 ? 4184739605504158368 : (arr_4 [i_1] [10] [i_0])))) ? 8717045164000559785 : (((-(arr_1 [19]))))));
            var_20 = (max(var_20, var_15));
        }
    }
    var_21 = var_16;
    var_22 = (min(var_22, var_8));
    #pragma endscop
}
