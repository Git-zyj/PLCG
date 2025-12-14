/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (max((max(816006568, -466483516), var_3)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (474331466 <= 3);
                    var_14 = var_9;
                    var_15 = (arr_6 [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_16 = (((((min(var_6, var_11)))) - (min(((var_7 ? var_8 : -501535882)), ((max(-6, -20)))))));
        var_17 = var_2;
        var_18 = (max(-1990011082, (98 | 321029039)));
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        var_19 = 1610612736;
        arr_19 [8] &= ((-1377975725 ? 2089637694 : 545420875));
    }
    var_20 = 31;
    var_21 += (((max(var_9, var_6)) >= var_10));
    #pragma endscop
}
