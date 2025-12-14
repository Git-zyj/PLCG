/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51776
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [i_1])) : (arr_2 [i_1])));
                arr_7 [(unsigned short)4] [i_1] = ((/* implicit */int) var_0);
                arr_8 [i_1] [i_0 + 3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (arr_0 [i_0 + 2]))), (((/* implicit */int) ((var_4) > (arr_2 [i_1]))))));
                arr_9 [i_0] [i_0] [i_1] = ((long long int) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                {
                    var_10 -= ((/* implicit */long long int) -25);
                    var_11 = ((/* implicit */int) arr_2 [i_4 + 1]);
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_2]))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_1))));
                                arr_31 [i_2] = ((/* implicit */unsigned long long int) var_9);
                                var_14 |= ((((/* implicit */_Bool) (~(arr_0 [i_5 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_24 [i_5 + 1] [i_5 + 1] [i_6] [i_7] [i_8 - 1] [i_6])))) : (var_4));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_14 [i_2])))))) ? (((((/* implicit */_Bool) -25)) ? (((/* implicit */int) arr_29 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_2] [i_6])) : (25))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6])) || (((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            for (signed char i_11 = 1; i_11 < 12; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    {
                        arr_41 [i_9] [(unsigned char)9] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_11 + 2] [i_9])) ? (arr_32 [i_11 + 1] [i_9]) : (arr_32 [i_11 + 2] [i_9])))) ? (((((/* implicit */_Bool) arr_32 [i_11 + 2] [i_9])) ? (arr_32 [i_11 + 1] [i_9]) : (arr_32 [i_11 - 1] [i_9]))) : ((-(arr_32 [i_11 - 1] [i_9])))));
                        arr_42 [i_9] [(unsigned char)9] [i_11 - 1] [i_9] [i_12] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61214))) : (arr_34 [i_12] [i_9] [i_9])))))));
                    }
                } 
            } 
        } 
        var_16 *= ((/* implicit */unsigned long long int) var_5);
        /* LoopNest 2 */
        for (short i_13 = 2; i_13 < 11; i_13 += 4) 
        {
            for (short i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                {
                    arr_47 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) (~(((((/* implicit */_Bool) (+(var_9)))) ? (arr_40 [i_9]) : (((/* implicit */unsigned long long int) var_5))))));
                    arr_48 [0] [i_9] [i_14] = (+(((((/* implicit */_Bool) arr_45 [i_13 + 2] [i_13 + 3] [i_13 - 1] [i_13])) ? (((/* implicit */int) arr_45 [i_13 + 2] [i_13 + 3] [i_13 - 1] [i_13 + 3])) : (((/* implicit */int) arr_45 [i_13 + 2] [i_13 + 3] [i_13 - 1] [i_13])))));
                    var_17 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max(((!((_Bool)1))), ((!(((/* implicit */_Bool) (short)-13724))))))), ((-(max((((/* implicit */unsigned long long int) var_2)), (0ULL)))))));
                    arr_49 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) 16781933351221916499ULL)))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) arr_38 [6ULL] [i_9] [7] [i_9] [i_9]);
    }
    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
    {
        var_19 = arr_46 [i_15];
        arr_52 [i_15] = ((/* implicit */long long int) var_2);
        arr_53 [i_15] = ((/* implicit */unsigned char) max((arr_40 [i_15]), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_45 [(short)9] [i_15] [1] [i_15])) : (((/* implicit */int) var_3)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 3) 
        {
            arr_58 [i_15] [i_16 + 1] [6] &= ((/* implicit */int) (short)-2693);
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                for (unsigned short i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    {
                        var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_16 - 2])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_33 [i_16 - 2])));
                        arr_63 [i_15] [i_15] [i_16] [i_15] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)13718)) ? (arr_46 [i_15]) : (arr_50 [i_15] [i_18]))) + (2147483647))) << (((((((/* implicit */_Bool) arr_44 [i_15] [i_16] [i_15])) ? (((/* implicit */int) var_3)) : (411093183))) - (16066)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                for (unsigned char i_20 = 0; i_20 < 14; i_20 += 3) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned long long int) ((((_Bool) (short)2693)) ? (((/* implicit */long long int) ((int) (unsigned short)60174))) : (var_9)));
                        arr_68 [i_20] [i_20] [i_15] [i_15] [i_16] [i_15] = ((/* implicit */unsigned short) arr_60 [1ULL]);
                        arr_69 [i_15] = ((/* implicit */unsigned char) arr_34 [i_16 - 1] [i_15] [12LL]);
                    }
                } 
            } 
            arr_70 [i_15] = arr_38 [i_16] [i_16] [i_16 + 1] [(short)13] [i_16];
        }
        /* vectorizable */
        for (unsigned long long int i_21 = 3; i_21 < 13; i_21 += 3) 
        {
            var_22 = ((/* implicit */long long int) (~(arr_54 [i_15] [i_15] [i_15])));
            arr_73 [i_15] = ((long long int) arr_40 [i_15]);
            arr_74 [i_15] [i_21] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)61925))));
        }
        for (unsigned long long int i_22 = 1; i_22 < 13; i_22 += 2) 
        {
            arr_77 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_22 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_15] [i_22 - 1] [i_22 - 1]))) : ((-(16781933351221916497ULL)))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 14; i_23 += 1) 
            {
                for (int i_24 = 0; i_24 < 14; i_24 += 4) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_34 [i_15] [i_24] [i_23])) ? (((/* implicit */unsigned long long int) arr_60 [i_22 + 1])) : (arr_34 [i_15] [i_24] [i_23]))));
                        arr_83 [i_15] [i_22 - 1] [i_23] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_81 [i_15] [i_22] [i_22 - 1] [i_23] [i_15] [i_24]))))) ? (((((/* implicit */_Bool) max((16781933351221916497ULL), (((/* implicit */unsigned long long int) (unsigned short)58181))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_22 - 1]))) : (1664810722487635104ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_25 = 0; i_25 < 14; i_25 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_22 + 1] [i_15])))))));
                arr_87 [i_15] [i_15] = ((/* implicit */long long int) 25);
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                arr_90 [i_15] [i_22] [i_22] [i_15] = ((/* implicit */int) var_5);
                var_25 = ((/* implicit */unsigned char) var_1);
            }
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) -411093191))));
            /* LoopSeq 2 */
            for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 1) 
            {
                var_27 += ((/* implicit */unsigned char) (-(arr_34 [i_27] [(unsigned char)4] [i_15])));
                arr_93 [(_Bool)1] [i_15] [i_22] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_50 [i_15] [i_22])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) arr_92 [i_27] [i_22] [i_15])) : ((~((~(((/* implicit */int) arr_35 [i_15]))))))));
                var_28 *= ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned short)60174)))));
                var_29 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_50 [i_22 + 1] [i_22 - 1]))));
            }
            for (unsigned short i_28 = 1; i_28 < 13; i_28 += 3) 
            {
                arr_96 [i_15] [i_15] = ((/* implicit */short) (+(arr_94 [i_22])));
                arr_97 [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [1ULL] [i_15] [(signed char)12]))));
            }
        }
        for (int i_29 = 0; i_29 < 14; i_29 += 4) 
        {
            var_30 = ((/* implicit */long long int) (~(var_6)));
            arr_101 [i_15] [i_15] [i_29] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        }
    }
    var_31 = ((/* implicit */short) 2113929216U);
    var_32 = ((/* implicit */_Bool) var_8);
    var_33 = var_3;
}
