/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 3862;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = (((max(var_5, -3863))));
        var_22 = (((max((-3863 | var_13), -4433205870160135091)) - (max(0, -27679))));
        var_23 = (min((var_7 - var_0), -24868));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = -3848;
        var_24 -= ((7455 ? 107 : var_12));
        var_25 = (((arr_1 [i_1]) ? (arr_2 [i_1]) : (-32767 - 1)));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    {
                        var_26 = (max(var_26, ((61 ? 107 : (arr_8 [i_2] [i_2 - 1])))));
                        arr_12 [5] [i_1] [i_2] = (-var_9 | 255);
                    }
                }
            }
        }
    }
    #pragma endscop
}
