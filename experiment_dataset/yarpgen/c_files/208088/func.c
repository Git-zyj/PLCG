/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208088
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
    var_13 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 0ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((5081384681894754735ULL) >= (((/* implicit */unsigned long long int) 2823241601U)))))))), (var_10)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (signed char)63)) ? (9007199254740991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3])))))))));
        /* LoopSeq 4 */
        for (int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            arr_5 [(short)12] |= ((/* implicit */unsigned int) min((((/* implicit */int) ((short) arr_4 [i_1 - 3] [10U]))), (((arr_4 [i_1 - 3] [2ULL]) ? (-457195635) : (((/* implicit */int) arr_4 [i_1 + 1] [(unsigned short)6]))))));
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(17915059326351829976ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))) ? ((~(min((((/* implicit */unsigned long long int) arr_10 [(short)5] [i_1] [i_1] [(short)8] [i_1 - 3] [i_1 - 2])), (10857515920997145618ULL))))) : (((((/* implicit */_Bool) (short)-27099)) ? (17915059326351829976ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) (short)14922))))))))))));
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) 4294967295U)))));
                            var_17 |= ((/* implicit */unsigned short) ((arr_4 [i_0 - 1] [i_4]) ? (((4294967295U) >> (((((/* implicit */int) (signed char)123)) - (113))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((1U), (0U))))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (0U)));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned short)31))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_6] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((((/* implicit */int) (signed char)-63)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1] [i_5] [i_1])) + (11653)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (unsigned char)0)) >> (4ULL)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-63))))) ? (((/* implicit */unsigned long long int) max((3840456020U), (1698595011U)))) : (max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_5] [i_6])), (1ULL)))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)243)) ^ (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) != (((/* implicit */int) (unsigned char)13)))))) : (min((arr_14 [i_1]), (((/* implicit */long long int) 1117953866U))))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_25 [i_0] [i_7] [i_0] = ((unsigned int) arr_14 [i_0]);
            var_21 ^= ((/* implicit */unsigned short) ((((_Bool) (unsigned char)243)) ? (((((/* implicit */_Bool) arr_12 [i_0 - 3] [i_7] [i_0 - 3] [i_0] [0U])) ? (-3254210174800037431LL) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-37)) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0] [i_7])) - (24540)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -1893511444)) && (((/* implicit */_Bool) (unsigned char)13)))))))));
        }
        /* vectorizable */
        for (short i_8 = 3; i_8 < 22; i_8 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((3840456020U) - (arr_23 [i_0 - 1])))));
            var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2908116157568478631ULL)) ? (((/* implicit */int) arr_24 [i_0 - 3] [i_8 - 1])) : (((/* implicit */int) (signed char)67))));
        }
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            arr_30 [i_0] [14ULL] = ((/* implicit */unsigned char) (unsigned short)29714);
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((min((11218328855673933669ULL), (((/* implicit */unsigned long long int) (unsigned short)59641)))), (11218328855673933647ULL))))));
            /* LoopSeq 2 */
            for (long long int i_10 = 2; i_10 < 20; i_10 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */int) ((11327112439939163054ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_33 [12ULL] [i_9] [12ULL]), (((/* implicit */unsigned short) (signed char)-45))))) | (((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0])))))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19989))) != (11218328855673933669ULL))) ? (2039244341U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31)) >= (((/* implicit */int) arr_3 [i_0] [i_0 - 3]))))))))) || (((/* implicit */_Bool) max((2564310516U), (((/* implicit */unsigned int) arr_0 [i_9] [i_0])))))));
                var_27 = ((/* implicit */int) max((var_27), ((-(((/* implicit */int) ((1U) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1730656780U)) ? (((/* implicit */int) arr_16 [i_10] [i_10 - 1] [i_10] [(signed char)21])) : (((/* implicit */int) (short)-19303))))))))))));
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((int) max(((-(6338288759827625959LL))), (((/* implicit */long long int) (short)19303))))))));
            }
            for (long long int i_11 = 2; i_11 < 20; i_11 += 3) /* same iter space */
            {
                arr_36 [i_0] [i_9] [i_9] = ((((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_11] [i_11 + 1] [10LL] [i_11])) ? (1352082872101237988ULL) : (1352082872101237988ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4095))) - (max((((/* implicit */long long int) arr_9 [i_0] [i_0])), (6890658370906238302LL)))))));
                var_29 = ((/* implicit */_Bool) 2486958545U);
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_14 = 4; i_14 < 22; i_14 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (short)19303)) && (((/* implicit */_Bool) 2097151LL)))) && (((/* implicit */_Bool) (+(2039244341U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_0 - 2] [i_14 - 2]), (((/* implicit */unsigned short) arr_37 [i_14 - 3] [i_0 - 4])))))) : ((+(((((/* implicit */_Bool) (unsigned short)35821)) ? (7119631633770388561ULL) : (((/* implicit */unsigned long long int) 8715883762803485917LL)))))))))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((unsigned char) (signed char)-100)))));
                        arr_43 [i_0] [i_12] [i_14] [(unsigned short)14] |= ((/* implicit */short) arr_27 [i_0] [i_0] [i_0 - 2]);
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 22; i_15 += 1) 
                    {
                        var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_15 - 1] [i_15 + 1] [(unsigned char)3])) ? (((/* implicit */int) arr_46 [i_15] [i_15 - 1] [i_15])) : (((/* implicit */int) (short)19303))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_12] [(short)14])) ? (((/* implicit */int) (short)-19303)) : (((/* implicit */int) (unsigned short)35821))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 17094661201608313628ULL)) ? (((/* implicit */int) (short)-19304)) : (834776226)))))))));
                    }
                    var_34 = 17187820701116901701ULL;
                    var_35 = ((/* implicit */signed char) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (17187820701116901701ULL))), (((/* implicit */unsigned long long int) ((short) 1352082872101237988ULL))))), (((/* implicit */unsigned long long int) max((((1803511345U) / (4294967295U))), (((/* implicit */unsigned int) arr_40 [i_0] [i_0 - 4] [i_13] [i_0])))))));
                    var_36 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))) : (arr_10 [i_0] [i_0] [i_12] [10LL] [i_13] [i_12]))), (((unsigned int) arr_22 [22ULL] [i_13] [22ULL]))))));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (short)21069)) | (((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 834776226)), (17187820701116901701ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((749485646257404255ULL) != (((/* implicit */unsigned long long int) arr_39 [i_12] [i_12] [i_13] [(unsigned short)22])))))) : (max((1352082872101237997ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) : (((((unsigned long long int) 1352082872101237997ULL)) << (((((/* implicit */int) (short)5037)) - (5026))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (short i_18 = 0; i_18 < 23; i_18 += 2) 
                {
                    for (unsigned short i_19 = 0; i_19 < 23; i_19 += 4) 
                    {
                        {
                            arr_58 [i_17] [i_16] [4U] [i_16] [i_0] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_23 [i_0 - 4])), (17187820701116901701ULL))));
                            arr_59 [12ULL] [i_0] [i_17] [i_17] [i_17] = ((unsigned int) ((_Bool) ((unsigned short) 3784428771U)));
                            var_38 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_0 - 2] [i_17] [i_16])) ? (arr_39 [i_0] [i_0 - 2] [i_0 - 2] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161)))))) ? (((/* implicit */int) ((unsigned char) arr_39 [i_0] [i_0 - 2] [i_0] [i_19]))) : (((/* implicit */int) ((signed char) 749485646257404255ULL)))));
                        }
                    } 
                } 
            } 
            arr_60 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) 1352082872101237988ULL)));
        }
        /* vectorizable */
        for (unsigned short i_20 = 2; i_20 < 21; i_20 += 4) 
        {
            var_39 = ((/* implicit */unsigned long long int) ((signed char) (short)19303));
            var_40 = (~(((((/* implicit */int) (short)-19303)) ^ (1633409873))));
        }
    }
    var_41 = ((/* implicit */unsigned short) var_5);
}
