/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((-1015418327 ? (!-14) : var_0));
    var_17 = (max(var_3, (!var_9)));
    var_18 = (max(var_18, var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~var_9);
        var_19 = 2260330864;
        var_20 = 27016;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 |= (((((var_15 ? 2716815622 : (arr_3 [i_1])))) ? ((2135819312 ? var_9 : -1203337151602990513)) : ((((!(arr_5 [i_1])))))));
        arr_6 [i_1] |= (arr_3 [i_1]);
        var_22 = (min(var_22, (((var_14 ? (arr_4 [i_1]) : (arr_3 [i_1]))))));
    }
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_16 [i_2] [i_2] [i_4] = var_0;
                var_23 = ((var_15 ? (arr_9 [i_2]) : ((~(arr_14 [i_2 + 1] [i_3] [i_3])))));
            }
            var_24 ^= (arr_12 [i_2] [i_2 + 1]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_19 [i_5] = (-(arr_10 [i_2 + 1]));

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {

                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    arr_26 [i_5] [i_5] [i_6] [i_7] [i_7] = (((((3064317492419613646 ? 1 : 2089592057))) ? 46100 : 127));
                    arr_27 [i_2] [i_2] [i_2] [i_5] = (~(arr_25 [i_2] [i_5] [i_6] [i_7] [i_2] [i_7 - 1]));
                    var_25 ^= var_8;
                }
                arr_28 [i_5] = (((arr_8 [i_2 - 4] [i_2 + 2]) >> (((arr_8 [i_2 + 1] [i_2 + 2]) - 85))));
                var_26 = (min(var_26, ((((~var_6) / (arr_14 [i_2] [i_5] [i_6]))))));
            }
            var_27 = -2974;

            for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_28 *= ((-(((arr_23 [i_2] [i_2] [i_5] [i_2] [i_8 - 1]) ? 7061550499597876074 : -27026))));
                var_29 &= (arr_8 [i_2] [i_8]);
            }
            for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_30 -= var_10;
                            arr_39 [i_5] [i_9] [i_5] [i_5] = (((arr_20 [i_2 + 1] [i_2 + 2] [i_9 + 1]) ? 46096 : 9314568026779018049));
                            var_31 += -1813694100;
                            arr_40 [i_5] = ((17 ? 1 : -101));
                        }
                    }
                }
                var_32 += ((-(arr_14 [i_2 - 1] [i_2] [i_9 - 1])));
                var_33 = (max(var_33, ((((var_7 > 4294967295) ? (arr_12 [i_5] [i_9 + 1]) : (arr_31 [i_2]))))));
            }
            for (int i_12 = 4; i_12 < 20;i_12 += 1)
            {
                var_34 = var_13;
                var_35 = (!var_14);
                var_36 = (!58);
            }
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            var_37 -= 15;

            /* vectorizable */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                var_38 *= 128;
                var_39 += (((arr_46 [i_2] [i_2 + 1] [i_14]) ? var_11 : (arr_46 [i_2 - 2] [i_2 + 1] [i_13])));
                var_40 = arr_9 [i_2 - 1];
            }
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 20;i_17 += 1)
                    {
                        {
                            arr_56 [i_2 - 2] [i_13] [i_2] [i_16] [i_2 - 4] [i_16] [i_13] = ((-(arr_34 [i_2] [i_13] [i_15] [i_16] [i_17])));
                            var_41 = (min(var_41, (arr_22 [i_2] [i_15])));
                        }
                    }
                }
                var_42 = ((1257472900 << (12108 - 12108)));
                arr_57 [i_2] [i_13] [i_15] = ((~(max(var_0, (((-(arr_25 [i_2 - 1] [i_13] [i_13] [i_13] [i_2] [i_15]))))))));
            }
            var_43 = (max(var_43, (((((((arr_25 [i_2] [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 4]) ? (0 | var_6) : (arr_52 [i_2] [i_2] [i_13])))) ? ((((arr_29 [i_2] [i_13] [i_2]) ? (arr_51 [i_2 - 4] [i_2 + 2] [i_2] [i_13]) : (arr_51 [i_2] [i_2 - 3] [i_2] [i_13])))) : (arr_45 [i_2 + 1] [i_13]))))));
        }

        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            var_44 = (max(var_44, 148));
            var_45 = var_1;
        }
        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {
            var_46 = (min(var_46, (arr_61 [i_2] [i_19] [i_19])));
            var_47 = (max(var_47, (((((max(((1175247117 ? var_7 : (arr_37 [i_19] [i_2] [i_2] [i_2] [i_2 - 4]))), ((-(arr_60 [i_2 - 3] [i_2] [i_19])))))) == (((((arr_61 [i_19] [i_19] [i_19]) ? (arr_29 [i_2] [i_19] [i_2]) : (arr_33 [i_19] [i_19] [i_2] [i_2]))) + (arr_48 [i_2 - 2] [i_19] [i_2 - 2] [i_19]))))))));
            var_48 = (min(var_48, (((1307516300 <= (((((var_8 ? 26996 : var_11))))))))));
            var_49 = ((-(((((arr_50 [i_19] [i_19] [i_2] [i_2]) ? (arr_37 [i_2] [i_19] [i_2] [i_2] [i_19]) : (arr_46 [i_19] [i_19] [i_19]))) | (arr_24 [i_19] [i_2] [i_19] [i_2 - 1])))));
            var_50 = (arr_34 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 - 4]);
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 16;i_21 += 1)
        {
            {
                var_51 ^= 209;
                var_52 = ((-(arr_22 [i_21] [i_21])));
            }
        }
    }
    #pragma endscop
}
