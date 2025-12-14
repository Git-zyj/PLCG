/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_5, (max((max(var_12, var_3)), var_0))));
    var_18 += (max((min(6895357743649277924, 30089)), (max(var_16, (min(-5, 7827870901098125978))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_5;
        arr_4 [i_0] [i_0] = var_9;
        var_19 = var_8;
        var_20 = var_14;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_21 = var_13;
        var_22 |= var_5;
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_23 = (min(var_23, (max((min((min(var_15, var_15)), (min(16, 1)))), ((max((max(1, 9650)), ((max(var_13, var_14))))))))));
        var_24 = (max(((max(((min(var_2, var_11))), var_15))), (min((max(var_15, var_5)), ((min(var_11, var_11)))))));
        var_25 = var_9;
        var_26 = (min((min(35446, (min(5853946968039123580, -4130493258411953799)))), 106));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_27 = min((min(var_16, (max(var_4, var_15)))), var_1);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_18 [i_3] [i_5] [i_5] [i_5] = var_0;
                        var_28 = (max((max((min(var_3, var_0)), var_6)), (max((max(var_11, var_12)), (min(var_4, var_3))))));
                        arr_19 [i_5] [i_4] [0] [i_4] [i_6] = (min((min(var_16, var_15)), var_13));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_29 |= (max((min(var_1, (max(var_4, var_16)))), (max((max(var_9, var_4)), ((max(var_2, var_6)))))));
            var_30 = var_6;
        }
        var_31 = (min(((min(var_11, var_8))), (max((min(var_7, var_4)), (max(var_5, var_6))))));
        arr_22 [i_3] = (max((min(((min(var_0, var_11))), (min(var_2, var_12)))), (min((min(var_5, var_11)), var_8))));
    }
    #pragma endscop
}
