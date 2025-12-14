/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25880
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [(_Bool)1] [i_0] = ((((/* implicit */_Bool) (-(max((((/* implicit */int) (signed char)57)), (2056730487)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-5685)) && (((/* implicit */_Bool) 0ULL)))))) : (((unsigned long long int) arr_1 [i_0 - 1])));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            var_17 = ((/* implicit */short) (unsigned short)55175);
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) min((arr_2 [i_0]), (0U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2056730487)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) arr_5 [(unsigned char)11] [(unsigned char)11]))))) ? (var_5) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
            var_19 = ((short) ((short) -2056730488));
            var_20 = ((/* implicit */long long int) ((signed char) ((((((/* implicit */int) arr_6 [i_1])) > (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((18313269) << (0)))) : (((((/* implicit */unsigned int) -2009675246)) * (arr_2 [i_0]))))));
        }
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_10 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (arr_2 [i_0 + 1]))), (((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2])))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
            {
                var_21 = ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_2] [i_0 + 2] [i_3])) ? ((+(682980743105409931LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0] [19U]))))));
                var_22 = ((/* implicit */unsigned long long int) 4294967295U);
                var_23 = ((/* implicit */unsigned long long int) ((long long int) -243674200));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_18 [i_5] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) >> (((((/* implicit */int) (unsigned short)39540)) - (39530)))));
                            arr_19 [i_3] [i_2] [i_5] [i_4] [i_5] = ((/* implicit */int) ((short) arr_15 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2]));
                            arr_20 [i_5] [14U] [i_5] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((-386378920) | (((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))));
                        }
                    } 
                } 
            }
            for (signed char i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
            {
                var_24 += ((/* implicit */signed char) (((-(-2056730488))) >= ((+(((((/* implicit */int) (signed char)121)) >> (((-18313269) + (18313290)))))))));
                var_25 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) arr_7 [i_0 + 1])) : (((/* implicit */int) arr_7 [i_2])))));
                var_26 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) arr_17 [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 1] [i_6]))), (var_8)));
                var_27 -= ((/* implicit */unsigned int) ((951602046) + (((/* implicit */int) max((max((((/* implicit */short) (signed char)116)), (arr_15 [i_0] [i_0] [i_2] [i_2] [i_2] [i_6]))), (((/* implicit */short) arr_13 [i_6] [i_0 + 2] [13ULL] [i_0])))))));
            }
            for (signed char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
            {
                arr_26 [(short)7] [i_2] [i_7] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)665))))) : (max((-4636406738793113585LL), (((/* implicit */long long int) -18313270))))))));
                var_28 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_23 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (arr_23 [i_0 - 1] [i_0 + 2])))));
                arr_27 [i_0] [i_2] [2] [(unsigned char)18] = ((/* implicit */short) (+(max((max((((/* implicit */unsigned int) (signed char)113)), (arr_2 [i_0 - 1]))), (((/* implicit */unsigned int) arr_12 [i_7]))))));
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(-2009675252))))) ? ((+(-2009675246))) : ((+(((((/* implicit */_Bool) arr_5 [i_0] [14LL])) ? (((/* implicit */int) arr_14 [i_0] [i_2])) : ((-2147483647 - 1))))))));
            }
            for (signed char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
            {
                arr_30 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_21 [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 1])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (arr_21 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    arr_34 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) min(((-(((/* implicit */int) (short)-28112)))), (1799677772)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_28 [i_0] [i_2] [i_8] [i_9])) : (var_8)))) ? (arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)199)) ? (arr_28 [i_0 - 2] [i_2] [i_0 - 2] [i_0 - 2]) : (((/* implicit */int) (unsigned short)0)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        var_30 = min((((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 - 2])) : (((/* implicit */int) (unsigned char)212)))), ((-(min((-2147483642), (2009675246))))));
                        var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_4 [(short)10] [i_8] [i_8])), (max((4503599627370495ULL), (((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39540))) : (arr_17 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0])))))));
                        arr_37 [i_0 + 2] [i_2] [i_8] [i_9] [i_10] [i_2] [i_2] = min(((-(max((4194303ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0 + 1])) < (((/* implicit */int) arr_12 [i_0 - 1]))))));
                        arr_38 [i_0] [(short)3] [i_0] [(short)3] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)41801);
                    }
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)1)) & (((/* implicit */int) (unsigned short)39540)))), (((/* implicit */int) ((signed char) var_10)))))) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (signed char)-114))));
                        var_33 = ((/* implicit */unsigned long long int) min((((arr_11 [i_0 + 1] [9] [i_9] [i_11]) | (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0]))))), (((/* implicit */long long int) 610436338U))));
                    }
                }
                arr_43 [i_8] [(unsigned char)10] = ((/* implicit */unsigned char) arr_23 [i_0 + 1] [i_0 + 1]);
                arr_44 [i_0] [i_2] = ((/* implicit */unsigned char) (((-(((((/* implicit */unsigned long long int) -1146081548)) - (0ULL))))) << (((((((/* implicit */_Bool) (unsigned short)41404)) ? (max((((/* implicit */int) var_2)), (-18313269))) : (((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) arr_29 [i_0])) : (1072693248))))) + (32673)))));
                var_34 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((signed char) arr_16 [i_0 - 2] [i_0] [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 114731057)) ? (142989288169013248LL) : (((/* implicit */long long int) -18313270))))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -18313281)) : (17656132590453186983ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16256))) - (5648575458040134205LL))))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                arr_47 [i_0] [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)240))));
                arr_48 [i_0] [5] [(_Bool)1] [i_12] = ((/* implicit */unsigned int) (_Bool)0);
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_0 + 1] [(short)1] [i_0 - 1])), (4095U)))) & ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_0 + 1] [i_0] [i_2]))) : (18446744073705357312ULL)))));
            }
            for (short i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                var_36 = ((/* implicit */unsigned char) ((max((-5648575458040134206LL), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 2] [i_0 - 2] [i_0])))));
                arr_52 [i_0] [(signed char)10] [i_0] = ((/* implicit */unsigned int) ((((min((arr_45 [(signed char)6] [i_2] [17] [i_13]), (((/* implicit */unsigned long long int) (_Bool)1)))) + (max((((/* implicit */unsigned long long int) arr_0 [i_2])), (4804954782921088518ULL))))) & (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)3)), (-1247504694))))));
            }
        }
        var_37 = ((/* implicit */unsigned int) 469205243);
        var_38 &= ((/* implicit */short) arr_33 [i_0] [i_0] [i_0] [i_0]);
    }
    var_39 = ((/* implicit */int) var_10);
    var_40 = ((/* implicit */long long int) ((min((-2032123289046035756LL), (((576460750155939840LL) % (-6823642737442152079LL))))) == (var_15)));
}
