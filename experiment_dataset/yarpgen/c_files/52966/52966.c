/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (((((-87 ? ((var_6 ? 199 : var_19)) : ((max(45, (arr_3 [i_0]))))))) ? (arr_1 [i_0] [8]) : var_11));
                arr_4 [i_0] = ((((min((arr_0 [i_0]), 255))) ? var_1 : (min(80, ((206 ? var_16 : 167))))));
                var_21 = ((~(arr_3 [i_0])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 = arr_1 [i_2] [i_2];
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        var_23 = max((min(255, 196)), (arr_10 [i_2]));
                        var_24 = (min(var_24, ((((((!var_14) == var_4)) ? ((174 & ((var_10 ? var_7 : 255)))) : ((max((arr_1 [i_5] [i_5 + 1]), var_11))))))));
                        arr_17 [i_5] [i_3] [i_3] [i_5 + 1] = arr_1 [i_2] [i_2];
                    }
                }
            }
        }
        arr_18 [i_2] = ((((((255 ? 52 : var_5)) & ((min(var_15, (arr_0 [i_2])))))) + ((var_19 ? var_4 : (arr_1 [i_2] [i_2])))));
        var_25 *= (max(var_16, (((110 & var_12) ? 255 : ((~(arr_16 [4] [i_2] [i_2] [4])))))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_26 = (((((170 ? ((255 ? 213 : 255)) : 126))) ? 255 : 112));
        var_27 = 255;
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] [i_7] = ((244 ? 255 : 255));

        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_35 [i_10] [i_10] [i_10] = (min(((255 >> (((((arr_28 [i_10] [i_9] [i_7]) + (arr_19 [i_10]))) - 126)))), (arr_31 [i_10 + 1] [i_10] [i_10] [i_10 - 2] [i_10])));
                        var_28 *= var_15;
                        var_29 = (max(((10 ? 255 : 111)), -57));
                        var_30 = (((~var_1) & ((min(var_3, var_14)))));
                        var_31 -= ((((200 != (arr_23 [i_7]))) ? (arr_25 [15]) : (114 - 255)));
                    }
                }
            }
            var_32 = (!var_7);
            arr_36 [i_7] [i_7] = ((((~(arr_21 [i_7] [i_8]))) != var_11));
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            var_33 = var_6;
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            arr_47 [12] [i_12] [5] [12] = (min((((((89 ? var_14 : var_19))) ? ((-(arr_44 [i_7] [i_7] [i_7] [i_13] [i_14]))) : (arr_39 [i_7] [i_7] [i_7]))), (max((arr_34 [i_12 - 2] [i_12 - 2] [i_12 + 3]), (((arr_43 [15] [16] [i_12] [i_13] [i_14]) ? 174 : (arr_20 [i_11])))))));
                            arr_48 [14] [i_13] [i_11] [i_11] [i_7] = ((var_11 ? ((~((((arr_39 [i_7] [7] [i_7]) < 255))))) : ((min((max((arr_28 [4] [i_12] [i_7]), (arr_33 [4] [i_7] [i_7] [i_7]))), (max(var_14, var_7)))))));
                            var_34 *= (min((min(((255 ? (arr_34 [i_7] [i_11] [9]) : 255)), (((!(arr_45 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))), ((((arr_32 [i_7] [i_14] [i_12] [i_13]) < (arr_45 [i_7] [2] [i_7] [i_7] [i_7] [15]))))));
                        }
                    }
                }
            }
            arr_49 [i_7] = (min((((arr_29 [i_7] [i_7] [i_11]) ? (arr_29 [i_11] [i_11] [i_7]) : (arr_29 [9] [9] [i_7]))), ((((170 ? (arr_33 [i_7] [i_11] [i_11] [i_11]) : (arr_32 [i_7] [i_11] [i_11] [i_11])))))));
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
        {
            var_35 = ((((((max(255, var_13))) == 233)) ? ((max((arr_22 [6]), 193))) : (arr_24 [i_7] [i_15])));
            var_36 |= ((255 ? ((+((((arr_23 [i_7]) != 86))))) : (arr_32 [i_7] [i_7] [i_7] [i_15])));
            var_37 = 255;
            arr_52 [i_7] = ((((min((arr_27 [i_7]), (max((arr_23 [i_15]), 255))))) < ((-141 ? -var_12 : ((max(var_12, 255)))))));
        }
        var_38 = ((-(arr_39 [0] [i_7] [i_7])));

        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    {
                        var_39 = ((((((max(188, var_1))))) ? (min((arr_51 [i_7] [i_17] [i_18]), (254 / 255))) : ((min((arr_45 [i_7] [i_16] [4] [1] [i_16] [i_17]), (arr_45 [i_18] [i_18] [7] [i_17] [i_16] [i_7]))))));
                        var_40 = ((var_4 ? (66 < 25) : 255));
                    }
                }
            }
            var_41 = ((255 ? 106 : 247));
            var_42 -= (((arr_46 [i_7] [i_16 + 4] [i_16] [i_16 + 2] [i_16 + 1] [i_16]) ? (min(((var_15 ? (arr_28 [i_7] [i_7] [i_7]) : (arr_40 [i_16] [i_7] [i_7] [i_7]))), 255)) : (arr_39 [i_16] [i_7] [i_7])));
            var_43 &= ((183 ? 30 : 202));
            var_44 = var_19;
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 16;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 16;i_21 += 1)
                {
                    {
                        var_45 = (!var_1);
                        var_46 = (((arr_51 [i_21 - 1] [i_21 - 2] [i_20 + 1]) ? (arr_51 [i_21 + 1] [i_21 - 2] [i_20 - 1]) : (arr_54 [3] [i_21 - 1])));
                    }
                }
            }
            arr_70 [i_7] = ((120 >> (206 - 204)));

            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                var_47 = ((236 ? var_12 : ((var_0 + (arr_51 [i_22] [i_22] [4])))));
                arr_73 [14] = 244;
                var_48 = -4;
            }
            var_49 *= 210;
            var_50 = (((arr_28 [i_7] [i_7] [i_7]) ? 79 : (arr_28 [i_7] [i_19] [i_19])));
        }
    }
    var_51 = -23;
    var_52 = var_0;
    var_53 = ((var_12 ? var_16 : var_17));
    #pragma endscop
}
