/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_12 += (((((var_5 ? (arr_2 [18]) : (arr_3 [i_0] [i_0])))) ? -var_2 : 255));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 &= var_6;

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_14 = (min(var_14, -191055793));
                        arr_10 [i_0] [i_0] = (arr_7 [i_3 - 1] [i_3 + 1] [i_0] [i_3 + 1]);

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_15 = (((arr_7 [i_4 + 1] [i_0] [i_0] [i_0]) ? var_1 : (arr_7 [i_1] [i_2] [i_0] [i_4])));
                            var_16 = ((((-2657418694809545618 ? 34250 : (arr_5 [i_0] [i_3] [i_0]))) - (arr_9 [i_4] [i_0] [i_0] [4])));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_17 = ((!(((var_11 ? var_6 : (arr_12 [i_0] [i_0] [i_0] [3] [i_0]))))));
                            var_18 = (max(var_18, (~var_4)));
                        }
                    }
                    arr_15 [i_0] [i_2] = var_1;
                    arr_16 [i_0] [i_0] [i_0] = ((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [5] [i_1] [i_0]) : (arr_1 [i_0]));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_22 [i_6] [i_7] [i_6] = (~57);
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_31 [i_6] [i_7] [i_8] [i_10] [i_10] = (arr_27 [i_8] [20] [i_8] [i_8 - 1] [i_10] [i_10] [i_10 + 2]);
                            arr_32 [i_10] [i_8] [0] [i_8] [i_8] = ((var_11 << (((var_0 % var_5) - 21360))));
                            var_19 ^= (arr_3 [i_9] [i_7]);
                            arr_33 [i_6] [i_7] [i_10] = (arr_12 [i_10 - 1] [i_10] [i_10] [i_10 - 1] [i_10 + 1]);
                            var_20 = (arr_11 [i_8 + 1] [i_8 + 2] [i_8 - 2] [i_10]);
                        }
                    }
                }
            }
        }
        var_21 = ((((((arr_20 [i_6]) ? (((var_6 ? var_4 : var_8))) : (((arr_20 [i_6]) ? -4321924394583391411 : 709574532))))) ? (arr_6 [i_6] [i_6] [i_6]) : (arr_24 [10] [i_6])));
        arr_34 [i_6] = arr_28 [i_6] [i_6] [i_6] [i_6] [i_6];
        var_22 = ((((max(var_8, 5363))) ? 42658 : (((arr_14 [i_6]) ? (arr_14 [i_6]) : (arr_14 [i_6])))));
        var_23 = ((var_9 > (arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
    }

    for (int i_11 = 3; i_11 < 24;i_11 += 1)
    {
        var_24 = ((!(!-var_2)));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_25 = (arr_37 [i_14]);
                        var_26 = var_10;
                        var_27 = ((((((arr_39 [i_14]) ? (arr_39 [i_14]) : (arr_39 [i_13])))) ? ((-349036531 ? (arr_39 [i_11]) : 125)) : (((arr_39 [i_14]) ? (arr_39 [i_11]) : var_8))));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
    {
        arr_51 [i_15] &= min((max(16186587063971195122, (arr_48 [i_15]))), var_1);

        /* vectorizable */
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            arr_54 [i_15] [i_15] = -var_5;
            arr_55 [i_16] = ((~(!-4)));
        }
        for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
        {
            var_28 += ((((min((arr_44 [i_17] [i_15] [i_15] [i_15]), (arr_39 [i_17])))) ? (((!(arr_46 [i_15] [16] [i_15] [10] [i_17])))) : ((min((arr_44 [i_15] [i_15] [i_17] [i_17]), (arr_44 [i_15] [i_15] [i_17] [i_17]))))));
            arr_58 [i_17] = (((arr_36 [19]) ? ((((var_11 ? var_3 : 15095)))) : (((arr_38 [i_15] [i_15] [i_15]) ? var_1 : ((var_2 ? var_11 : var_7))))));
            var_29 = (min(var_29, (arr_50 [2])));
        }
        for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
        {
            arr_62 [i_18] = ((var_9 > (arr_48 [i_15])));
            var_30 = (max(var_30, (arr_48 [i_15])));
            arr_63 [i_15] [i_15] = ((((!(arr_45 [i_15] [i_15] [i_18] [i_18] [i_18]))) ? var_5 : var_2));
            var_31 = (arr_61 [i_15] [i_15] [i_15]);
        }
        for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
        {
            var_32 *= 0;
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    {
                        arr_72 [i_15] [7] [i_20] [7] [i_19] = (((((3585392765 ? (arr_35 [i_19]) : ((var_7 ? var_3 : var_4))))) ? ((+((65535 ? (arr_68 [i_19]) : var_2)))) : (min(var_7, (arr_44 [3] [i_19] [i_20] [i_21])))));
                        arr_73 [i_15] [i_15] [i_19] [i_19] [i_15] = (arr_49 [i_19]);
                        var_33 &= ((((((((arr_44 [i_15] [i_15] [0] [i_21]) ? var_0 : var_10)) << (var_9 - 20168)))) ? (!0) : (min(((925026411 ? (arr_64 [i_15]) : var_6)), (((var_0 ? var_2 : var_4)))))));
                    }
                }
            }
            var_34 = var_8;
            var_35 *= (min(139, (((arr_47 [i_15] [i_15] [24] [i_19] [16] [i_19]) ? 34250 : ((17223 ? 37526 : (arr_56 [i_15] [i_15] [i_19])))))));
        }
    }
    for (int i_22 = 0; i_22 < 23;i_22 += 1) /* same iter space */
    {
        arr_78 [i_22] [i_22] = ((var_7 > ((((((arr_74 [i_22]) ? 55421 : var_3))) ? (((arr_75 [i_22]) ? var_7 : var_3)) : (var_2 % var_5)))));
        arr_79 [9] = (min((arr_43 [i_22] [i_22]), (((!(arr_35 [i_22]))))));
        var_36 = (min(var_36, (((!(((var_8 ? (((!(arr_70 [20] [i_22] [i_22] [i_22])))) : (arr_37 [i_22])))))))));
    }
    var_37 |= (((!var_11) ? ((max(var_2, (min(var_2, 54801))))) : 47674));
    /* LoopNest 2 */
    for (int i_23 = 3; i_23 < 20;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 21;i_24 += 1)
        {
            {
                var_38 = (arr_67 [9] [i_23] [i_24]);
                arr_85 [i_24] [i_23] = (arr_70 [i_23] [i_23] [i_23] [5]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 25;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 25;i_26 += 1)
        {
            {
                arr_91 [i_25] [i_25] [i_26] = ((!(((((var_8 || (arr_86 [i_25]))) ? (arr_35 [i_26]) : var_7)))));
                var_39 = 51;
                var_40 = var_11;
            }
        }
    }
    #pragma endscop
}
