/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220150
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
    var_19 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)47708))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) arr_2 [i_0 - 2])))) + (((((/* implicit */int) arr_2 [i_0 - 2])) * (((/* implicit */int) arr_2 [i_0 + 1]))))));
                                arr_12 [i_1] [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) var_13);
                                arr_13 [i_0] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_10)))) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)42072)) : (((/* implicit */int) arr_7 [i_0] [i_3] [i_3] [i_1])))))) + (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_8 [i_0 - 2] [i_4] [i_2] [i_1] [i_4]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_2] [i_1] [i_0 + 1])) | (((/* implicit */int) arr_6 [i_1])))) | (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1] [i_5])) ^ (((/* implicit */int) arr_8 [i_0 - 2] [i_1] [i_2] [i_1] [i_5]))))));
                        arr_16 [i_5] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1])))) ^ ((-(((/* implicit */int) arr_0 [i_2] [i_5]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6506)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_2] [i_1])))))))) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_0] [i_2] [i_0]))));
                        var_21 |= ((/* implicit */short) arr_3 [i_0] [i_1]);
                    }
                    var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */short) arr_0 [i_0] [i_2]))))) ? (((/* implicit */int) arr_9 [i_1] [i_2])) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) var_16))));
                    arr_17 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)17838)) + (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_17)), ((unsigned short)17821)))))))));
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0 - 3] [i_1] [i_1] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28526)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_6])) : (((/* implicit */int) arr_1 [i_0 - 2])))))));
                        var_24 = ((/* implicit */signed char) var_12);
                        var_25 |= (short)-3325;
                    }
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-28526))));
                        arr_22 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) (unsigned short)47699)))), ((!(((/* implicit */_Bool) max(((short)-25034), (arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_7]))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_27 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_6)))) ? ((~(2116873928U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_15) >> (((/* implicit */int) (short)30)))) < (max((((/* implicit */unsigned int) arr_5 [i_8] [i_1] [i_8] [i_8])), (var_11)))))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50916)) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (short)-28549))))) ? (((((/* implicit */int) min(((unsigned short)32704), ((unsigned short)65535)))) ^ (((/* implicit */int) (short)10136)))) : (((/* implicit */int) (short)4958))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) / (min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_12))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (arr_26 [i_0] [i_1] [i_1] [i_7] [i_1])))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_7))));
                            arr_30 [i_1] [i_1] [i_2] [i_7] [i_9] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2] [i_9]);
                            arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_19 [i_0] [i_2] [i_7] [i_9]);
                            arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0 - 3] = ((/* implicit */short) (!(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_18 [i_0] [i_1] [i_2] [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                        }
                    }
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_30 = arr_23 [i_1] [i_1] [i_2] [i_10] [i_1] [i_1];
                        arr_35 [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))) - (((/* implicit */int) (short)-26632))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-4600))))) ? (((((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) + (2147483647))) >> ((((-(((/* implicit */int) (short)850)))) + (854))))) : (((/* implicit */int) max(((short)26664), (((short) var_3)))))));
                    }
                }
                for (short i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    var_32 *= ((/* implicit */short) arr_23 [(unsigned short)16] [i_1] [i_1] [i_1] [i_1] [i_11]);
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            arr_43 [i_12] [i_1] [i_11] [i_1] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) var_3)), (max((var_6), (((/* implicit */unsigned int) (short)-1))))));
                            arr_44 [i_1] [i_1] [i_11] [i_12] [i_12] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) - ((~(((/* implicit */int) (short)3324))))));
                            arr_45 [i_0 - 2] [i_1] [i_13] = var_0;
                        }
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            var_33 = var_0;
                            var_34 = ((/* implicit */short) ((var_8) - (((min((((/* implicit */unsigned int) (short)-12312)), (arr_23 [i_1] [i_1] [i_1] [i_11] [i_11] [i_14]))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46402)))))));
                            arr_48 [i_1] [i_14] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0 - 3]))) : (arr_40 [i_0 - 1] [i_1] [i_0 - 1] [i_0 + 1]))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (unsigned short)59046)) : (((/* implicit */int) arr_8 [i_14] [i_1] [i_1] [i_1] [i_0])))))))));
                            arr_49 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (short)-9940)) < (((/* implicit */int) (short)-24195))));
                            var_35 |= ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_14] [i_0]))))) ^ (((arr_26 [i_0 + 1] [i_1] [i_14] [i_12] [i_14]) - (max((var_18), (((/* implicit */unsigned int) var_5))))))));
                        }
                        arr_50 [i_0] [i_1] [i_1] [i_1] [i_11] [i_12] = min((((/* implicit */unsigned int) (short)3340)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (1942192120U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0] [i_0] [i_11] [i_1] [i_11])))))) ? (max((9U), (((/* implicit */unsigned int) (short)-32759)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                        var_36 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_4)))))) : (((arr_25 [(short)8]) << (((((/* implicit */int) arr_29 [i_0 - 3] [i_1] [i_1] [0U] [i_12])) - (41402)))))))));
                        arr_51 [i_0] [i_1] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_12] [i_1] [i_1] [i_0])) != (((/* implicit */int) arr_8 [i_12] [i_12] [i_12] [i_1] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_15] [i_0] [i_15])) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (short)2044))))) ? (((253952U) ^ (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5473)))));
                        arr_55 [i_1] [i_11] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_19 [i_0 + 1] [i_0] [i_0] [i_0]);
                    }
                    var_38 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_14)))), ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)48457)) : (((/* implicit */int) var_10))))))));
                    arr_56 [i_0] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_8)) ? (min((arr_18 [i_11] [i_1] [i_0] [i_1]), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)508)) & (((/* implicit */int) (unsigned short)16354)))))))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 1; i_16 < 21; i_16 += 2) 
                {
                    arr_59 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        for (signed char i_18 = 1; i_18 < 21; i_18 += 3) 
                        {
                            {
                                arr_64 [i_1] [i_1] [i_17] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)534)) >= (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (unsigned short)55315))))));
                                var_39 = ((/* implicit */unsigned short) var_6);
                                var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (signed char)12))) | (((/* implicit */int) ((arr_41 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9110))))))));
                                arr_65 [i_1] [i_18] [i_17] [i_16] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_38 [i_0 - 1] [i_16 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        var_41 = ((/* implicit */short) var_2);
                        arr_68 [i_0] [i_1] [i_1] [i_19] = ((/* implicit */short) arr_18 [i_1] [i_1] [i_1] [i_0]);
                        arr_69 [i_1] = ((/* implicit */unsigned short) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0] [i_0] [i_16 - 1] [i_16 - 1])))));
                    }
                    for (signed char i_20 = 3; i_20 < 19; i_20 += 3) 
                    {
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)116)) & (((/* implicit */int) (signed char)-58))))))))));
                        arr_73 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) (signed char)-47));
                    }
                    for (short i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        arr_78 [i_1] [i_1] [i_16 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) >= (arr_23 [i_1] [i_1] [i_1] [i_16] [i_1] [i_21])));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_16] [i_1])) * (((/* implicit */int) var_14))))) < (var_0)));
                        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) (~((-(((/* implicit */int) (short)512)))))))));
                    }
                }
                arr_79 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_0 - 2] [i_0] [i_0] [i_0]))) : (2243142945U))) < ((-(max((((/* implicit */unsigned int) (short)(-32767 - 1))), (1984U)))))));
                arr_80 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_60 [i_0 + 1] [i_0 + 1] [i_1] [i_0])) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_1] [i_0 + 1])))))));
                arr_81 [i_1] = var_8;
            }
        } 
    } 
    var_45 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((var_11) & (var_11)))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_16)), (var_13)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_3))));
}
