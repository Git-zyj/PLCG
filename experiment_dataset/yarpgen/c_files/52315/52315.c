/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_17 = (1 + 15);
                var_18 = (max(var_18, (((~var_10) + (arr_2 [13])))));
                arr_7 [2] = (arr_3 [i_0 + 1]);
                arr_8 [3] [6] = (arr_3 [i_0 - 1]);

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_11 [3] [i_1] = (!-891534759437064560);
                    arr_12 [i_3] [13] [i_2] [i_2] [i_1] [i_0] = (((arr_3 [i_0 - 1]) ? (!-31) : var_2));
                    var_19 *= var_5;
                    arr_13 [7] = (~-43);
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_20 = ((((((arr_0 [i_2] [1]) ? (arr_6 [i_0 - 2] [13] [i_0 - 2] [i_4]) : (arr_6 [7] [1] [6] [i_4])))) ? (!36) : (((!(arr_0 [6] [i_0]))))));
                    var_21 -= ((((var_1 ? var_3 : (arr_6 [i_2] [i_4] [12] [i_4]))) | (arr_4 [i_0 - 1] [i_0 - 2] [i_2])));
                }
            }
            arr_16 [9] |= (((((var_10 ? var_16 : var_7))) ? (arr_6 [14] [i_0 + 3] [i_0] [i_0 - 2]) : var_5));
            arr_17 [8] [i_1] [i_1] &= (arr_10 [i_0 + 1] [9] [2] [i_0 - 1]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_22 *= ((!((((arr_0 [1] [2]) ? var_9 : var_8)))));
                        arr_23 [i_5] [5] [0] [i_5] = ((!(arr_0 [i_0 + 3] [i_0 - 1])));
                        var_23 = (((((~(arr_10 [8] [i_1] [8] [i_6])))) ? var_3 : (((arr_3 [0]) ? var_10 : var_15))));
                        var_24 = (max(var_24, (((~(arr_10 [i_0 - 1] [i_1] [6] [i_6]))))));
                    }
                }
            }
        }
        arr_24 [i_0 + 2] = ((((min(((((arr_3 [i_0]) ^ -29))), (var_14 / var_9)))) ? -var_0 : (~-24489)));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_25 = (arr_2 [1]);
        arr_28 [14] [i_7] &= (((((!(~var_12)))) <= 1));
        var_26 = (arr_27 [i_7]);
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1)
    {
        var_27 += ((!(var_5 > var_8)));
        arr_33 [i_8] &= var_9;
        var_28 = ((!((max(var_12, 31)))));
        arr_34 [i_8] = (max((((!(((-(arr_30 [8]))))))), ((112 ? (~var_16) : (~1)))));
        arr_35 [0] = ((57008 ? ((((min((arr_30 [i_8 - 3]), var_1))))) : (max(3170241225206005436, (!var_4)))));
    }

    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            arr_44 [i_10] [i_9] [12] &= max(112, (((arr_43 [i_10] [i_9]) ? (arr_30 [i_9]) : var_16)));
            var_29 = (-3784923558440508490 || (((1082252293 ? ((max(var_10, var_3))) : ((-(arr_30 [2])))))));
            var_30 = -891534759437064560;
            var_31 *= (-(min(57008, 511158794)));
            var_32 = (max(var_32, -var_16));
        }
        arr_45 [5] [i_9] = ((var_13 - ((-891534759437064560 ? (!var_9) : ((var_1 ? 2147483644 : -3170241225206005434))))));
    }
    var_33 = (((!-21) ? (28838 ^ var_12) : var_10));
    #pragma endscop
}
