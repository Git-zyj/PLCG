/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((var_3 - var_2) ? var_7 : (((((4251677964468867785 ? var_9 : var_5))) ? (var_15 - var_14) : (var_3 + var_15)))));
        var_18 = (min(var_18, 1390536169));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (1390536169 + -27);
                                var_20 |= (min((((((var_8 ? var_14 : 177))) ? ((var_11 ? var_9 : var_17)) : ((min(18595, var_9))))), (4251677964468867785 && 0)));
                                var_21 = ((((min((max(var_5, var_16)), var_12))) >= var_11));
                                var_22 = (((var_7 | 15901712063011869265) ? -26483 : (((-127 - 1) ? (var_13 ^ var_17) : var_11))));
                            }
                        }
                    }
                    var_23 |= (((((var_7 ? var_14 : (var_16 <= var_11)))) ? ((-((2545032010697682359 ? var_12 : var_1)))) : 27431));
                    arr_14 [i_0] [i_2] [i_0] = min((!var_5), ((var_16 - ((var_15 ? 8203 : 2147483647)))));
                }
            }
        }
        var_24 = (var_12 / (19489 * var_16));
    }

    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        var_25 = (max(var_25, ((-(var_17 - 18595)))));
        var_26 *= (((((var_8 ? var_3 : var_0))) ? (max(var_12, ((var_16 ? -19487 : var_16)))) : (((1 % var_13) ? (~0) : (~18615)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_24 [i_6] = (((((var_2 ? 206 : -1751915460))) ? ((var_0 ? 32754 : var_7)) : (var_0 || var_3)));

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                arr_27 [i_6] [i_6] [i_8] [i_6] = (15901712063011869273 && var_11);
                var_27 += ((var_13 * (2545032010697682343 - 2545032010697682359)));
                var_28 += (((var_9 * var_2) ? var_11 : -31503));
                arr_28 [i_6] [i_6] = var_9;
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_29 ^= (((((14195066109240683849 ? var_2 : var_9))) ? 8387584 : 852295945));
                            var_30 = (((76 ? 11919 : 179)) << (4832615214212107214 - 4832615214212107197));
                            var_31 |= ((8 ? 79 : 14621919277894254390));
                        }
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            var_32 = (min(var_32, ((((var_10 ^ var_5) ? var_11 : (var_4 != var_7))))));

            for (int i_13 = 1; i_13 < 12;i_13 += 1)
            {
                var_33 |= ((var_2 * var_6) ? ((12420745518799141519 ? var_8 : var_7)) : 180);
                arr_42 [i_6] [2] [2] [i_13 + 2] = ((var_5 ? ((2147483647 ? var_16 : var_0)) : var_17));
                arr_43 [i_6] [i_6] [14] [14] = (1390536178 % -31506);
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_34 = ((var_7 ? var_17 : var_3));
                var_35 = (min(var_35, (((var_15 >= (var_3 ^ var_6))))));
                var_36 = ((var_5 ? var_2 : (var_3 || var_11)));
                var_37 |= -31482;
            }
            arr_47 [i_6] = ((var_13 ? ((-485113029 ? var_6 : var_15)) : var_8));
            var_38 |= ((var_17 ? var_5 : var_1));
        }
        var_39 = ((var_7 ? ((var_1 ? var_9 : var_6)) : var_13));
        var_40 = ((var_2 ? ((var_12 ? 4155647804 : var_7)) : var_12));
        var_41 = (min(var_41, (((var_15 == (var_14 | var_9))))));
        arr_48 [i_6] = (((((var_14 ? var_3 : var_2))) ? var_5 : -var_3));
    }
    #pragma endscop
}
