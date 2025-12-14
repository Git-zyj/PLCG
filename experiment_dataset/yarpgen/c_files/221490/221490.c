/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = (-var_6 & 25);
    var_17 |= var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = var_10;
        arr_5 [i_0] = ((~(max(var_3, var_12))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = (min(var_8, (((!(arr_0 [i_1] [i_0]))))));
            arr_9 [i_0] [i_0] [11] = (min(((max(161, (var_11 != var_11)))), ((~((var_0 ? (arr_6 [i_0]) : var_3))))));
            var_19 = (min(var_19, ((((((~(var_3 & var_2)))) ? ((max(var_4, var_2))) : (~var_14))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_20 -= (((((~((var_12 ? (arr_11 [i_2] [i_0] [i_0]) : var_9))))) ? 210 : 1228316855));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_17 [i_0] = (arr_13 [i_3] [i_0] [i_0] [7]);
                arr_18 [i_0] [i_0] = var_0;
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_21 [i_0] [i_4] [i_0] [i_4] = var_0;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_21 = (min(var_12, (((!(arr_2 [i_0] [1]))))));
                            arr_28 [i_6] [i_0] [i_5] [i_5] [i_4] [i_0] [i_0] = (!var_0);
                        }
                    }
                }
                var_22 = var_7;

                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_23 = max((arr_1 [i_0] [i_0]), var_8);
                        arr_34 [i_0] [i_0] [i_0] = var_10;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_2] [i_4] [i_7] [i_0] = var_0;
                        var_24 = (min((((min(34084860461056, var_5)))), var_2));
                        var_25 = (min(var_25, (((var_3 / (max((max(-1548680359, var_6)), var_13)))))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_26 = ((~(max(-107, ((94 ? 18446744073709551612 : 83))))));
                        var_27 = 44;
                        var_28 = (~var_6);
                    }
                    var_29 |= var_8;
                    arr_40 [i_0] [i_2] [i_4] [i_7 - 1] = (((~-15) && (!var_10)));
                    var_30 = ((max(var_7, var_5)));
                    var_31 = (min(var_6, var_10));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_32 = var_7;
                    var_33 = (arr_15 [i_0] [i_2] [8] [i_11]);
                }
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    var_34 |= var_1;
                    var_35 = 511;
                    var_36 = var_11;
                }
            }
            var_37 = (((max(var_11, var_8))));
        }
    }
    #pragma endscop
}
