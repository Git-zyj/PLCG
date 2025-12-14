/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (max(var_11, (((min(-1903314708, ((max((arr_0 [i_0]), (arr_2 [i_0] [i_0]))))))))));
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0])));
        var_12 = (max(1903314725, (min((((arr_1 [i_0] [i_0]) / -8)), 1))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_13 = (((1903314694 + (((arr_2 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))))));
            var_14 = ((-((max(var_7, (arr_0 [i_0]))))));
        }
    }
    var_15 = min(((((min(var_0, var_4))) ? var_3 : (((-1903314695 ? -6 : 4294967295))))), -var_9);
    var_16 = (((((-(var_9 + var_4)))) ? var_7 : var_5));
    #pragma endscop
}
