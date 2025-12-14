/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((!var_17), var_6));
    var_20 = ((((var_9 / (((min(252, -12)))))) - 0));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        var_22 = (min((((~(arr_1 [i_0] [i_0])))), (((~7) ? (((min((arr_0 [i_0]), (arr_0 [i_0]))))) : (min((arr_1 [i_0] [i_0]), 10182063025729773567))))));
        arr_2 [0] [0] = 90;
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 = (arr_3 [i_1]);

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_24 = 90;
            var_25 = (!(!0));
        }
        var_26 = (arr_4 [i_1]);
        var_27 = (((arr_4 [i_1]) != (arr_7 [i_1] [i_1] [i_1])));
    }
    #pragma endscop
}
