/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45650
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
    var_12 = ((/* implicit */unsigned long long int) ((int) 11605272838901938596ULL));
    var_13 |= ((/* implicit */_Bool) (((+(((/* implicit */int) ((_Bool) var_1))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)7694)) : (var_6)))));
    var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (max((((((/* implicit */int) var_5)) - (var_6))), (((/* implicit */int) (unsigned short)59132))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((short) ((_Bool) (unsigned short)51521)));
        var_15 *= ((/* implicit */short) (-(3716574084586376793ULL)));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = arr_4 [i_1];
        var_16 += ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)46357)), (542809827)));
        arr_8 [i_1] = ((/* implicit */short) (((~(var_6))) | (((/* implicit */int) ((unsigned short) (unsigned short)65516)))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_3 [i_1]))));
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2])))))));
        var_19 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)19179)), (((((/* implicit */_Bool) (short)16924)) ? (((/* implicit */int) arr_5 [i_2])) : (-2122260854)))));
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            var_20 = ((/* implicit */short) 3716574084586376793ULL);
            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))) * (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -542809856)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-6127))))), ((~(5833115615980111090ULL)))))));
            var_22 = ((/* implicit */short) max(((+(((/* implicit */int) (short)-3)))), (((/* implicit */int) max((max((var_2), (((/* implicit */unsigned short) arr_1 [i_2])))), (((/* implicit */unsigned short) var_0)))))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_23 += (~(((/* implicit */int) (_Bool)0)));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                var_24 = (~(((/* implicit */int) var_10)));
                arr_19 [i_2] [i_4] [i_5] [i_2] = ((/* implicit */_Bool) arr_18 [i_2] [i_4] [i_5]);
                arr_20 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (short)-21718))) ? (((/* implicit */int) ((((/* implicit */int) (short)-19008)) < (((/* implicit */int) var_10))))) : (((/* implicit */int) var_3))));
                /* LoopSeq 2 */
                for (short i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    var_25 |= 1810880059;
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_6))));
                    arr_25 [i_2] [i_6] [i_4] [i_4] [(unsigned short)4] [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)29161)) ? (((/* implicit */int) (unsigned short)60976)) : (((/* implicit */int) var_0))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_28 [i_2] [i_4] [i_2] [i_2] [i_7] = ((((/* implicit */_Bool) var_3)) ? ((+(var_6))) : (((/* implicit */int) ((var_6) == (((/* implicit */int) var_5))))));
                    var_27 = ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_7]));
                }
                arr_29 [i_5] [i_4] = arr_9 [i_2];
            }
            for (short i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 13; i_9 += 1) 
                {
                    for (short i_10 = 4; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (short)-5141))));
                            var_29 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_9 + 1] [i_9 - 1] [i_9 - 3] [i_9 + 1])));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-6820)) ? (arr_34 [i_10 + 1] [i_10] [i_10 - 3] [i_10 - 2] [i_10 + 1] [i_10 - 4] [i_10 - 2]) : (((/* implicit */int) (unsigned short)44860))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_2] [i_2] [i_4] [i_8] [11ULL] [i_2])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : ((-(((/* implicit */int) arr_31 [i_2] [6ULL] [i_2] [i_2]))))));
                        }
                    } 
                } 
                arr_36 [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)0));
                var_32 &= arr_33 [i_2] [i_2] [i_2] [i_4] [i_8] [i_8];
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) arr_35 [i_2])))) : (((/* implicit */int) var_2))));
                arr_37 [i_2] = ((/* implicit */short) (_Bool)1);
            }
        }
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_12 = 3; i_12 < 12; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_48 [i_2] [i_12 + 2] [i_14] [i_12 + 2] [i_14] = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13874))))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)21)) : (((/* implicit */int) (short)-1)))) : (min((((/* implicit */int) (short)-17302)), (-11))));
                        var_34 = ((((/* implicit */_Bool) (short)-28773)) || (((/* implicit */_Bool) 4164637209768252009ULL)));
                    }
                    for (short i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        arr_52 [i_15] [i_13] [i_12 + 2] [i_15] [i_11] [i_11] [i_2] = ((/* implicit */_Bool) 2147483647);
                        arr_53 [i_2] [i_2] [i_15] [i_13] [i_15] = (+(var_11));
                        arr_54 [i_2] [i_2] [i_12 - 3] [i_2] [i_2] &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (3716574084586376793ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))) ? (((((((/* implicit */_Bool) (unsigned short)46357)) ? (((/* implicit */int) (short)14091)) : (((/* implicit */int) (short)22464)))) - (((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */int) max((var_0), (var_0)))) >= (((/* implicit */int) min(((short)0), ((short)1))))))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 14; i_16 += 3) 
                    {
                        arr_57 [i_2] [i_11] [i_11] [i_12 - 2] [i_16] &= ((/* implicit */unsigned long long int) var_3);
                        var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (-2084031875) : (((/* implicit */int) (_Bool)1))))) ? (((arr_40 [i_2] [i_2]) ? (((/* implicit */int) arr_22 [i_12 - 3] [i_12 + 2] [i_12 + 2] [i_12 - 1] [i_2])) : ((-(((/* implicit */int) (short)32767)))))) : ((+(((((/* implicit */_Bool) (short)-25219)) ? (10) : (((/* implicit */int) (_Bool)1))))))));
                        var_36 = ((/* implicit */_Bool) ((unsigned short) min((((13320051699403403301ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [(short)9] [i_11] [i_13] [i_16]))))), (((/* implicit */unsigned long long int) ((short) var_5))))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_12 + 1]))))))))));
                        var_38 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22111)) ? (((/* implicit */int) var_5)) : (-2122260854)))) ? (((unsigned long long int) (short)-7335)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (int i_17 = 1; i_17 < 11; i_17 += 4) 
                    {
                        arr_60 [i_12] = (!(((/* implicit */_Bool) (short)-22473)));
                        arr_61 [i_2] [i_11] [i_12] [i_13] [i_17] &= ((((/* implicit */_Bool) arr_27 [i_2] [i_11] [i_12] [i_11] [i_17])) ? ((((_Bool)0) ? (((/* implicit */int) (short)-13269)) : (-982197263))) : ((+(1188291611))));
                    }
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_7)) : ((((_Bool)1) ? (((/* implicit */int) arr_40 [i_13] [i_12])) : (((/* implicit */int) (short)5792))))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_41 [i_12 - 1] [i_12] [i_12 + 2] [i_12 + 2])) == (((/* implicit */int) (_Bool)1))))))));
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (-(((/* implicit */int) var_2)))))));
                    arr_62 [i_13] [i_12 - 2] [i_11] [i_2] [i_2] [i_2] |= ((/* implicit */int) ((min((min((18446744073709551595ULL), (((/* implicit */unsigned long long int) arr_18 [i_2] [i_11] [i_13])))), (((/* implicit */unsigned long long int) var_9)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)1023)), (var_2)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_43 [i_11] [i_2])) : (((/* implicit */int) (short)-25741)))) : (((/* implicit */int) var_8)))))));
                    var_41 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_34 [i_12 + 1] [i_12 - 3] [i_12 - 3] [i_12 + 2] [i_12 - 3] [i_12 + 2] [i_12 - 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) max((var_6), (var_4))))))));
                }
                for (int i_18 = 0; i_18 < 14; i_18 += 2) 
                {
                    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (~(((/* implicit */int) max((var_0), (var_0)))))))));
                    var_43 = ((/* implicit */short) (-(((unsigned long long int) (+(((/* implicit */int) (short)-8478)))))));
                }
                var_44 = ((/* implicit */_Bool) (~(((((/* implicit */int) (short)-8069)) | (542809876)))));
                var_45 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49327))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_10))));
            }
            var_46 = ((/* implicit */unsigned short) ((unsigned long long int) max((var_6), (((/* implicit */int) (short)30981)))));
        }
    }
}
