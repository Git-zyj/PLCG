/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (!var_11);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = ((~(~787)));
            arr_7 [i_0] [i_0] = ((~(arr_0 [i_0])));
            var_21 = (min(var_21, var_0));
        }
        arr_8 [i_0] [i_0] = (--3054707516);
        var_22 = (max(var_22, (arr_2 [i_0])));
        var_23 = ((~((-(arr_3 [i_0] [i_0])))));
    }
    var_24 = ((((!(~var_11)))));
    #pragma endscop
}
