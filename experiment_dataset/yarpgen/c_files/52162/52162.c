/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min((max((arr_1 [i_0]), (arr_0 [13] [i_0]))), (arr_1 [i_0])))) ? 192 : 1));
        arr_3 [i_0] = var_1;
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_19 = (max(1, ((((((arr_1 [i_0]) ? var_7 : (arr_1 [i_0])))) ? ((var_5 ^ (arr_1 [i_0]))) : (arr_1 [i_0])))));
        var_20 = ((((((min(1, 68))))) ? (((arr_0 [i_0] [i_0]) ? 872906065 : var_11)) : var_10));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min(var_2, 2465937255));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_1] = ((-(((1 % (arr_6 [i_2]))))));
            var_21 = (((1 ? -5 : (2305843009213691904 / 2835))));
            var_22 = (var_1 > (!1));
            var_23 = (max(2836, (~var_11)));
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        var_24 = (arr_15 [1] [i_2] [1] [i_4 - 1]);
                        arr_17 [i_1] [i_1] = (((((min(38883, 58332))) ? ((max(var_14, var_15))) : ((var_10 ? 6254 : (arr_16 [i_1] [i_1] [i_2] [i_1]))))) ^ (((max((arr_8 [i_3 - 3] [i_1] [i_1]), (arr_8 [i_3 - 2] [i_1] [i_3]))))));
                        var_25 = (max(var_13, ((-((var_8 ^ (arr_13 [i_4] [i_4] [i_1] [i_4])))))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_20 [i_1] [5] [i_1] = ((-((((arr_16 [i_1] [i_1] [i_1] [i_1]) > (var_12 <= var_15))))));
            arr_21 [i_1] [i_5] = (!var_13);
        }
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_26 = (max(((~(arr_24 [i_6 - 2]))), 16));
        arr_25 [i_6] = ((+(((((arr_22 [i_6]) && -2305843009213691905)) ? 9223372036854775801 : (arr_23 [i_6 - 2])))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_27 = (60 ? (!4749129814025077094) : ((-5756310235097516869 ? 243 : 82)));
        arr_30 [i_7 - 1] = (((arr_26 [i_7 - 2] [i_7 - 2]) ^ (~var_11)));
        arr_31 [i_7] = (arr_22 [i_7 - 1]);
    }
    var_28 = ((var_2 & (max(0, 4064781430))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            arr_42 [i_8] [i_9] [i_9] [i_8] [i_8] = var_16;
                            var_29 = ((((arr_35 [i_8] [i_10] [i_11]) ? var_5 : (arr_35 [i_8] [i_8] [i_8]))));
                            var_30 = ((((((arr_36 [i_9] [i_11]) * (arr_24 [i_8])))) ? (min(var_17, var_12)) : (((max((arr_34 [15]), (arr_34 [i_8])))))));
                            var_31 = (((max(var_2, var_10))) ? (max(6449437184425837202, -6505)) : (((~(127 || var_8)))));
                        }
                    }
                }
                var_32 = ((~(~var_0)));
                arr_43 [i_8] = (max(1, -var_16));
                var_33 = ((172 <= -5756310235097516847) == (max(var_13, (min(var_0, (arr_1 [i_8]))))));
            }
        }
    }
    #pragma endscop
}
