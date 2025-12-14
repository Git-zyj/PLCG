/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23309
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((var_13) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) (-(((((/* implicit */int) max(((short)12113), (((/* implicit */short) (unsigned char)90))))) + (((/* implicit */int) min((((/* implicit */short) (unsigned char)194)), ((short)8184))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) arr_2 [i_0]);
            var_21 = ((/* implicit */short) ((max((((/* implicit */int) var_10)), (((((/* implicit */int) var_6)) / (((/* implicit */int) var_17)))))) * (((/* implicit */int) var_16))));
        }
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 7; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4136379266U), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_3]))))) : (((unsigned int) (short)11))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11))) : (var_13))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)68))))))))));
                            var_23 -= arr_7 [(short)3];
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) 1U);
            }
            for (short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
            {
                arr_18 [i_0] [(unsigned char)4] |= ((/* implicit */short) (((!(((/* implicit */_Bool) (-(var_14)))))) ? (min(((-(((/* implicit */int) arr_7 [i_0])))), (((/* implicit */int) min((arr_4 [i_0]), (arr_16 [i_0] [i_2 + 1] [(unsigned char)10] [i_6])))))) : (((/* implicit */int) (unsigned char)218))));
                arr_19 [i_6] [(unsigned char)8] [(unsigned char)8] [i_0] &= ((/* implicit */unsigned int) ((1U) < (min((1277337463U), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)4)))))))));
                arr_20 [i_2] [i_2 + 1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [i_2] [i_2] [i_6] [i_2] [i_2 + 1])) - (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_6] [(short)3])))) >= (((/* implicit */int) min((arr_13 [i_0] [i_2 + 1] [i_6] [i_0] [i_2 + 1]), ((short)-29109))))));
                var_25 = ((/* implicit */unsigned int) max((var_25), ((-(min((((/* implicit */unsigned int) (short)-29109)), (arr_0 [6U])))))));
            }
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((arr_8 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))))));
            arr_21 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 1]))));
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (short)38)))) << (((/* implicit */int) ((short) arr_22 [0U] [i_7] [0U]))))), (((/* implicit */int) var_9)))))));
            arr_25 [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) max((((/* implicit */short) var_3)), ((short)5704)))) >> (((((/* implicit */int) arr_7 [i_0])) + (9994))))) / (((/* implicit */int) min((arr_13 [i_0] [8U] [i_0] [i_7] [i_0]), (arr_16 [i_0] [i_7] [i_0] [i_7]))))));
            var_28 &= ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_10 [i_7] [i_7] [i_0]), (var_1))))));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
            {
                var_29 = arr_4 [i_0];
                var_30 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_26 [i_0] [i_7] [i_8] [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_7] [i_8]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 8; i_9 += 4) 
                {
                    var_31 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)26))));
                    arr_32 [i_9] [i_0] [i_8] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_27 [i_7] [i_0] [i_9])) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) arr_9 [i_0] [i_7] [i_8] [i_9]))))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)124))))));
                    var_32 *= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) 3017629834U)))));
                    var_33 &= arr_9 [i_9 + 3] [i_9 - 1] [i_9 + 3] [i_9 - 2];
                }
                for (short i_10 = 1; i_10 < 10; i_10 += 4) 
                {
                    arr_36 [i_0] [i_8] [i_7] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_26 [i_0] [i_10 - 1] [i_8] [i_10 - 1])))) ? ((+(((/* implicit */int) arr_26 [i_0] [i_10 + 1] [i_0] [(unsigned char)8])))) : (((/* implicit */int) max((var_5), (var_7))))));
                    arr_37 [i_0] [i_0] = ((/* implicit */short) var_16);
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    arr_40 [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_0)))) - (((/* implicit */int) arr_39 [i_0] [i_8] [8U] [i_0]))));
                    var_34 = ((short) (unsigned char)38);
                }
            }
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (212448822U))), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (short)-27145)) : (((/* implicit */int) (unsigned char)37)))) : (((/* implicit */int) ((short) (unsigned char)37)))));
                arr_44 [i_0] [i_7] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_42 [i_7] [i_0])), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_15)) % (((/* implicit */int) var_6)))) : (((/* implicit */int) max(((short)15756), (var_4))))))));
                var_36 += ((/* implicit */short) 2858596839U);
            }
            var_37 = ((/* implicit */unsigned int) (unsigned char)100);
        }
        arr_45 [i_0] [i_0] = min((var_13), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (unsigned char)10))))))));
        var_38 -= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((324117750U), (((/* implicit */unsigned int) (short)27928))))))))));
        var_39 *= ((/* implicit */short) ((min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0]))) | (4294967281U)));
    }
    /* LoopSeq 2 */
    for (short i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
    {
        arr_48 [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_46 [i_13])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)38))))) : (((((/* implicit */_Bool) (short)-32764)) ? (2875006400U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))) - (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-21975)))))))));
        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_46 [i_13])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [(short)16]))))))))));
        var_41 += ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_13])) ? ((-(((((/* implicit */int) var_0)) / (((/* implicit */int) arr_46 [i_13])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [(short)10])))))));
    }
    for (short i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */short) min(((-(((((/* implicit */int) (short)26388)) & (((/* implicit */int) arr_50 [i_14])))))), (((/* implicit */int) arr_47 [i_14]))));
        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) min((min((((/* implicit */int) min((arr_50 [i_14]), (((/* implicit */short) arr_49 [i_14]))))), ((-(((/* implicit */int) var_11)))))), (((/* implicit */int) min(((short)-29407), (min((var_10), (((/* implicit */short) (unsigned char)95))))))))))));
    }
    var_44 = ((/* implicit */short) ((min((((/* implicit */int) min(((short)31940), (var_10)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))) / (((/* implicit */int) var_8))));
    var_45 *= ((/* implicit */short) ((((((/* implicit */int) min((var_5), ((unsigned char)255)))) / (((/* implicit */int) var_12)))) - (((/* implicit */int) var_8))));
}
