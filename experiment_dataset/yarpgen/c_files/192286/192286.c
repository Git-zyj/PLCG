/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_16 = (((~127) ? var_8 : 89));
                        arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_10 [i_0] [i_1 + 1] [i_3] [i_3] [i_1 + 1] [i_2 - 1]) * (arr_11 [i_0] [i_1 + 1] [i_0] [i_1])));
                        var_17 &= ((var_11 ? (arr_2 [i_3]) : (((arr_6 [i_2]) ? var_1 : var_8))));
                    }
                    var_18 = ((((((((var_6 ? (arr_4 [i_0]) : var_14))) ? ((min(0, (arr_7 [i_2] [i_1] [i_1 - 1] [i_0])))) : ((1 ? var_8 : 1))))) ? (((((var_15 ? (arr_0 [20]) : (arr_10 [i_0] [i_1] [i_1] [i_1 + 1] [i_2] [i_1 + 1])))) ? var_8 : (arr_4 [i_0]))) : ((((!(arr_9 [8] [i_1 + 1] [i_1 + 1] [i_2 + 1])))))));
                    var_19 = (max((arr_5 [i_1 - 1]), var_9));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_20 = ((-(arr_6 [i_5])));
                    arr_22 [i_4] = ((((min((arr_12 [9] [9] [i_6]), ((max(1, var_0)))))) ? var_7 : ((((((arr_21 [i_4 + 1] [i_5] [i_6]) >= (arr_3 [i_6]))) ? (arr_10 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [1] [i_6]) : (min((arr_1 [i_5]), var_11)))))));
                    var_21 *= ((!(~-9)));
                }
                var_22 = (arr_7 [6] [i_4] [i_5] [i_5]);
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 4; i_7 < 14;i_7 += 1)
    {
        var_23 = -var_9;
        arr_26 [i_7] = (((var_0 + 9223372036854775792) ? 34639 : 1));
    }
    var_24 = var_9;
    #pragma endscop
}
