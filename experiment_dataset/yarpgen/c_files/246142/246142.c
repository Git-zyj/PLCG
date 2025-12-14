/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 ^= ((((((arr_1 [i_0 - 1]) | (arr_1 [i_0 - 1])))) ? ((11233247621906688891 / (min((arr_0 [i_0] [i_0]), var_7)))) : ((((max((arr_0 [i_0] [0]), var_9))) ? -18446744073709551594 : (((min((arr_1 [i_0 - 1]), 34862))))))));
        arr_2 [i_0] |= var_9;
        var_14 = (min(((((var_12 == 1400947950) ? var_0 : (var_9 < var_1)))), (max(((var_10 ? var_11 : var_10)), (arr_0 [i_0 + 1] [i_0 + 1])))));
        var_15 = (max(var_15, (((min(7187493361395245141, -7187493361395245139))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 ^= (var_2 / var_5);
        var_17 ^= var_8;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_18 = (max(var_18, ((min(((var_5 != (arr_5 [i_2] [i_2]))), ((var_4 && ((min(7187493361395245162, var_11))))))))));
        var_19 = (max(22, var_9));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    {
                        var_20 = (max(var_20, var_6));
                        var_21 = (max(var_0, (((1 == 12331) ? ((var_1 ? var_8 : (arr_7 [2]))) : ((var_5 ? var_11 : (arr_10 [i_3] [4] [i_3] [i_3])))))));
                        var_22 = (min(var_22, (((!((((!1) ? var_7 : (min(18446744073709551612, var_3))))))))));
                    }
                }
            }
        }
    }
    var_23 -= (24 | 53226);
    #pragma endscop
}
