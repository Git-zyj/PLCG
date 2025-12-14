/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min((min((max(var_2, var_1)), (~var_9))), ((var_9 ? (min(var_10, 1)) : (min(var_9, var_7)))));
    var_12 = (-var_4 - var_4);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min(var_13, ((min(((-((18446744073709551609 ? 15640013 : 18446744073709551609)))), (arr_0 [17]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_14 += 3;
                            var_15 = (((arr_9 [i_4] [i_4] [i_3] [7] [i_2] [i_1] [i_0]) & 7));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_2] = (arr_2 [i_5] [i_5]);
                            var_16 = ((-(var_10 / var_8)));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_17 = var_10;
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_3] = (((~1) ? ((((max(var_8, var_3))) ? (arr_10 [i_1]) : var_2)) : var_7));
                        }

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_18 += ((var_6 ? (((((var_4 / (arr_5 [i_0] [i_1] [i_1])))) ? -88 : -67)) : var_0));
                            arr_21 [i_3] [i_3] [i_3] [i_2] [i_3] = (min(0, ((var_0 ? 0 : var_10))));
                            var_19 = ((((max(var_2, (((var_0 ? (arr_12 [i_0] [i_1] [14] [i_3] [i_7]) : var_9)))))) ? (max((max(3273366706, (arr_1 [i_1]))), var_0)) : var_9));
                            var_20 = (max(var_20, ((((-16071 <= -72) ? ((max((max(var_9, (arr_6 [i_1]))), ((((arr_1 [i_2]) < var_8)))))) : ((var_2 ? var_10 : (arr_0 [i_3]))))))));
                        }
                        var_21 |= (max(((+((var_7 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [18] [i_3]) : var_8)))), ((var_2 - (((min(1, var_1))))))));
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] = ((var_4 ? ((max(2733, 87))) : 1));
    }
    var_22 = ((-(((1 * 30115) ? var_7 : (min(var_10, var_0))))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 18;i_9 += 1)
        {
            {
                arr_29 [i_9] [i_9] |= (((((-((min(var_1, var_1)))))) ? (var_2 & var_5) : ((((max((arr_6 [i_8]), var_7))) ? ((18446744073709551608 ? (arr_17 [i_8] [i_8] [i_9] [i_9] [i_9]) : var_3)) : (max((arr_1 [i_9]), var_9))))));
                arr_30 [i_8] = var_5;
            }
        }
    }
    #pragma endscop
}
