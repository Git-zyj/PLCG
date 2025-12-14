/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((29 ? 0 : 63))));
                    arr_8 [i_0] [i_2] [i_2] = ((((((((-6394 ? var_4 : var_15))) ? (((var_13 ? var_5 : var_4))) : 4101304790))) && (0 * 0)));
                    var_17 ^= (var_10 * var_13);
                    var_18 = (max(var_18, ((((var_5 ^ var_8) ? var_13 : var_12)))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = var_14;
                }
            }
        }
        arr_10 [i_0] = 0;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_19 |= (((((((4915377661052742981 >> (4915377661052742981 - 4915377661052742935))) <= (!11)))) >> (var_11 - 147)));
                        var_20 += var_6;
                        arr_17 [i_4] [i_3] [i_4] [i_4] [i_5] = ((56251 ? var_11 : ((var_14 ? (((var_9 + 2147483647) >> (17193 - 17189))) : 153))));
                        arr_18 [i_4] = (((4915377661052742999 ? (!var_10) : ((var_15 ? var_13 : 21)))));
                    }
                }
            }
        }
    }
    var_21 += (!var_10);
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_22 |= ((((-4915377661052742999 ? 0 : var_3)) * ((var_5 ? -4915377661052743000 : -1531022031905195791))));
                var_23 = var_4;

                /* vectorizable */
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        arr_30 [i_6] [i_6] [i_7] [i_8] [i_8] [i_9] = (!var_13);
                        arr_31 [i_6] [i_7] [i_6] [i_9] = 24;
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_24 += ((252 ? 958613274 : var_8));
                        var_25 = (-6415 && 4915377661052743012);
                        arr_34 [i_6] = (~42);
                    }
                    arr_35 [i_6] [i_6] [i_6] [i_6] = 140;
                    arr_36 [i_8] [i_6] [i_6] [i_6] = (var_5 * var_11);
                }
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    var_26 *= ((var_1 ? 972646264 : ((var_1 ? ((-8861110199919160161 ? 0 : var_10)) : var_7))));
                    arr_39 [i_6] [i_6] [i_11] = (((~var_9) ? (88 != 107) : ((148 ? (252 <= var_11) : ((min(-20911, -16)))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_45 [i_13] [i_6] [i_11] [i_6] [i_6] = (((((153 ? var_6 : 237))) ? (((var_10 ? 27368 : var_10))) : -4915377661052743026));
                                arr_46 [i_6] [i_7] [i_11] [i_6] [i_13] = (max((var_12 * 147), -var_0));
                                var_27 -= 20911;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_28 = var_9;
                                arr_52 [i_15] [i_6] [i_11] [i_14] = ((((((max(var_10, var_12))) ? (!var_8) : 5127)) >> (((!(var_10 || var_8))))));
                                var_29 *= ((!(!0)));
                            }
                        }
                    }
                    arr_53 [i_6] [i_6] = (((~var_3) ? -24414 : (max(var_3, 496))));
                }
                arr_54 [i_6] = (((var_3 != 496) != var_11));
                arr_55 [i_6] [i_6] = 24;
            }
        }
    }
    #pragma endscop
}
