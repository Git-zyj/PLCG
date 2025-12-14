/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(arr_1 [i_0 + 2])));
        var_18 = (((var_1 && 1) + (((!(arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_2] [i_1] = (!var_8);
                    var_19 = (((((((max(15946, (arr_0 [i_1] [i_2])))) ? (((arr_1 [i_3]) ? 1 : 31920)) : (((arr_7 [i_1]) & (arr_7 [i_1])))))) ? var_11 : 144));
                }
            }
        }
        arr_10 [i_1] [i_1] = (arr_7 [i_1]);
        var_20 = 2093443150;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_21 *= (!((((arr_12 [4] [i_4]) ? (arr_11 [i_4] [i_4]) : -80))));
        arr_15 [i_4] [i_4] = ((var_3 == (arr_12 [i_4] [i_4])));
    }
    var_22 *= var_16;
    var_23 = var_1;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_18 [i_5] = ((-((var_4 ? var_17 : (arr_13 [i_5])))));
        var_24 = (((arr_0 [i_5] [i_5]) <= ((((arr_11 [i_5] [i_5]) || 81)))));
        var_25 = ((arr_17 [i_5] [i_5]) % (arr_0 [i_5] [i_5]));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_26 *= var_3;
                    arr_23 [i_5] [i_6] [i_7] [i_5] = ((-(57057 < 2201524146)));
                }
            }
        }
    }
    var_27 = ((min((13 >= -103), (max(var_4, 214)))));
    #pragma endscop
}
