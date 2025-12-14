/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((min(var_3, 3989717469351636691))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 -= (~var_6);
        var_13 = (arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_1] = (arr_8 [i_1] [i_2] [i_1]);
            var_14 = (arr_5 [i_1] [i_2 - 2]);
        }
        var_15 &= var_3;
    }
    #pragma endscop
}
