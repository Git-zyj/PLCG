/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 = (max(var_10, (((-12340 ? -5445668689213275132 : -6105)))));
                                var_11 = (max(var_11, (!var_0)));
                            }
                        }
                    }
                    var_12 = (min(var_12, ((((!(arr_0 [i_0 + 2])))))));
                    arr_13 [i_2] = (min(((max(var_9, var_6))), ((-(var_5 && 6113)))));
                }
            }
        }
    }
    var_13 = ((!(!-1)));
    var_14 = var_9;
    var_15 = (((~(((var_6 + 2147483647) >> (-5522844888384613100 + 5522844888384613112))))));

    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (((arr_14 [i_5]) ? (!var_8) : var_6));
        arr_19 [i_5] = (var_5 ? (-6098 - -6109) : -var_0);
        var_16 = ((~var_0) * (!-7659860188644276179));
        var_17 += var_2;
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_18 *= ((((max(var_4, var_6))) * (2971702392456773836 && -11475)));
                    arr_27 [i_6] = ((255 > (~var_4)));
                }
            }
        }
        var_19 = (min(var_19, (~229)));
        var_20 = (!12);
        var_21 *= ((!((!((max(var_3, var_5)))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_22 = (min(var_22, (((-(arr_28 [i_9] [16]))))));

        for (int i_10 = 3; i_10 < 21;i_10 += 1) /* same iter space */
        {
            arr_32 [i_9] = var_1;
            arr_33 [i_9] [i_10] [i_9] = var_0;
        }
        for (int i_11 = 3; i_11 < 21;i_11 += 1) /* same iter space */
        {
            arr_37 [i_9] [i_9] [i_9] = var_3;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    {
                        arr_42 [i_12] [i_11 - 3] [i_11] [i_12] [i_12] [i_13] |= (var_7 ? ((var_8 ? var_8 : 2971702392456773836)) : var_9);
                        var_23 = (min(var_23, (((7 ? ((((arr_31 [i_13] [i_13]) && 2249055217766006597))) : (!3938))))));
                        arr_43 [i_9] [8] [i_12] [i_13] |= (arr_31 [i_13] [i_13]);
                    }
                }
            }
        }
        for (int i_14 = 3; i_14 < 21;i_14 += 1) /* same iter space */
        {
            var_24 = (min(var_24, (~-30080)));
            arr_48 [i_9] [i_9] [i_9] = ((!(arr_30 [i_9])));
        }
        arr_49 [i_9] [i_9] = 11;
    }
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {

        for (int i_16 = 2; i_16 < 19;i_16 += 1)
        {
            arr_55 [i_15] [i_15] [i_15] = (min((((~-25323) ? ((-4 ? -7659860188644276153 : 15)) : 24956)), (min((min(var_3, var_0)), (!var_3)))));
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    {
                        arr_62 [i_15] [i_15] [i_15] [5] [i_18] = var_7;
                        arr_63 [i_16 - 2] [i_15] = (((((189 & (arr_31 [i_18] [i_17])))) ? (((arr_17 [i_17 - 1] [i_16 - 1]) ^ var_5)) : ((max((arr_14 [i_15]), var_9)))));
                    }
                }
            }
        }
        arr_64 [i_15] = (max((((arr_38 [i_15] [i_15]) ? var_2 : 242)), 123));
    }
    #pragma endscop
}
