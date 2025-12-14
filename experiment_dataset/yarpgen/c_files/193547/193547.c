/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = (min(var_21, ((max((((arr_0 [i_0]) << (((arr_1 [0] [i_0]) - 2022441528001696338)))), ((-(arr_1 [i_0] [i_0]))))))));
        var_22 = ((7021293039108915170 >> (var_0 + 1151646118)));
        arr_2 [14] [11] = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), var_1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_23 = (max(var_23, var_17));
                    var_24 &= (((!(arr_0 [i_0]))) ? 13636218273189353451 : (((arr_5 [i_0] [i_0]) ? (arr_4 [i_0] [i_1] [i_0]) : var_12)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_25 &= (((arr_5 [i_0] [i_3]) / (arr_5 [i_0] [i_0])));
                        var_26 -= (arr_7 [i_0]);
                        var_27 = (max(var_27, var_3));
                    }
                    var_28 = (((!var_8) ? ((2233830421192547771 ? (max((arr_3 [i_0] [i_1] [i_2]), var_16)) : ((min(var_11, var_7))))) : ((min((((5934628432238206335 ? 67 : 4))), ((var_4 ? var_10 : var_14)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 6;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = (var_16 ? ((((!(arr_11 [i_4]))))) : ((var_4 ? (arr_12 [i_4 + 3] [i_4 + 3]) : (arr_9 [i_4] [i_4 - 2]))));
        var_29 = var_15;
        var_30 ^= (((arr_0 [i_4 - 2]) | (arr_0 [i_4 + 1])));
        arr_14 [i_4] = ((4294967289 / var_17) ? ((112 ? var_1 : (arr_10 [i_4]))) : (arr_12 [i_4] [i_4]));
    }
    #pragma endscop
}
