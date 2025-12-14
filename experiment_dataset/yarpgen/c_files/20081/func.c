/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20081
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_2 [(short)1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned short)43741))))) : (min((-2031746234072776759LL), (((/* implicit */long long int) (unsigned char)1))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)3964))) - (3507842124U));
        var_16 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) (~(((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_6 [i_1])))) * (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)30442))))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (-7885197889879229020LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18487)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) arr_5 [i_2]);
        /* LoopSeq 3 */
        for (long long int i_3 = 1; i_3 < 8; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (unsigned short)42900))));
                var_18 = ((/* implicit */int) min((var_18), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4])) && (((/* implicit */_Bool) (signed char)31)))))))));
                var_19 = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned char)222))))));
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    var_20 = (+(((/* implicit */int) (short)-2123)));
                    var_21 = ((/* implicit */unsigned int) ((14021709965752293798ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 2030093357)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21795))) : (-6992865834573173624LL))))));
                }
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) (signed char)-126);
                        arr_27 [i_4] [i_4] [i_4] [i_4] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2]))))) ? (((/* implicit */long long int) (~(arr_19 [i_7] [i_3] [i_4] [i_7])))) : (((((/* implicit */_Bool) -2030093378)) ? (-1773892327271189306LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20)))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3484499159406645940LL))));
                        arr_32 [i_3] [i_2] [i_4] [i_2] [i_8] [i_8] = ((/* implicit */int) (~(910073469U)));
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_10 [i_2]);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */unsigned int) arr_18 [i_6] [i_8])) : (3U)));
                        var_25 = ((/* implicit */unsigned long long int) (+(2030093377)));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_2] [i_2] [i_3] [i_4] [6U] [(unsigned char)6]))))));
                        var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? (-1773892327271189303LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (signed char)-40)))))));
                    }
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (unsigned char)6))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (short)20020)) : (((/* implicit */int) (unsigned short)35099))))) || ((!(((/* implicit */_Bool) arr_23 [i_2]))))));
                }
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                {
                    var_30 -= ((/* implicit */short) arr_30 [i_10] [i_3 + 2] [(short)0] [i_10] [i_10]);
                    var_31 = ((/* implicit */short) (unsigned char)116);
                    var_32 = ((/* implicit */long long int) arr_6 [(unsigned char)1]);
                }
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_44 [i_2] [i_3 - 1] [i_4] [i_2] [i_12] [i_2] = ((/* implicit */signed char) arr_13 [i_2] [i_11] [i_12]);
                        var_33 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30432)))))));
                        arr_45 [i_12] [i_11] [i_2] [i_3] [8LL] = (-(((/* implicit */int) (unsigned char)46)));
                        var_34 = ((/* implicit */signed char) (short)-10181);
                    }
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 11; i_13 += 3) 
                    {
                        var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_3 + 3] [i_4]))));
                        arr_49 [i_2] [i_11] [i_4] [i_2] [i_2] [i_13 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1691225740)) ? (-481503558) : (((/* implicit */int) (unsigned short)52618)))))));
                        var_36 ^= ((/* implicit */signed char) (short)-20020);
                        var_37 = ((/* implicit */unsigned short) arr_48 [i_3 + 2] [i_13 + 1] [i_13 + 1] [i_2] [i_13 - 1] [8]);
                        arr_50 [i_2] [(short)7] [i_4] [i_4] [i_4] [i_4] [i_4] = ((arr_24 [i_3 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 - 1] [i_13 + 1]))));
                    }
                    var_38 = arr_19 [i_11] [i_4] [i_3 - 1] [i_2];
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        var_39 ^= ((/* implicit */unsigned long long int) 6959927240865731391LL);
                        arr_53 [i_2] [i_2] = (~(((/* implicit */int) (signed char)-113)));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-21)) ? (959106747) : (((/* implicit */int) (_Bool)1))));
                        arr_54 [i_14] [i_2] [i_4] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (unsigned short)5570)) : (((/* implicit */int) (unsigned char)3))))) ? (((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52620))) : (-5232799587559789928LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))));
                    }
                }
            }
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (unsigned short)12904))));
            var_42 &= ((/* implicit */unsigned short) (signed char)39);
            var_43 ^= ((/* implicit */int) 411806757U);
        }
        for (long long int i_15 = 1; i_15 < 8; i_15 += 1) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((((-4103172973707991973LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))))) ? (((/* implicit */int) arr_13 [10LL] [i_15] [i_15])) : (((/* implicit */int) arr_30 [i_15 + 2] [i_15] [(unsigned char)2] [i_15 - 1] [i_2])))) : (((((/* implicit */_Bool) (short)-16377)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (signed char)19)))))))))));
            var_45 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)211)) & (((/* implicit */int) (signed char)115))));
        }
        for (long long int i_16 = 1; i_16 < 8; i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_46 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)226)) - (((/* implicit */int) (short)2188))))) ? (((((/* implicit */_Bool) arr_14 [i_17] [i_17])) ? (((/* implicit */int) arr_55 [i_2] [i_16 + 3])) : (((/* implicit */int) arr_34 [i_2] [i_16] [0U] [i_17] [i_16 + 2] [i_18] [i_17])))) : ((+(((/* implicit */int) (unsigned char)35))))))));
                        arr_64 [i_2] [i_16] [i_17] [i_2] [i_18] = ((/* implicit */unsigned char) (~(min((arr_38 [i_2] [i_16 + 3]), (((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_2] [i_16])) ^ (((/* implicit */int) arr_15 [i_2])))))))));
                        var_47 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 2603306009U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16383))) : (-5674180419821897211LL))), (((/* implicit */long long int) (_Bool)1))));
                    }
                } 
            } 
            var_48 = ((/* implicit */long long int) arr_5 [i_2]);
        }
        arr_65 [i_2] [i_2] = ((/* implicit */signed char) (unsigned char)127);
        arr_66 [i_2] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2]);
        var_49 = ((((/* implicit */_Bool) arr_59 [i_2] [i_2] [i_2] [i_2])) ? (17786753724627340346ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_23 [i_2]))))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) /* same iter space */
    {
        var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)232))))), (1858100445849778442LL)))) ? (arr_57 [i_19] [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) ((-5232799587559789922LL) != (-9164358732114366396LL)))))));
        var_51 = ((/* implicit */short) ((1083441802U) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)153)) + (((/* implicit */int) (unsigned char)3)))))));
        /* LoopSeq 3 */
        for (unsigned short i_20 = 1; i_20 < 11; i_20 += 4) /* same iter space */
        {
            var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) (signed char)20)) + (-1))) : (((((/* implicit */_Bool) 5232799587559789917LL)) ? (((/* implicit */int) arr_68 [i_19])) : (((/* implicit */int) arr_68 [i_20]))))))) ? (arr_17 [8LL]) : (((/* implicit */int) (signed char)59)))))));
            arr_73 [i_20] [i_19] [i_19] = (+(-1));
            arr_74 [i_19] [i_20] [i_19] = ((/* implicit */_Bool) (unsigned short)4095);
        }
        for (unsigned short i_21 = 1; i_21 < 11; i_21 += 4) /* same iter space */
        {
            arr_77 [4ULL] &= ((/* implicit */int) arr_22 [i_19] [i_21] [(signed char)10]);
            var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) (~(((/* implicit */int) arr_36 [i_19] [i_19] [i_19] [i_21 - 1] [i_21] [i_21] [i_21 + 1])))))));
        }
        for (unsigned short i_22 = 1; i_22 < 11; i_22 += 4) /* same iter space */
        {
            var_54 *= ((/* implicit */unsigned long long int) 502297333);
            arr_81 [i_19] [i_19] = ((/* implicit */unsigned long long int) 0);
            var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22])) ? (8589934591LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)107)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) : (10LL)));
        }
    }
    var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (-11LL)))) ? (((/* implicit */int) var_5)) : (min((((/* implicit */int) (short)-1)), ((-(((/* implicit */int) var_12)))))))))));
    var_57 = ((/* implicit */signed char) var_7);
}
