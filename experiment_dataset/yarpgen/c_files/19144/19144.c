/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_11 = 255;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_12 = (max(var_12, ((max((max(var_5, var_10)), 32419)))));
            var_13 = (max(((13 ? 5295182990318235467 : 0)), -32420));
        }
        var_14 = (max(var_14, var_7));
        var_15 = var_6;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_16 = arr_8 [i_2];
        var_17 = (arr_5 [i_2 - 1] [i_2] [i_2 - 1]);
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        var_18 &= ((!((max(var_0, 255)))));
        var_19 = var_3;
        var_20 += ((max((max(14095, 13)), (max(65535, var_7)))));
    }
    var_21 = (!-93);
    var_22 -= 32420;
    #pragma endscop
}
