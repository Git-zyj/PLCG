/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_12 = (arr_3 [i_1]);
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] = 1112491958;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_13 |= 255;
                            var_14 ^= ((((arr_8 [i_5] [i_5 + 2] [i_5 + 2]) ? (arr_7 [i_5 + 3]) : var_11)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            {
                arr_23 [i_7] [18] [i_7] = var_9;
                var_15 += (~189);
                arr_24 [i_7] = (((((!(arr_19 [i_7 - 1] [i_7])))) < ((((((arr_19 [i_7] [i_6]) ? (arr_20 [i_6]) : 10))) ? var_9 : (arr_22 [i_7 + 1] [i_7 - 1] [i_7])))));
                arr_25 [i_7] [i_7] [i_7] = (((arr_18 [i_6]) ? 253 : (((!(!var_2))))));
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_16 = (((((-((var_10 ? 4148042013 : 1112491958))))) ? 4045519750818619893 : (arr_34 [i_7] [i_7])));
                                arr_35 [i_6] [i_6] [i_6] [i_7] [i_6] = (max((((!(4128768 >= 7453431252567499667)))), (max((60 ^ var_1), (arr_32 [i_6] [i_6] [i_7] [i_7 + 1] [i_9] [i_10])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_17 |= ((!(arr_47 [i_14] [i_14] [i_14] [i_13 - 1] [i_11])));
                            arr_48 [i_11] [i_11] [i_11] [i_13] = (min(var_4, (arr_13 [i_11] [5] [5] [i_13])));
                            arr_49 [i_12] [i_13] [i_14] = ((-1112491963 + 2147483647) >> (((max(-119511476, -513400958)) + 119511491)));
                            var_18 &= ((-182 % 7453431252567499685) ? ((((((min(-68, 2647517842))) || (~var_1))))) : 920656211);
                        }
                    }
                }
                var_19 = ((~((((arr_6 [i_11] [i_12] [i_11]) == (arr_6 [i_12] [i_11] [i_11]))))));
                var_20 = (min(var_11, ((var_9 >> (arr_33 [i_11] [i_11] [i_12] [i_12] [i_12] [i_12] [i_12])))));
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 0;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 11;i_17 += 1)
                        {
                            {
                                arr_59 [i_11] [i_11] [i_11] [i_11] [i_15] [i_11] = 7453431252567499654;
                                arr_60 [i_11] [i_11] [i_11] [i_12] [i_15] [i_11] [10] |= ((var_0 * ((((((var_4 ? var_4 : (arr_46 [i_11] [i_17])))) ? (~-1112491958) : (((!(arr_32 [i_17] [i_16] [i_15] [i_15] [18] [18])))))))));
                                var_21 += ((((((arr_33 [i_11] [i_16] [i_16] [i_16] [i_17] [i_17 + 1] [i_17]) ? (-1112491985 && var_7) : -0))) != (max(((var_10 ? 182 : var_0)), 0))));
                                arr_61 [i_15] = var_7;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            {
                                arr_68 [i_11] [i_11] [i_18] [i_19] [i_20] = (max((arr_32 [i_11] [i_11] [i_11] [i_11] [1] [i_11]), 7453431252567499690));
                                var_22 = (arr_42 [i_18] [i_19] [i_20]);
                                arr_69 [7] [i_12] [i_12] [i_12] [i_12] = (arr_27 [i_20] [i_11] [i_11]);
                                arr_70 [i_11] [i_12] [i_12] [i_19] [i_20] = ((-(((((var_5 % (arr_64 [i_11])))) ? 2220404711 : (min(var_6, var_3))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
