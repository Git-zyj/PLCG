/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 = (7385733876020999351 / 390348242);
        var_21 = (max(var_21, ((((arr_0 [i_0]) ? var_5 : var_12)))));
        var_22 = (min(var_22, -14544215427889527622));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_23 = (min(var_23, ((((arr_7 [i_0] [i_0] [i_0] [i_0 + 2]) || (((var_16 - (arr_4 [i_0 + 3])))))))));
                    var_24 = arr_3 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_25 = ((max((var_5 >= var_2), (arr_2 [i_3] [i_2]))));
                                var_26 = ((((((arr_8 [i_4 + 1] [i_0] [i_4 - 1] [i_0 + 1] [i_4 - 1] [i_2]) / (((65535 ? 270944374 : -270944374)))))) ? (max(-270944373, 11544161465595027359)) : (arr_1 [i_1])));
                                var_27 = (((arr_5 [i_0 + 4] [i_1] [i_2] [i_0 + 4]) ? (-270944374 * var_3) : (arr_5 [i_0 + 2] [i_0] [i_0 + 2] [i_0])));
                                var_28 = ((270944359 << (270944387 - 270944385)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_10;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_30 = (((((4125262953 >> (-270944357 + 270944360)))) ? ((-29806 ? 23 : -674907896)) : (max((arr_7 [i_6] [i_6] [i_6] [i_6]), 1))));
                    var_31 = (953310013 / -270944358);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_32 = 270944372;
                                var_33 = (((((var_15 ? var_1 : ((126 ? -270944373 : var_6))))) || ((min(76, 1)))));
                            }
                        }
                    }
                }
                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    var_34 = (max((arr_26 [i_5 + 1] [i_10]), 17009));
                    var_35 = (25 > 0);
                    var_36 = ((max(-var_13, (var_14 > var_3))));
                }
                var_37 = (-270944373 / 270944356);
                var_38 = (min(var_38, (-270944348 / 270944329)));
                var_39 = -8245915902386774947;
            }
        }
    }
    #pragma endscop
}
