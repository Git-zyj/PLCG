/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((205 ? var_5 : (min(44, 3167835698999240907))))) ? (((~0) ? (((var_11 ? var_4 : 205))) : -var_8)) : ((var_3 ? var_2 : ((-16446 ? 1 : -5651440933527908388))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((min((arr_4 [6] [1] [i_1]), (~205))))));
                var_20 = (((((((((arr_0 [i_0]) + 50))) ? (min(205, var_11)) : var_11))) ? ((min((((arr_3 [i_0] [i_1 - 1]) ? 18485 : var_7)), (arr_0 [i_0])))) : (arr_1 [i_0])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((var_9 ? (((-9223372036854775807 - 1) ? 0 : -5651440933527908396)) : (arr_7 [i_2 + 2] [i_2 + 1])));

        for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_21 = (((arr_5 [i_2 + 1]) ? 2147483640 : (arr_5 [i_2 + 1])));
            arr_11 [i_2] [i_3] |= ((var_4 ? (arr_10 [i_3 + 2]) : (arr_10 [i_3 + 2])));
            arr_12 [i_2 + 3] [i_2 + 3] [i_3 + 2] = (arr_5 [i_2]);
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 4; i_5 < 16;i_5 += 1) /* same iter space */
            {
                arr_19 [i_2 + 1] [i_2] [i_4] = (((arr_9 [i_5 + 1] [i_5] [i_5 + 2]) ? (!1) : ((24942 ? 5651440933527908388 : (arr_17 [i_4] [i_4])))));
                var_22 = (arr_18 [i_2] [i_4] [2]);
                arr_20 [i_4] [i_5] [i_4] [9] = (((arr_6 [i_5 + 1]) ? (arr_6 [i_2 - 2]) : (arr_16 [i_2 - 2] [i_2 + 1] [i_4] [i_5 - 1])));
                var_23 = 8962366014082484567;
            }
            for (int i_6 = 4; i_6 < 16;i_6 += 1) /* same iter space */
            {
                arr_23 [i_2 + 1] [i_2] [i_4] = ((-5651440933527908388 ? (arr_5 [i_4 + 2]) : (arr_13 [i_4])));
                arr_24 [i_4] [i_4 + 2] [i_6] = (((arr_18 [i_2] [i_4] [i_4 - 1]) ? 5651440933527908403 : (arr_18 [i_2 - 2] [i_4] [i_4 + 1])));
                arr_25 [i_4] [12] = var_13;
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_24 ^= (arr_22 [i_7] [i_2 - 2] [16]);
                            var_25 = (((arr_15 [i_2 + 2] [i_4 - 1]) ? var_16 : 14616));
                            var_26 = (((arr_13 [i_4]) <= ((-(arr_22 [i_4] [i_4 + 1] [i_6 - 2])))));
                            var_27 &= var_12;
                        }
                    }
                }
            }
            for (int i_9 = 3; i_9 < 17;i_9 += 1)
            {
                var_28 ^= (((arr_6 [i_4 - 1]) ? (arr_6 [i_2 + 1]) : 65535));
                var_29 -= var_1;
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_30 = var_6;
                arr_34 [i_4] [i_4] [i_10] = ((((((arr_18 [i_2 + 2] [i_4] [i_10]) ? (arr_15 [i_4] [i_4 + 2]) : var_11))) && 0));
                var_31 = ((!(((-1 ? var_7 : (arr_26 [i_2] [i_4] [i_10] [i_4]))))));
            }
            var_32 &= arr_21 [8] [i_4];
        }
        var_33 = var_2;
    }
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        arr_37 [i_11] = (((arr_14 [13] [i_11] [i_11 - 1]) && (!1)));
        arr_38 [i_11] = ((((min(9223372036854775799, -5651440933527908388))) ? ((-(!201))) : (arr_7 [i_11 + 1] [i_11 + 1])));
    }
    var_34 = var_1;
    var_35 = ((255 ? 4294967278 : (((~243) ? 0 : ((var_5 ? -677556037 : 7182129853973917909))))));
    #pragma endscop
}
