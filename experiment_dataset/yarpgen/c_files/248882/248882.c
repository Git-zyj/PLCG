/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 ^= (min((arr_4 [9]), -11025));
                    arr_9 [i_0] = ((arr_2 [i_1]) >> (52731 - 52718));
                    arr_10 [i_0] [i_1] [i_1] [i_1] |= var_10;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_12 += (arr_8 [i_3] [i_4] [i_5] [i_6]);
                        arr_21 [i_3] [i_4] [i_3] [i_5] [i_4] = (arr_6 [i_5 - 1] [i_5 + 1] [i_5 - 1]);
                    }
                }
            }
            arr_22 [i_4] [i_3] [i_3] = var_2;
            var_13 = var_1;
            var_14 = 40;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_15 ^= ((!(arr_6 [i_7 + 3] [i_7 + 3] [i_7 - 3])));
                        var_16 = (((arr_12 [i_7 - 1] [i_7 - 1]) & (arr_12 [i_7 - 3] [i_7 - 2])));
                        arr_29 [i_3] [i_3] [10] [i_7] [i_3] [i_8] = (arr_17 [2] [2]);
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            arr_34 [i_3] [i_3] [i_9] = (arr_4 [i_9]);
            var_17 = (-9829 | 0);

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_18 = (arr_26 [i_3] [i_9]);
                var_19 = var_8;
            }
            for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
            {
                arr_39 [i_9] = ((((((arr_37 [i_9] [i_9] [i_9]) ? (arr_8 [i_3] [i_3] [i_11] [i_11]) : 0))) ? (arr_14 [i_3] [i_9] [i_11]) : (65535 / var_10)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_20 = ((arr_7 [i_9] [i_12]) - (arr_7 [i_9] [i_12]));
                            arr_47 [i_3] [i_9] [i_3] = (((((arr_35 [i_3] [i_9] [i_9]) > (arr_41 [i_3]))) ? (arr_26 [5] [8]) : (arr_30 [i_9] [i_3] [i_13 + 1])));
                            var_21 = (((arr_7 [i_9] [i_12]) & (arr_33 [i_3] [i_3] [i_11])));
                        }
                    }
                }
                var_22 = (arr_14 [i_11 + 1] [i_11] [i_11 - 1]);
                var_23 -= (arr_45 [i_11]);
            }
            for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
            {
                var_24 = (arr_13 [i_3] [2]);
                var_25 = (max(var_25, (((-(arr_23 [1] [i_9]))))));
                arr_51 [i_3] [11] [i_9] = ((((((arr_18 [i_3] [i_3] [i_3]) + 2147483647)) >> (var_0 - 2845070090))) % (arr_25 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 + 1]));
            }
        }
        for (int i_15 = 3; i_15 < 11;i_15 += 1) /* same iter space */
        {
            var_26 = (!1680751168);

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_27 = (arr_30 [i_16] [i_16] [i_16]);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 9;i_18 += 1)
                    {
                        {
                            var_28 ^= (((arr_24 [i_3] [1] [i_16]) ? (arr_1 [i_17] [i_15 - 2]) : 0));
                            var_29 += (arr_37 [i_17] [i_15] [i_15]);
                        }
                    }
                }
                arr_64 [i_16] [i_16] [i_3] [i_16] = ((((((arr_55 [i_15 - 1] [i_15 - 1] [i_3]) ? var_1 : (arr_57 [i_3])))) ? (arr_45 [i_3]) : (((arr_32 [i_3] [i_3] [i_16]) ? (arr_25 [5] [6] [i_16] [i_16]) : 2005288874))));
                var_30 &= (((arr_17 [1] [1]) / (arr_17 [10] [10])));
            }
        }
        for (int i_19 = 3; i_19 < 11;i_19 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    {
                        var_31 = (((arr_5 [i_20]) ? (((arr_69 [7] [10] [7]) / (arr_25 [i_3] [i_19 - 1] [i_19 - 1] [i_21]))) : 40));
                        var_32 = (((arr_20 [i_3] [i_20] [i_19]) ? (arr_27 [i_19 - 1] [i_19 - 1] [i_21] [i_21] [i_19]) : (((arr_59 [6] [i_19] [i_20] [i_20]) & (arr_26 [i_3] [i_19])))));
                        arr_74 [i_20] [i_21] = arr_59 [6] [6] [i_20 + 1] [i_20];
                        arr_75 [i_3] [i_19] [1] [i_3] [i_20] = (arr_33 [i_3] [i_3] [i_3]);
                    }
                }
            }
            arr_76 [i_3] = (arr_14 [i_3] [i_19] [i_19]);
            arr_77 [i_3] [i_19] [i_19] = ((var_1 >= (arr_68 [i_19] [i_19 - 3] [i_19 + 1])));
            var_33 = (((arr_8 [i_3] [i_3] [i_3] [i_3]) ? (arr_8 [i_3] [i_3] [i_3] [i_19]) : var_1));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 12;i_22 += 1)
            {
                for (int i_23 = 3; i_23 < 10;i_23 += 1)
                {
                    {
                        var_34 = (arr_2 [i_19]);
                        var_35 = (arr_59 [11] [i_3] [i_19 - 1] [i_23]);
                        var_36 = var_7;
                        var_37 = (((-110 ? (arr_41 [i_22]) : 1)));
                    }
                }
            }
        }
        var_38 = (((arr_68 [i_3] [i_3] [i_3]) < (arr_5 [i_3])));
    }
    for (int i_24 = 0; i_24 < 12;i_24 += 1) /* same iter space */
    {
        var_39 = (arr_65 [8] [8] [i_24]);
        /* LoopNest 3 */
        for (int i_25 = 1; i_25 < 10;i_25 += 1)
        {
            for (int i_26 = 3; i_26 < 8;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 12;i_27 += 1)
                {
                    {
                        var_40 = (((((~(((arr_15 [i_25]) - -40))))) ? ((((((arr_62 [i_24] [i_24] [i_26] [i_26] [i_24]) - (arr_24 [i_24] [0] [i_27])))) ? 18401 : (~var_10))) : (((((arr_86 [5] [5] [5]) > ((1221654212500963072 >> (2248645383499333278 - 2248645383499333238)))))))));
                        var_41 = var_3;
                        arr_92 [i_25] [i_24] = (((((arr_27 [i_24] [i_25] [0] [i_27] [i_26]) + 2147483647)) << ((((max(((var_5 != (arr_84 [i_25] [i_24]))), (((arr_70 [0] [i_26 - 2] [i_27]) || 40))))) - 1))));
                    }
                }
            }
        }
    }
    for (int i_28 = 0; i_28 < 1;i_28 += 1)
    {
        var_42 = (max(var_42, (arr_93 [i_28])));
        var_43 = (((arr_94 [i_28] [i_28]) & (((62721 ^ 40) ? (arr_94 [i_28] [i_28]) : ((62743 ? var_4 : (arr_93 [i_28])))))));
        /* LoopNest 2 */
        for (int i_29 = 2; i_29 < 16;i_29 += 1)
        {
            for (int i_30 = 1; i_30 < 17;i_30 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_31 = 1; i_31 < 15;i_31 += 1)
                    {
                        for (int i_32 = 1; i_32 < 15;i_32 += 1)
                        {
                            {
                                var_44 = var_3;
                                var_45 = (max(var_45, ((min((arr_100 [i_32 + 3]), (((arr_100 [i_32 + 3]) / (arr_100 [i_32 - 1]))))))));
                                var_46 = (((arr_102 [i_28] [i_29 - 2] [i_31] [i_32]) * (((arr_97 [i_31 + 3] [i_30 + 1] [i_29 + 1]) * (((arr_95 [i_29] [i_31]) ? 65535 : (arr_97 [8] [i_30] [i_31])))))));
                            }
                        }
                    }
                    var_47 = (arr_102 [i_30] [i_29] [1] [i_28]);
                }
            }
        }
    }
    var_48 = ((var_9 < var_3) != var_5);
    var_49 = (min(var_49, var_8));
    var_50 = var_0;
    #pragma endscop
}
