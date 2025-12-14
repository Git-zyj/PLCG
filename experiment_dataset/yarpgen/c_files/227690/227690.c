/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_12);
    var_20 = (((min(var_12, var_18)) - (((var_10 ? (var_6 || var_16) : 1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (min((min(var_2, var_16)), (arr_3 [i_0 - 1] [i_0 - 1])));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    var_22 = (min(var_22, var_3));
                    arr_7 [i_2] [i_2] [i_0] = (((arr_5 [i_0 + 2] [i_2 + 1]) <= ((var_15 >> (var_4 - 2253766315)))));
                    var_23 = ((5 ^ (4003747726402308003 & 21)));
                }
                var_24 = (max((arr_0 [i_0 + 3] [i_0 - 1]), (min((arr_4 [0]), (var_2 ^ 3)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_3 - 1] [i_4 - 3] [i_4] [i_5] = ((1990469804 ? -17243 : 31));
                    var_25 = (max(var_25, 1));
                    var_26 = ((min((arr_1 [i_4 - 3]), var_10)));
                }
            }
        }
    }
    #pragma endscop
}
