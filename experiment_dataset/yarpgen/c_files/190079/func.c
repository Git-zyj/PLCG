/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190079
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) var_2)), (var_1)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((signed char) max((var_10), (((/* implicit */int) var_3)))))), (((unsigned char) 3936068191U))));
        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)50575))))))) ? (((long long int) arr_2 [i_0 - 1])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)10]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) min(((signed char)-100), (arr_0 [i_1])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) /* same iter space */
        {
            arr_10 [i_2] = ((/* implicit */signed char) 358899104U);
            var_24 = ((/* implicit */unsigned int) arr_6 [(signed char)2]);
            arr_11 [i_2] [i_2] = ((/* implicit */int) var_7);
        }
        for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) (-(14637621253197398530ULL)));
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) var_5);
                    arr_18 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                    arr_19 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_3] = ((/* implicit */_Bool) (signed char)93);
                }
                arr_20 [i_4] [i_3] [i_4] [(unsigned short)7] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_14)), (arr_17 [i_3 + 1] [i_3]))))) + (var_7)));
                arr_21 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_3 - 1])), (var_3))))));
                /* LoopSeq 1 */
                for (short i_6 = 2; i_6 < 11; i_6 += 2) 
                {
                    var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)26924))));
                    var_28 = ((/* implicit */int) (unsigned short)35044);
                    var_29 *= ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) var_5)), (arr_15 [i_3 - 1] [i_3 - 1] [i_4 - 1])))));
                }
                var_30 = ((/* implicit */unsigned short) ((short) ((short) max((((/* implicit */long long int) var_4)), (arr_9 [i_1] [i_4])))));
            }
            var_31 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)223)), (18446744073709551607ULL)));
        }
        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_32 = ((/* implicit */unsigned long long int) var_5);
            arr_27 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)87)), ((+(18446744073709551615ULL)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)87))))) >> (((arr_4 [i_1] [i_7]) - (12268293289254283265ULL))))) : ((+(((/* implicit */int) (unsigned char)106))))));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                var_33 = ((/* implicit */unsigned short) (~(arr_9 [i_7] [i_7])));
                arr_30 [i_7] [i_7] |= ((/* implicit */long long int) var_17);
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    arr_33 [i_1] [i_7] [(_Bool)1] [(signed char)8] [(_Bool)1] = ((/* implicit */unsigned short) arr_23 [i_1] [i_7] [i_8] [i_8] [4U]);
                    var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))))), (max((((/* implicit */unsigned long long int) min(((unsigned char)87), (((/* implicit */unsigned char) (signed char)-112))))), (arr_29 [i_7] [i_8] [i_9])))));
                    var_35 = ((/* implicit */long long int) var_11);
                }
            }
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            arr_41 [i_12] [i_7] [i_12] [i_11] = var_19;
                            arr_42 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 4294967295U))) ? (((/* implicit */int) max(((signed char)121), (arr_13 [i_11 - 1])))) : (((((/* implicit */_Bool) arr_13 [i_11 + 1])) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) arr_13 [i_11 + 4]))))));
                            arr_43 [i_1] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) (short)205))));
                        }
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            arr_46 [i_13] [i_13] [i_13] [i_13] [(unsigned char)2] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_10] [i_13])) : (((/* implicit */int) var_19)))), (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) arr_34 [i_13] [i_13] [11])) : (((/* implicit */int) (unsigned short)9))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [(unsigned short)6] [i_11] [i_11] [i_11 - 1])))))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_23 [i_11 - 2] [i_11] [i_10] [i_11 + 4] [i_11 + 3]), (arr_23 [i_11 + 3] [i_11] [i_13] [i_11] [i_11 + 4])))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_19)))) : (((((/* implicit */_Bool) arr_23 [i_11 - 2] [i_11 - 2] [i_13] [i_11] [i_11 + 1])) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) arr_23 [i_11 + 4] [i_11] [i_10] [i_11] [i_11 + 1]))))));
                            var_37 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_24 [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11])) ? (var_12) : (((/* implicit */int) arr_24 [i_11 - 1] [i_11 - 1] [i_13] [i_13])))), (((/* implicit */int) max((arr_23 [i_11] [i_11] [i_7] [i_13] [i_13]), (arr_39 [i_7] [i_1] [(signed char)5]))))));
                            var_38 = ((/* implicit */long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_13))));
                            var_39 = ((/* implicit */signed char) (-(((/* implicit */int) (short)6140))));
                        }
                        for (signed char i_14 = 1; i_14 < 10; i_14 += 2) 
                        {
                            arr_49 [i_14 - 1] [(_Bool)1] [i_14 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_14 + 2] [i_14] [i_14] [(unsigned char)0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) : ((-(((unsigned int) (signed char)93))))));
                            arr_50 [i_11] [i_11] [i_10] [i_1] [i_14 + 2] = ((/* implicit */signed char) ((arr_2 [i_1]) ? (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) arr_39 [4LL] [(_Bool)1] [i_14]))))) : ((-(((/* implicit */int) var_5))))));
                            var_40 = ((/* implicit */signed char) arr_31 [i_14 + 1] [i_11 + 4] [i_7] [i_14]);
                        }
                        var_41 |= ((/* implicit */_Bool) (unsigned char)255);
                    }
                } 
            } 
            arr_51 [i_1] &= ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)87))))) != (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31216))) : (max((var_0), (((/* implicit */long long int) (signed char)112)))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            var_42 = ((/* implicit */long long int) (-(var_17)));
            arr_55 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_15] [i_15])))))) : (var_7)));
        }
        arr_56 [i_1] [i_1] = ((/* implicit */unsigned short) 866968662U);
    }
    /* LoopSeq 1 */
    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
    {
        arr_61 [i_16] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)220), (var_4))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (signed char)92))));
        var_43 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)58003)) << (((((((/* implicit */_Bool) (short)-6146)) ? (((/* implicit */int) (unsigned short)62133)) : (((/* implicit */int) (signed char)-87)))) - (62132)))))));
        var_44 = ((/* implicit */unsigned long long int) 1709830329U);
    }
}
