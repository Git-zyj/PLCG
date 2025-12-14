/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((~(~var_14))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (((1 - 7) ? (!-939732115) : (max((!1632342138), (min((arr_2 [i_0] [i_0]), var_14))))));
        var_21 = (max(var_21, -85));
        var_22 = max(92, 32767);
        var_23 = (min(var_23, ((((((min(var_16, (arr_0 [i_0] [i_0]))) ? 39 : (arr_2 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (max(-105, -1));
        var_24 = (min(var_24, ((min((((-(arr_3 [i_1])))), (((-12 < ((max(38, (arr_3 [i_1]))))))))))));
        arr_7 [i_1] = (((arr_3 [i_1]) ? (((arr_3 [i_1]) ? (((min(-25284, 0)))) : var_1)) : ((((!(82 * var_4)))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_25 = (max((max((((arr_9 [24]) ? var_4 : (arr_8 [i_2]))), ((-(arr_8 [i_2]))))), (((-(1154204103 - 860005289))))));

        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            var_26 = (min(var_26, (((0 ? (arr_9 [i_3 + 1]) : (((arr_11 [i_2] [i_3 - 1] [i_3]) ? (arr_10 [i_2] [i_3 - 2]) : ((392727244 >> (var_9 + 50))))))))));
            arr_12 [i_2] [i_3] [i_2] = (((min((arr_8 [i_2]), (~118))) * (!-65)));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_19 [i_5] [i_2] [i_5] = ((+(max((((arr_16 [i_4] [i_2] [i_5]) / 1)), var_4))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_27 = (min(var_27, ((-(((((var_0 ? 12272312303512423736 : (arr_9 [i_2])))) ? var_12 : (arr_21 [i_6 - 1])))))));
                            var_28 = (min(var_28, (((-(!-38))))));
                        }
                    }
                }
                arr_25 [20] [i_4] [i_4] |= ((~((-18671 ? 19 : (min((arr_8 [i_4]), 3879062936))))));
                var_29 = (max(var_29, (((-((-(arr_14 [i_4]))))))));
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_28 [i_2] [i_2] [i_8] [i_2] = (arr_24 [i_2] [i_4] [i_2] [i_2] [i_8]);
                var_30 = 1;
                var_31 = (min(var_31, ((((((((((arr_16 [i_2] [i_8] [i_2]) ? var_6 : (arr_8 [i_4])))) ? (1 <= 11651) : 255))) ? ((((min(-2032565077, var_7)) != (arr_9 [i_4])))) : ((((((~(arr_27 [i_2] [i_2] [i_2]))) + 2147483647)) << (((((arr_17 [i_2] [i_2] [i_8]) + 8972)) - 29)))))))));
                var_32 |= var_16;
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_39 [i_9] [i_4] &= (arr_29 [i_9]);
                            var_33 -= 50;
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        arr_43 [i_12] = (max(((((!(arr_23 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))) ? 1 : var_7)), var_0));
        arr_44 [i_12] = (((arr_35 [22]) ? (min((min(var_14, (arr_37 [i_12] [14] [16] [i_12] [i_12]))), ((max((arr_20 [0] [i_12] [i_12] [i_12]), 28756))))) : ((~((max((arr_15 [i_12] [i_12] [14] [6]), -23)))))));
        var_34 = (min(var_34, -334302035));
    }
    var_35 = (max(-var_4, var_16));
    var_36 = var_18;
    #pragma endscop
}
