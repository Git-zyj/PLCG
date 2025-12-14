/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247374
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
    var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-4594)) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_3)))))), (((/* implicit */int) ((short) (+(var_12)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    var_18 = ((signed char) arr_3 [i_0] [i_0]);
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) (short)4594)) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [7ULL] [i_0] [7ULL]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                }
                arr_7 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_0] [(unsigned short)6] [i_1]) >> (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? ((~(((((/* implicit */_Bool) (short)4593)) ? (-1287027961) : (((/* implicit */int) arr_3 [i_1] [i_1])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_6)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))))));
                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_1 [i_1]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
                var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((max((4294967295U), (((/* implicit */unsigned int) arr_2 [i_1])))) / (((/* implicit */unsigned int) (-(arr_1 [i_1])))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)23875)))), (((/* implicit */int) arr_2 [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) arr_0 [i_3]);
        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_3] [i_3 + 2]))));
        arr_11 [i_3] = ((/* implicit */signed char) arr_3 [i_3] [i_3]);
    }
    /* vectorizable */
    for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [(signed char)10] [(signed char)10]))));
        arr_16 [i_4] [i_4 + 1] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [20ULL]))));
        /* LoopSeq 2 */
        for (short i_5 = 3; i_5 < 10; i_5 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [(_Bool)1])) * (((/* implicit */int) arr_2 [16LL]))));
            var_26 = ((/* implicit */short) arr_14 [i_5]);
        }
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_27 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_4 + 1])) : (0)))));
            /* LoopSeq 4 */
            for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_9 [i_6]))) ? (((arr_12 [i_4 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6] [i_6]))))) : (((/* implicit */unsigned long long int) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))))))));
                var_29 = (i_6 % 2 == 0) ? (((/* implicit */unsigned short) (-(((((/* implicit */int) var_7)) << (((/* implicit */int) arr_0 [i_6]))))))) : (((/* implicit */unsigned short) (-(((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_0 [i_6])) - (81))))))));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    arr_26 [i_4] [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) (-(arr_9 [i_6])));
                    arr_27 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_4 [i_4] [i_6] [i_8])) ? (((/* implicit */int) (short)23870)) : (((/* implicit */int) arr_5 [i_6] [i_6])))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_4] [0U])) < (((/* implicit */int) arr_10 [i_6] [(_Bool)1])))))));
                }
                for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_6 [i_9] [i_6] [i_7])))) ? (((((/* implicit */_Bool) arr_24 [i_6] [i_6] [9U])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)4594)))) : (((/* implicit */int) arr_3 [(signed char)0] [(signed char)0])))))));
                    var_31 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-4594)))))));
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_4])) && (((/* implicit */_Bool) -1LL)))) ? (arr_24 [i_4 - 2] [i_4] [i_4]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_4]))))))))));
                }
                arr_32 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (var_15) : (((/* implicit */unsigned long long int) arr_22 [i_6] [1ULL] [i_7]))))));
                arr_33 [i_4] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_4 - 2] [i_4 - 3] [i_4] [i_4 + 1])) ? ((~(arr_30 [i_7] [i_6] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6]))) <= (var_15)))))));
            }
            for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 3) 
            {
                var_33 &= ((/* implicit */unsigned int) ((unsigned char) arr_14 [i_4]));
                /* LoopSeq 2 */
                for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    var_34 *= var_4;
                    arr_38 [i_11] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((unsigned int) arr_24 [i_6] [1] [i_11])) % (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [i_10 + 1])))));
                }
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    var_35 = ((((/* implicit */_Bool) arr_10 [i_6] [i_6])) ? (((-860895613) & (((/* implicit */int) arr_17 [i_4])))) : (((((/* implicit */_Bool) arr_13 [i_10] [7])) ? (((/* implicit */int) arr_20 [i_4] [i_12])) : (((/* implicit */int) (short)-23862)))));
                    var_36 &= ((/* implicit */_Bool) (short)-4595);
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_46 [i_4] [i_6] [i_6] [6ULL] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4 + 2] [i_4])) ? (((/* implicit */unsigned long long int) 1798038243U)) : (9187343239835811840ULL)))) ? ((~(arr_23 [i_4] [i_4 - 2] [i_4] [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_6] [i_13])) : (((/* implicit */int) arr_2 [i_6])))))));
                        var_37 = ((/* implicit */unsigned short) arr_3 [i_6] [i_10]);
                    }
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
                    {
                        arr_49 [i_4] [i_6] [i_6] [i_4] [i_14] = (~(((/* implicit */int) arr_14 [i_4])));
                        arr_50 [i_4] [i_6] [i_4] = ((((/* implicit */int) arr_3 [i_6] [i_12])) - (((/* implicit */int) arr_3 [i_6] [i_6])));
                        var_38 = ((/* implicit */long long int) (-2147483647 - 1));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)34686))) : (((((/* implicit */unsigned long long int) 3198473659U)) * (arr_12 [i_4])))));
                    }
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */signed char) (-(((/* implicit */int) arr_31 [i_15] [i_6] [i_10] [i_6] [i_4]))));
                        arr_53 [i_6] [i_4 - 3] [i_10 - 1] [i_6] [i_6] = ((/* implicit */long long int) 129024);
                        var_41 *= ((/* implicit */unsigned short) arr_28 [i_15] [i_15] [i_15] [8]);
                        arr_54 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_6] [i_4 + 1] = ((/* implicit */unsigned int) arr_17 [i_15]);
                        var_42 -= ((/* implicit */unsigned short) (!(((((/* implicit */long long int) 0)) > (-1106122605219806039LL)))));
                    }
                    for (short i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        var_43 += ((/* implicit */unsigned short) arr_30 [i_4] [i_4 + 1] [(_Bool)1] [i_4]);
                        arr_57 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_25 [i_4] [i_4] [i_16] [i_16])))) || (((/* implicit */_Bool) arr_37 [i_10 + 1] [i_4 - 1] [i_6] [i_12]))));
                    }
                }
            }
            for (signed char i_17 = 4; i_17 < 11; i_17 += 2) 
            {
                arr_60 [i_6] [i_6] [i_4 - 3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_4 + 2] [i_17 + 2] [i_6] [i_4])) ? (arr_37 [i_4 + 2] [i_17 + 1] [i_6] [i_6]) : (arr_37 [i_4 + 1] [i_17 - 1] [i_6] [i_6])));
                arr_61 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) var_11);
            }
            for (int i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 1; i_19 < 10; i_19 += 3) 
                {
                    for (int i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        {
                            var_44 += ((/* implicit */signed char) (+(((arr_47 [i_4] [i_18] [6ULL] [i_18] [i_19] [i_20]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_20] [i_18] [i_18] [i_4]))) : (4611683819404132352ULL)))));
                            var_45 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_6])) | (((/* implicit */int) arr_52 [i_6] [i_6])))) < (((arr_28 [i_4] [i_6] [i_6] [4U]) ? (((/* implicit */int) arr_18 [i_19] [i_6] [i_4])) : (((/* implicit */int) arr_18 [i_20] [i_19 + 1] [i_4]))))));
                            var_46 = ((/* implicit */unsigned int) arr_51 [i_6]);
                            var_47 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_58 [i_6]))));
                        }
                    } 
                } 
                arr_70 [i_4] [i_6] [i_6] [i_18] = ((/* implicit */unsigned char) arr_40 [i_18] [i_6] [i_18]);
                var_48 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_39 [i_6] [i_18]) <= (((/* implicit */long long int) 10))))) - (((/* implicit */int) arr_17 [i_4]))));
            }
        }
    }
}
