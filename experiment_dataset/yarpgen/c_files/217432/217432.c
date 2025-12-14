/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 ^= 63538;
                    var_11 = ((max((max(var_0, (arr_2 [i_0] [i_1 + 2]))), (arr_2 [i_0] [i_1 - 2]))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_12 = (((arr_10 [i_3] [i_3]) ? (((!var_9) ? (((arr_9 [i_3] [i_3]) ? (arr_10 [i_3] [i_3]) : var_3)) : ((255 ? 22 : 4611686018427387904)))) : (min(-26, -2007))));
        var_13 = (min((arr_8 [i_3]), ((262143 ? (arr_9 [i_3] [i_3]) : (arr_8 [i_3])))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    {
                        arr_18 [i_3] = ((-(arr_15 [i_3] [i_3] [i_3] [i_3])));
                        arr_19 [i_6] [i_6 - 3] [i_6] [i_3] [i_6 - 2] [i_6 + 2] = (arr_16 [i_3]);
                        var_14 = min(((((min(var_3, (arr_13 [i_5] [i_5] [i_5] [i_5])))) - (arr_10 [i_4] [i_6]))), (((((var_4 / (arr_8 [i_3])))) ? (arr_15 [i_3] [i_3] [i_3] [i_6]) : (min(var_1, 13835058055282163702)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_15 = (min(var_15, (arr_3 [i_7] [6])));
        var_16 = (min(var_16, -var_0));
    }
    var_17 = (~var_7);
    #pragma endscop
}
