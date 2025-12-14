/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236016
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) max((var_13), (((/* implicit */short) (unsigned char)37)))))) ? (((((/* implicit */_Bool) 3841235181U)) ? (808899478U) : (((/* implicit */unsigned int) -578405451)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((4294967295U) / (((/* implicit */unsigned int) -7))))))))))))));
    var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) var_11))))) : (var_0))) : (((/* implicit */unsigned long long int) 6))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) (signed char)127)) == (((/* implicit */int) (unsigned char)255))))), (((((/* implicit */int) (short)0)) + (3))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_6))) << (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32755))) == (var_5)))) * (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) (_Bool)0)))))))));
        var_18 -= ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_19 = ((/* implicit */short) var_3);
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned long long int) ((short) 441550744953743577LL))))));
            var_21 = ((/* implicit */short) max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) arr_1 [i_1])))), (max((((int) arr_1 [i_1])), (((int) var_10))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) arr_0 [i_0]);
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */int) var_13)) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_2] [i_3])) : (0))))) == (max((arr_8 [i_1]), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (263403214)))))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_3))))) ? (((unsigned long long int) arr_9 [(short)10] [i_1] [i_1] [i_1])) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_13)), (var_2)))), (((var_14) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26992)))))))))))));
                    }
                } 
            } 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */long long int) max((((((/* implicit */int) arr_1 [i_0])) << ((((-(arr_9 [i_1] [i_1] [i_0] [i_0]))) - (1239217835U))))), (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1]))))) : (((/* implicit */long long int) max((((((/* implicit */int) arr_1 [i_0])) << ((((((-(arr_9 [i_1] [i_1] [i_0] [i_0]))) - (1239217835U))) - (3281789632U))))), (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1])))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned int) var_0);
                        arr_21 [i_0] [i_5] = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_5 - 2]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_7 + 1] [i_7 - 1] [i_7] [i_7 + 1])))) ^ (((((/* implicit */_Bool) arr_7 [i_7 + 1] [i_7 - 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_7])), ((unsigned char)1))))) : (((var_5) | (((/* implicit */long long int) arr_13 [i_4] [i_4]))))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [13] [i_4] [i_7])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-992376106721315346LL)))) ? (((/* implicit */int) var_4)) : (max((-1725256299), (((/* implicit */int) arr_23 [i_0] [i_4] [i_7 + 1] [(unsigned char)3]))))))));
                        var_28 = ((/* implicit */unsigned int) max((arr_24 [i_8] [i_7] [i_4] [i_4] [i_4] [i_0]), (((/* implicit */int) ((((long long int) arr_25 [i_0] [i_4] [i_7])) < (((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_2))))))))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((var_6), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((-3), (((/* implicit */int) (_Bool)0))))), (618498923441367971LL)))))))));
        /* LoopSeq 2 */
        for (long long int i_10 = 3; i_10 < 12; i_10 += 1) 
        {
            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_10 [i_9] [i_10] [i_9] [i_9])), (arr_26 [i_9] [i_10] [i_10] [i_10])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_31 [i_9] [i_10] [i_9]))))))));
            var_31 = ((/* implicit */long long int) (~(max((-7), (-4)))));
            var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)65535)));
        }
        for (int i_11 = 1; i_11 < 11; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                var_33 = ((((/* implicit */_Bool) arr_27 [i_11] [i_12])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)179)), (992376106721315346LL)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)191))))))) : (arr_20 [i_12] [i_11] [i_9] [i_9]));
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 13; i_14 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [0LL]))) : (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
                            arr_47 [i_9] [4] [i_9] [i_14 + 1] [i_9] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) arr_1 [i_11 + 3])), (var_6)))));
                        }
                    } 
                } 
                arr_48 [i_9] [i_9] [i_9] = ((/* implicit */signed char) var_12);
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((unsigned int) 3)))));
            }
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9]))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (21673995U)))) ? (max((arr_32 [i_9] [i_11]), (((/* implicit */long long int) (unsigned char)10)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) (unsigned char)179)))))))))))));
            var_37 = ((/* implicit */short) (((~(arr_22 [i_11 - 1]))) / (((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [i_9] [i_11] [i_11 + 1])))))));
            arr_49 [i_11] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_11 + 1]))));
        }
        var_38 = var_6;
    }
    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */signed char) max(((~(arr_52 [i_15]))), (((/* implicit */long long int) ((unsigned int) 4294967295U)))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned short i_19 = 3; i_19 < 13; i_19 += 1) 
                        {
                            {
                                arr_63 [i_15] [(unsigned short)0] = ((/* implicit */unsigned short) 134217728U);
                                var_40 = ((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_15] [i_16] [i_17] [i_19]))) : (var_14)))) ? (var_12) : (arr_22 [i_19]))))));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_16] [i_15])) ? (((/* implicit */int) arr_12 [i_15] [i_17])) : (((/* implicit */int) arr_10 [i_15] [i_15] [i_15] [(signed char)6]))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 1; i_21 < 13; i_21 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_20] [i_20] [i_15]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) - (5095800881177750201ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_40 [i_21] [i_17] [i_16] [i_15])) & (((/* implicit */int) var_9)))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_15]))) != (arr_39 [i_15] [i_15] [i_20]))))))))));
                                arr_70 [i_21] [i_21] [i_15] [i_17] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_10);
                                arr_71 [i_15] [i_16] [i_17] [(unsigned char)8] [i_21] = max((4294967267U), (((/* implicit */unsigned int) (unsigned short)48270)));
                                arr_72 [i_15] [i_16] [i_15] [5U] [13U] = ((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((828895191153980754ULL) >= (((/* implicit */unsigned long long int) arr_22 [i_21])))))) > (((((/* implicit */long long int) ((/* implicit */int) var_13))) + (var_14)))))))));
                                arr_73 [12] [i_20 - 1] [i_17] [i_20] [i_20] [i_16] |= ((/* implicit */long long int) ((int) ((int) max((((/* implicit */long long int) var_7)), (6947761750997560521LL)))));
                            }
                        } 
                    } 
                    var_43 &= ((/* implicit */unsigned long long int) (-(max((((unsigned int) arr_13 [i_15] [i_16])), (((/* implicit */unsigned int) arr_55 [12LL]))))));
                }
            } 
        } 
        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) arr_22 [i_15]))));
        var_45 -= ((/* implicit */unsigned int) var_6);
    }
}
