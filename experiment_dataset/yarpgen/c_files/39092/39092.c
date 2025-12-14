/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(min(-539514692, (arr_1 [i_0])))));
        var_13 = -var_3;
        var_14 = ((((((((190 ? -1441359760 : 180))) ? ((206 ? var_1 : 200)) : 66))) & (((((var_12 ? var_9 : 1))) ? (arr_1 [i_0]) : (var_0 | var_10)))));
        var_15 ^= 83;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = var_0;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_16 = 369495144;
                var_17 = var_4;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_18 = var_9;
                arr_14 [i_4] = var_11;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_19 = (61 % -65);
                            var_20 = var_6;
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_21 -= (var_3 <= 2180392044);
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_22 = (min(var_22, (arr_23 [i_9] [i_9] [i_7] [i_9])));
                            var_23 = 1235;
                            var_24 = (min(var_24, ((((arr_18 [i_1] [i_2] [i_7] [i_8] [i_9]) ? (arr_10 [i_1] [i_2] [17] [i_8 - 2]) : (82 || 780069509))))));
                            var_25 = 540093973;
                        }
                    }
                }
                arr_28 [1] [i_7] = 5127639770536836455;
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_26 = (((((arr_21 [i_1] [i_10] [i_10]) ? 174 : 65535)) % (188 + 58506)));
                var_27 = (min(var_27, 65518));
            }
            var_28 = (min(var_28, ((((!var_7) ? var_5 : var_5)))));
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            arr_33 [i_1] [15] = (((((((var_1 ? (arr_16 [i_1]) : var_8)) + 9223372036854775807)) >> (((arr_25 [i_11] [i_11] [i_1] [i_11] [i_1] [i_1] [i_1]) - 2525)))) != (((-5127639770536836473 ? var_4 : 1))));
            var_29 = (((((0 ? 5563253160519849081 : 64295))) ? ((-var_1 ? (!64291) : -5239332091542255973)) : ((1 ? (min(6640616219944884204, 66)) : 4294967295))));
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_30 = ((~(var_11 == -1)));
            var_31 = (((max(229, -1))));
            var_32 = (min(-2030235215, 1238));
            arr_36 [i_1] &= (~24);
        }
        arr_37 [i_1] = (((arr_7 [i_1] [i_1]) && (((-((((arr_16 [i_1]) && 187))))))));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        var_33 *= ((~((((max(1230, 64293))) ? 2017459910 : (((arr_9 [i_13] [i_13] [i_13] [i_13]) ? 2030235225 : 4))))));
        arr_40 [i_13] |= 5127639770536836472;
        arr_41 [i_13] = (((arr_34 [i_13]) >> ((((arr_22 [i_13] [i_13] [i_13] [i_13]) || 2030235237)))));
    }
    var_34 = -8;
    #pragma endscop
}
