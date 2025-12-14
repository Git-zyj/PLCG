/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (max((min((min(333640587587714416, 16834)), var_7)), var_0));
    var_16 = var_9;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (var_7 % var_3);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 *= (arr_9 [i_0 + 1] [i_0 - 1] [i_1] [i_0 - 1]);
                    var_18 = (!1953);

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            var_19 = (((var_2 != var_13) ? (18113103486121837199 / var_13) : (arr_1 [i_3 - 1])));
                            arr_16 [i_0 + 2] [i_0] [i_1] [3] [i_3] [i_0] = (((!-87) != ((var_13 ? var_0 : (arr_8 [i_0 - 1] [i_0] [i_2])))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = (~333640587587714416);
                        }
                        var_20 = (arr_2 [i_0]);
                        arr_18 [i_0] [i_0] = ((58085 + (arr_7 [i_0 - 1] [i_3 - 1] [i_3 + 1])));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_21 = (((arr_5 [i_0 + 1] [i_5]) & (arr_8 [i_0] [i_0] [i_0])));
                        arr_21 [i_0] [i_2] = ((19352 ? 524160 : 333640587587714423));
                        var_22 *= ((+((((arr_4 [i_0]) < (arr_7 [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_0] = (516096 && 18113103486121837167);
                        var_23 += var_13;
                        arr_26 [i_0] [i_0] [i_2] [i_2] [i_2] = (((arr_0 [i_0 + 2] [i_0]) ? (arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_2] [i_6] [i_0 - 1]) : -775993125));
                        var_24 = (333640587587714399 | 18113103486121837178);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_25 = (max(var_25, ((((arr_27 [i_7]) < 18113103486121837193)))));
        var_26 = ((var_4 >= (arr_27 [i_7])));
        arr_29 [i_7] = (((arr_27 [i_7]) / (((arr_28 [i_7] [i_7]) % 333640587587714396))));
        var_27 = (!(arr_27 [i_7]));
    }
    #pragma endscop
}
