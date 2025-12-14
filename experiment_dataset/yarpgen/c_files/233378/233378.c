/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = var_10;
        arr_2 [i_0] = var_19;
        var_21 = (((((var_18 ? (((max(var_19, var_19)))) : ((var_19 ? var_4 : var_2))))) ? (((13977 ? (max(1, 1282944989)) : 1))) : ((((min(var_0, var_4))) ? (var_0 ^ var_4) : var_9))));
        var_22 = min(((min((var_3 < var_10), (1 * 0)))), (((max(var_15, var_9)) << (var_9 - 4980077302741682))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_23 = var_19;

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_24 = 44;
            var_25 = (~var_12);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_26 = (max(((((var_16 < var_13) < (var_7 / var_0)))), (max(var_12, ((min(var_2, var_8)))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = (((((146 | 4154441929) ? var_3 : var_7)) / ((max(var_5, (!var_5))))));
                            var_27 = var_9;
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                var_28 = (((((max(var_12, var_18)) < var_4)) ? var_19 : (!var_5)));
                arr_26 [i_1] [i_1] [i_7] = var_2;
                var_29 += ((var_3 < ((var_12 ? (var_18 < var_5) : var_8))));
            }
            var_30 = (min((max(var_7, var_10)), var_13));
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_31 = (max(var_13, (((!8995) / var_3))));
            arr_30 [i_1] [i_1] = ((var_0 << (var_13 - 317660279)));
            var_32 = (min((min(var_15, -var_4)), (max(-var_8, (min(var_4, var_2))))));
            var_33 = var_17;
            var_34 = (min(var_34, ((min(((var_19 ? var_19 : var_1)), var_18)))));
        }
    }
    var_35 = var_5;
    var_36 = (((((~((var_12 ? var_6 : var_13))))) ? ((((var_1 < var_9) ? var_17 : (max(var_7, var_10))))) : var_12));
    var_37 = (min(var_37, var_17));
    #pragma endscop
}
