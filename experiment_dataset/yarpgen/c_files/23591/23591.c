/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((-var_4 - ((max((-353683081 != var_2), var_9))))))));
    var_16 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 -= (~119);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_18 = (((arr_0 [i_0]) || ((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_1 [i_1]))))));
            var_19 = (max(var_19, var_1));
            arr_5 [i_1] [i_1] [i_0] = ((max((arr_4 [i_0]), var_12)));
            var_20 = (min((max((arr_0 [i_1]), (arr_4 [i_0]))), (max((arr_4 [i_0]), (arr_0 [i_0])))));
        }
        arr_6 [i_0] = ((-(arr_1 [i_0])));
    }
    #pragma endscop
}
