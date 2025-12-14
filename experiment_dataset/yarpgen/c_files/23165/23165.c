/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((var_16 + (((min(var_4, var_7))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [0] = ((-(arr_1 [i_0])));
            var_20 = (!var_4);
        }
        arr_5 [i_0] = var_18;
    }
    #pragma endscop
}
