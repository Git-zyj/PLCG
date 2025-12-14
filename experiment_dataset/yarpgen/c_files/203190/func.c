/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203190
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
    var_17 = ((/* implicit */_Bool) (-(7637791026349688605ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
        var_20 &= (!(((/* implicit */_Bool) var_16)));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_18 [i_2] [i_2] = ((/* implicit */short) arr_11 [(signed char)7]);
                        arr_19 [i_1] = ((/* implicit */short) arr_14 [i_1] [i_1] [i_1] [i_4] [i_4]);
                        var_21 = ((/* implicit */unsigned long long int) (+(((long long int) ((((/* implicit */int) (unsigned short)37751)) < (((/* implicit */int) (short)-25818)))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_16 [i_1] [i_1] [i_1] [(short)9] [(short)9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) arr_11 [(short)17])) : (0LL)))) : (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [(short)11]))))))) ? (var_10) : (((/* implicit */int) max((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5 + 2])) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 - 1])))));
                var_24 |= ((/* implicit */int) ((arr_7 [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) && (((/* implicit */_Bool) arr_8 [i_5]))))))));
            }
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_8 = 1; i_8 < 16; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_9 = 3; i_9 < 14; i_9 += 4) 
                    {
                        arr_30 [i_1] [i_9] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_16 [i_8] [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 + 2]) : ((~(586736835U)))));
                        arr_31 [i_9 + 1] [i_9] [i_7] [i_1] [i_9] [i_1] = ((unsigned long long int) arr_12 [i_9 - 3] [i_8 - 1] [i_8 - 1]);
                        var_25 = (~(arr_13 [i_8 + 2] [i_8] [i_8 - 1]));
                    }
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        arr_34 [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [(short)15] [i_5] = ((/* implicit */long long int) ((short) var_6));
                        var_26 |= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) -4910666149992223520LL)) || (((/* implicit */_Bool) arr_6 [i_1] [i_1])))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_7))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned char)3]))) : (var_5))) : (((/* implicit */unsigned long long int) arr_13 [i_5] [i_7] [i_5]))));
                        arr_35 [i_1] [i_1] [i_1] [i_1] [2ULL] [16U] [i_1] = ((/* implicit */_Bool) (+(6685838001099776087LL)));
                    }
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        arr_38 [i_1] [17LL] [i_1] [i_1] [17LL] [i_1] [i_1] = arr_10 [i_8] [i_5] [3];
                        arr_39 [i_5] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_11] [5LL] [7ULL] [7ULL] [i_5 - 2] [7ULL])) ? (arr_33 [i_5] [i_5 - 3] [i_5] [1U] [i_5 - 3] [1U]) : (arr_33 [i_5 + 1] [0] [(_Bool)1] [i_5] [i_5 + 2] [0])));
                    }
                    var_28 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)27784))));
                }
                for (int i_12 = 1; i_12 < 16; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        arr_45 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_13);
                        arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] = ((arr_15 [i_1] [i_12 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_5 - 4])));
                        arr_47 [i_1] [3] [(short)11] = ((/* implicit */signed char) arr_29 [i_13] [i_13] [8U] [i_12 + 1] [i_7] [i_13] [i_5 - 3]);
                        var_29 = ((/* implicit */unsigned short) (+(arr_36 [i_13] [i_12 + 1] [2ULL] [i_5 - 1] [i_5 - 1] [(unsigned short)9])));
                    }
                    for (int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_28 [i_5 - 4] [i_5 - 2] [5U] [i_5] [i_12 - 1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                        arr_51 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((arr_12 [i_1] [i_5] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_31 &= ((/* implicit */short) 6685838001099776102LL);
                        var_32 = ((/* implicit */long long int) (_Bool)1);
                        var_33 *= (-(arr_48 [i_5 - 3] [i_5] [i_15] [i_15] [i_15] [i_5 - 3]));
                        var_34 *= 0;
                    }
                    for (unsigned long long int i_16 = 2; i_16 < 15; i_16 += 4) 
                    {
                        arr_58 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_24 [(unsigned short)0] [(unsigned short)0]) / (((/* implicit */unsigned int) arr_22 [10ULL] [i_5 - 4] [10ULL] [i_5 - 4]))))) ? (((((/* implicit */_Bool) arr_25 [i_1])) ? (arr_12 [i_1] [i_5] [(short)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_1] [(signed char)10] [i_1] [i_1] [7ULL] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))))));
                        arr_59 [i_1] [i_1] [i_5] [i_7] [(short)4] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_5 + 1] [i_12 + 1] [i_16 + 3] [i_16] [i_16])) ? (((/* implicit */int) arr_53 [i_5 + 1] [i_12 + 1] [i_16 + 2] [i_16 + 2] [16U])) : (((/* implicit */int) arr_52 [i_5 - 4] [i_12 + 1] [i_16 + 1] [i_16] [i_16]))));
                        arr_60 [i_16] = var_6;
                        var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_1] [(unsigned short)2] [5LL] [i_16 + 1])) ? (arr_24 [i_1] [(short)12]) : (((/* implicit */unsigned int) arr_11 [i_5])))) : (arr_33 [i_12 + 2] [i_1] [i_16 + 1] [i_12 + 2] [i_5] [i_1])));
                    }
                    for (short i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((long long int) arr_5 [i_5 - 1]));
                        arr_63 [i_17] = ((/* implicit */_Bool) ((signed char) var_4));
                        arr_64 [i_1] [i_1] [i_1] [i_1] = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6))) / (var_6))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) 9223372036854775807LL))));
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((arr_23 [(short)2] [4LL] [i_7] [i_7]) == (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                    var_39 = (-(arr_48 [i_5 + 1] [i_5] [i_5 + 2] [i_5 + 1] [i_5 - 3] [i_5]));
                }
                arr_68 [i_1] [i_5] [5U] [i_7] = ((/* implicit */int) ((signed char) arr_54 [i_5 - 1] [i_5 - 3] [i_5] [i_5] [i_5 - 1] [i_5]));
                var_40 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_55 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_5] [i_7] [i_7]))));
            }
            for (unsigned short i_19 = 0; i_19 < 18; i_19 += 4) /* same iter space */
            {
                arr_72 [i_1] &= (-(((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (((/* implicit */int) arr_26 [0] [i_5] [i_5] [0] [i_5])) : (((/* implicit */int) var_13)))));
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [6U])) ? (((/* implicit */int) arr_40 [i_1] [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_40 [i_1] [i_1] [i_5] [i_1]))));
                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (+(((/* implicit */int) arr_8 [i_19])))))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_20 = 0; i_20 < 18; i_20 += 4) /* same iter space */
            {
                arr_75 [i_5] [i_20] &= ((/* implicit */long long int) ((arr_16 [i_5 - 2] [6] [i_5 + 2] [i_5] [i_20]) <= (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                var_43 ^= ((/* implicit */long long int) (+((+(((/* implicit */int) arr_69 [i_20]))))));
                var_44 = (!((_Bool)1));
                arr_76 [i_1] = ((/* implicit */long long int) ((short) -2084482091));
            }
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 4) /* same iter space */
            {
                var_45 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_52 [i_5 + 1] [i_5 + 2] [i_5] [i_5 - 4] [i_5 - 4]))));
                var_46 = (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -6685838001099776088LL)) : (var_5))));
            }
            var_47 = ((/* implicit */unsigned short) ((long long int) arr_61 [i_5 + 2] [i_5 - 3]));
        }
    }
    var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47557))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_15))) ? (var_3) : (((/* implicit */long long int) var_16))))) : ((~((~(var_9)))))));
}
