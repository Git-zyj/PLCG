/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= 584398184;
    var_16 = (min(var_6, (~var_4)));
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (min(((((((var_6 ? -15 : var_9))) ? (~var_14) : ((var_2 ? var_3 : (arr_1 [i_0])))))), (arr_1 [i_0])));
        var_19 = (arr_1 [i_0]);

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 = 1;
                        var_21 = (min((~4063232), ((((arr_3 [i_1 - 2]) ^ var_3)))));
                        var_22 *= ((~(arr_4 [i_0] [i_0] [i_2] [i_3])));
                    }
                }
            }
            var_23 += ((((min((((arr_1 [i_1]) >= var_7)), (arr_1 [i_1])))) == ((min((arr_2 [i_1 - 1] [i_1]), var_6)))));
            var_24 &= var_2;
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            var_25 -= ((((((((-(arr_11 [i_0])))) ? (((arr_11 [i_4]) ? (arr_7 [i_0] [i_4] [i_4] [i_4]) : 18446744073709551615)) : (arr_0 [i_0] [i_0])))) ? (arr_6 [i_0] [i_0] [i_0]) : (min(((((arr_0 [i_0] [i_0]) ? var_5 : var_1))), var_8))));
            var_26 -= var_7;
        }
        var_27 = (arr_2 [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_28 += (((arr_13 [0]) - (((((~(arr_12 [i_5] [8])))) ? (~231) : ((80 ? (-9223372036854775807 - 1) : 14))))));
        var_29 = (max(var_29, (((((var_6 - var_0) ? (arr_12 [i_5] [18]) : (min((-9223372036854775807 - 1), 17179869183))))))));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_30 -= (arr_16 [i_8]);
                        var_31 = (max(var_31, (arr_18 [i_6 - 2] [i_6 - 2] [i_5])));
                        var_32 = -1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
