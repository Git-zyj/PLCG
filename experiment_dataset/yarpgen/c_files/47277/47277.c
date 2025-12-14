/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = var_0;
            var_18 = -207;
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_19 = 21;
            var_20 = var_7;

            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {
                var_21 = (((arr_9 [i_0] [i_2] [i_3]) <= var_12));
                var_22 = (((arr_2 [i_0] [i_2 + 2] [i_2 - 1]) & 30174));
                var_23 = var_6;
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
            {
                var_24 = (((arr_14 [i_0] [0]) ? ((224 ? var_9 : -100)) : -100));
                var_25 = (var_2 ^ 10749173708185627661);
                var_26 = ((-(arr_13 [i_0] [i_0])));
                var_27 = (100 * -80);
            }
        }
        var_28 = ((~((-1660091957 ? 65 : 14148353246625172201))));

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_29 = (arr_1 [i_0] [i_0]);
            var_30 = ((var_10 ? (arr_10 [i_0] [i_0]) : (arr_16 [i_0])));
        }
        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_31 = ((104 ? (0 / 35376) : 0));
                var_32 = 15;
            }
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_33 = (((~21) ? (var_7 <= var_4) : 127));
                    var_34 = (((arr_20 [i_0] [i_8 - 1]) ? (arr_15 [i_6] [i_6 + 1] [i_8 - 2]) : var_7));
                    var_35 = ((64292 ? (arr_3 [13] [i_6 - 1]) : -var_1));
                }
                var_36 = 97;
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_37 = ((((var_8 ? 1 : -951603852640267557)) << (var_9 + 6258408350511769043)));
                var_38 = (arr_5 [i_0] [i_6 - 1]);
                var_39 = ((102 ? var_9 : (((3436772220268762383 ? 1 : 1)))));
                var_40 = var_5;
            }
            var_41 = (((3097870821 >= 3436772220268762383) && (~1)));
        }
        for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
        {
            var_42 = ((~((((arr_26 [16] [i_0] [i_11] [i_11 - 1] [16] [i_11]) && 1)))));
            var_43 = (-127 - 1);
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            var_44 = ((-(arr_24 [i_0] [i_12])));
            var_45 = ((-(arr_3 [i_12] [9])));
            var_46 = ((var_6 ? 80 : (var_12 && 1)));
            var_47 = 559024807;
        }
        var_48 = -var_13;
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_49 = (((!-71) ? var_12 : (min((min(var_15, var_14)), (2231280832 ^ 4294967295)))));
        var_50 = ((-((~(3436772220268762383 || var_9)))));
    }
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        var_51 = (((max(2147418112, (arr_39 [i_14])))) ? (max(42004, 1690972674130745940)) : (arr_40 [i_14]));
        var_52 = ((!(arr_40 [i_14])));
        var_53 = ((!54439) && (((65 || 59503) || 185386229)));
    }
    var_54 = var_2;
    var_55 = (!255);
    #pragma endscop
}
