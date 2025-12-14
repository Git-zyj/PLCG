/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((var_7 ? ((max(((max(1, var_9))), var_16))) : (~-414336073)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [12] [i_1] [i_0] = 414336071;
            var_20 = var_14;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_21 = (arr_5 [15]);
            var_22 += (((~1) ? (arr_7 [i_0] [12] [14]) : (arr_7 [i_2] [0] [i_2])));
        }
        var_23 = ((~(((1288527932334224213 != 1) ? (~var_13) : ((var_3 ? -68 : var_2))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_24 *= (arr_5 [i_3]);
        var_25 = 0;
        var_26 = -var_4;
    }
    var_27 = (min(var_27, (((((var_6 & ((max(var_15, var_8))))) % ((107 ? ((var_4 >> (var_16 - 48240))) : var_6)))))));
    #pragma endscop
}
