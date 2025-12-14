/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1 - 1] [i_2] = (arr_1 [i_1 + 1]);
                    var_20 = ((((max(var_16, 1)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_21 = arr_9 [i_3];
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_22 += (min((min(((((arr_13 [i_3]) ? var_18 : (arr_4 [i_3] [i_3])))), (((arr_13 [10]) ? (arr_1 [20]) : var_2)))), ((min((var_15 >= var_19), (min(191, (arr_7 [i_3] [i_4] [i_3]))))))));
                    var_23 = (min(var_23, var_4));
                    var_24 = (min(var_24, (((var_1 + ((((!(((0 ? var_0 : var_1))))))))))));
                    var_25 ^= (((((var_2 ? (arr_5 [i_3] [i_4 + 1]) : (30972 | var_11)))) ? ((((max(var_19, var_0))))) : (min((((1 ? (arr_5 [i_4] [i_4]) : var_16))), var_7))));
                }
            }
        }
        var_26 = (max(var_26, ((min(18446744073709551615, (((-((var_13 ? var_4 : var_13))))))))));
        arr_17 [i_3] [i_3] = 5461167204107914285;
    }
    #pragma endscop
}
