/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193190
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
    var_18 |= ((/* implicit */long long int) ((var_17) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    var_19 |= ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1] &= ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (arr_1 [i_2 + 1]) : (((/* implicit */unsigned long long int) arr_0 [i_2 - 2])))), (max((((/* implicit */unsigned long long int) var_10)), (var_15)))));
                    arr_7 [i_0] [13LL] [i_2 - 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((long long int) var_0))))) ? ((+(((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 2] [i_1 - 1] [i_1 + 2])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_0]))))));
                }
                var_20 += ((/* implicit */unsigned short) arr_3 [i_0]);
                arr_8 [(unsigned short)6] [(signed char)13] = arr_4 [i_0] [i_1] [i_1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                arr_26 [i_3] [i_4 - 1] [i_4] [i_5] [(_Bool)1] [i_4 - 1] |= ((/* implicit */long long int) arr_13 [i_3]);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_17 [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (arr_17 [i_4 - 1])))) ? (((((/* implicit */_Bool) 3349691854U)) ? (((/* implicit */int) arr_18 [i_3] [i_4 - 1] [i_5])) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_2 [i_3] [i_3] [i_6]))));
                                var_22 |= (~(max((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_13 [i_3])), ((unsigned char)63)))), (var_6))));
                            }
                        } 
                    } 
                    arr_27 [i_3] [(_Bool)1] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775779LL)) ? (-1LL) : (6813279763487937304LL)))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_19 [i_3] [i_3] [6ULL]))))) : (8589934591LL)));
                }
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                {
                    arr_30 [i_3] [(unsigned char)1] [i_8] = (+(arr_4 [(unsigned char)1] [(unsigned char)1] [i_8]));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 4; i_9 < 11; i_9 += 4) 
                    {
                        var_23 += max((min((((/* implicit */unsigned long long int) max((540090247215890029LL), (var_6)))), (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13866263737335170503ULL))))), (((/* implicit */unsigned long long int) (_Bool)1)));
                        arr_33 [i_9 - 2] [i_9 + 3] [i_9] [i_9 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_16 [i_3] [i_8] [4LL] [i_3]), (((/* implicit */unsigned long long int) arr_2 [18] [(signed char)3] [i_8])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) ((((/* implicit */_Bool) arr_4 [(signed char)19] [(signed char)19] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_0 [(short)4]))))));
                        arr_34 [(signed char)11] [i_9 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) -1714281054)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44796))) : (0U)));
                    }
                    for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            arr_41 [1LL] [i_11] [i_10] [i_8] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8200629603713777664LL)) ? (-1883446759682802500LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61765)))));
                            var_24 &= ((long long int) -8200629603713777657LL);
                            arr_42 [i_3] [5ULL] [5ULL] [5ULL] [5ULL] [i_10] [7ULL] = arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1];
                            arr_43 [i_3] [i_8] [i_10] [i_11] = ((/* implicit */unsigned short) var_17);
                        }
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                        {
                            var_25 += ((/* implicit */signed char) arr_25 [i_3] [6ULL] [i_3] [i_3] [i_3]);
                            arr_46 [i_12] [i_10] [i_8] [(unsigned short)10] [i_4 + 1] [4LL] = ((/* implicit */signed char) min((arr_4 [i_8] [i_4 - 1] [i_3]), (arr_0 [i_3])));
                        }
                        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
                        {
                            var_26 += ((/* implicit */unsigned long long int) var_14);
                            arr_51 [i_3] [i_13] = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) arr_35 [1LL] [i_4] [4] [i_4 - 1]))), (((((/* implicit */_Bool) arr_35 [(unsigned short)6] [i_3] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */int) arr_35 [i_3] [i_4 - 1] [i_4] [i_4 + 1])) : (((/* implicit */int) arr_35 [i_3] [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_36 [i_4 - 1] [i_8] [i_10] [13ULL]))));
                        }
                        for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_16 [i_4 + 1] [i_4] [i_4 + 1] [(_Bool)1]))))))));
                            var_29 = ((/* implicit */long long int) ((signed char) ((signed char) arr_16 [i_4 - 1] [i_3] [(unsigned short)9] [i_3])));
                            arr_55 [i_3] [8ULL] [i_4] [12U] [(_Bool)1] [i_8] |= ((/* implicit */_Bool) arr_40 [6LL] [6LL] [i_4 + 1] [13ULL] [4LL] [i_14] [12U]);
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_37 [i_4] [i_10]))));
                        }
                        var_31 = ((/* implicit */unsigned short) arr_25 [i_3] [i_3] [i_3] [i_10] [i_10]);
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1583998854)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))) : (((unsigned int) ((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */unsigned long long int) 0)) : (var_17))))));
                        arr_56 [i_10] [i_4] [i_4] [i_4] [i_4 + 1] [i_3] &= ((/* implicit */long long int) arr_2 [i_3] [i_4 + 1] [i_8]);
                    }
                    for (short i_15 = 2; i_15 < 13; i_15 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (arr_57 [i_15] [i_8] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3])))))))))));
                        var_34 *= ((/* implicit */unsigned int) arr_32 [i_15]);
                        var_35 = var_1;
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 14; i_16 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned int) var_0);
                            arr_62 [i_3] = ((arr_48 [(unsigned char)4] [i_4 - 1] [i_8] [4]) ? (arr_11 [i_15 - 2]) : (((/* implicit */long long int) ((int) arr_20 [i_16] [i_16] [i_15 - 2] [(unsigned short)4] [i_3]))));
                        }
                    }
                    var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_8] [(signed char)6] [i_8] [(unsigned short)2] [i_3])))))));
                }
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) var_0))));
                var_39 = ((((/* implicit */_Bool) ((signed char) ((unsigned short) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_3] [i_3] [(unsigned short)10] [i_4 - 1] [(unsigned short)10] [i_4] [i_4]))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)32652)), (9223372036854775807LL)))) ? (arr_0 [i_3]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_4] [i_3] [i_3]))) : (arr_29 [(unsigned char)4] [i_4] [i_4 + 1] [i_3]))))));
            }
        } 
    } 
    var_40 &= ((/* implicit */unsigned long long int) ((long long int) var_9));
}
