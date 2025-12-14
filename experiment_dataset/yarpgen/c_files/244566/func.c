/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244566
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
    var_13 = ((/* implicit */signed char) max((5111359925280854179ULL), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (13335384148428697436ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)60)))))) / (((/* implicit */unsigned long long int) (+(((unsigned int) 13335384148428697466ULL)))))));
        arr_4 [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (5548518705840282980ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((long long int) var_10)) % (((/* implicit */long long int) (+(((/* implicit */int) var_12))))))))));
            arr_12 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_1 - 1]))));
            arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_1 + 3])))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_4))) : (((67108863ULL) >> (((arr_11 [i_1 - 1]) - (1752326276U)))))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_3))));
            arr_17 [i_1] = ((/* implicit */long long int) var_0);
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            arr_21 [i_1] = ((long long int) 5229823022636916602ULL);
            arr_22 [i_1] = 5641188247160857384LL;
            arr_23 [i_1] [7U] [i_1] = ((/* implicit */unsigned int) max((5229823022636916597ULL), (13335384148428697452ULL)));
            arr_24 [i_1] = var_6;
        }
        /* LoopSeq 4 */
        for (short i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
            {
                arr_30 [i_5] [i_1] = ((/* implicit */long long int) 1002834461U);
                var_16 = ((arr_14 [i_5 + 3] [i_1 + 2]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    arr_33 [i_1 + 3] [i_1] [9U] [0ULL] = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_1 + 3]))));
                    var_17 -= ((/* implicit */signed char) (-(18309912164435952046ULL)));
                    arr_34 [i_1] [i_1 - 1] [i_1] [i_6] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) -5641188247160857384LL)) ? (arr_19 [(signed char)1] [i_1] [i_5 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_5] [i_1])))));
                }
            }
            for (long long int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_39 [i_1] [i_8] [i_1] [i_1] = ((/* implicit */signed char) (short)32767);
                    arr_40 [i_1] [i_5] [i_5] |= ((/* implicit */_Bool) arr_6 [i_8]);
                    arr_41 [i_1] [i_5] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-31)), (-806491819048518977LL)));
                }
                /* vectorizable */
                for (signed char i_10 = 1; i_10 < 11; i_10 += 2) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_10 + 1])) ? (var_1) : (((long long int) 5111359925280854163ULL))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 8074094237441974784LL)) : (arr_38 [i_1] [(signed char)0] [i_8] [i_10 + 1])))) ? (((((/* implicit */_Bool) (signed char)-112)) ? (arr_7 [i_1] [i_1]) : (1747467682U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4151483403915456454LL))))))));
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_1 + 3] [i_1])) >> (((/* implicit */int) ((3U) <= (arr_15 [i_5]))))));
                }
                /* vectorizable */
                for (signed char i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    var_21 = ((5641188247160857384LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))));
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)-40)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24937))))));
                        arr_48 [i_1] [i_11 + 1] [i_8] [i_8] [i_5 + 3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned short)27867))));
                    }
                    for (signed char i_13 = 2; i_13 < 9; i_13 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((unsigned short) 5786987018598612256LL));
                        arr_51 [i_1] = ((/* implicit */unsigned long long int) (~(arr_7 [i_1] [i_5 - 1])));
                        var_24 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)-29589)))) ? (((/* implicit */int) ((short) 1747467682U))) : (((/* implicit */int) ((signed char) (signed char)-87)))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 282613032U)) ? (0U) : (((((/* implicit */_Bool) 2547499613U)) ? (1747467682U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75)))))));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) 8475223915122323360LL))));
                        arr_55 [i_1] [i_1] [i_8] [i_11] [i_14 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-76)) ? ((+(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14607)))))));
                        var_27 ^= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 2616263262U)) ? (arr_25 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                    }
                    for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 3) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */long long int) 4036876759U)) == (arr_54 [(_Bool)1] [i_8] [i_11 - 1] [i_15] [i_11 - 1])));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6479))) * (13335384148428697436ULL))))));
                        var_30 ^= ((((((/* implicit */_Bool) 1761375084747952473ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [6U] [i_5]))) : (12810106125336773442ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        arr_60 [i_5] [i_5] [i_5] [i_5] [(short)4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (13335384148428697437ULL) : (((/* implicit */unsigned long long int) 5786987018598612256LL))));
                        arr_61 [1U] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_49 [(short)7] [i_16] [(short)7] [i_16] [i_16] [(short)7] [i_1]))))) % (arr_5 [i_1 + 2])));
                    }
                }
                var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_10))))))) ? (((var_1) - (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))) : (var_5)));
                arr_62 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!((_Bool)1)));
            }
            for (long long int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_18 = 1; i_18 < 11; i_18 += 4) 
                {
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) 12810106125336773442ULL))));
                    arr_68 [i_18 - 1] [i_5] [i_17] [i_5 + 1] [i_5] [i_1] &= ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (short)8044)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        arr_71 [i_1] [i_1] [i_18] [i_18] [i_19] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        arr_72 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_20 [i_5 + 2] [i_18 + 1])))) < (min((arr_15 [i_1]), (((/* implicit */unsigned int) (unsigned short)22943))))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((+(arr_63 [10LL] [i_1 + 2] [i_5 - 1] [i_17]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)31)))))));
                        var_34 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (-(7677050154833464048LL))))) ? ((-(4258210650U))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (max((((/* implicit */unsigned int) (_Bool)1)), (var_0)))))));
                    }
                }
                arr_73 [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (~(arr_10 [i_1 + 2]))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1293857930209867271LL)) ? (((/* implicit */int) (unsigned short)22947)) : (((/* implicit */int) (_Bool)1))))) / (max((var_1), (((((/* implicit */_Bool) arr_59 [i_1] [i_5 + 2] [i_5] [i_17])) ? (-1LL) : (((/* implicit */long long int) arr_11 [i_1]))))))));
                /* LoopSeq 2 */
                for (signed char i_20 = 2; i_20 < 11; i_20 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_20] [i_20])) ? (((/* implicit */unsigned long long int) var_6)) : ((-(1372968457465889189ULL))))))));
                        var_37 = ((/* implicit */signed char) 2701876445213913878LL);
                        var_38 = ((/* implicit */_Bool) ((unsigned int) (short)11434));
                        arr_81 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_8);
                    }
                    arr_82 [i_17] [i_1] = var_0;
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) min(((+((~(68719476735ULL))))), (((/* implicit */unsigned long long int) (+(min((-4329159617529720325LL), (((/* implicit */long long int) 0U))))))))))));
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_1] [i_5] [i_20] [i_20])))))));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (+(((/* implicit */int) (short)-1)))))));
                }
                for (long long int i_22 = 0; i_22 < 12; i_22 += 4) 
                {
                    var_42 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1160086356942599457ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_2 [2U])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (var_1)))))));
                    var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((((/* implicit */long long int) 1810445191U)) >= (var_5))))));
                }
                var_44 = ((/* implicit */signed char) max((((long long int) arr_59 [i_1 + 2] [i_5] [11LL] [i_1 + 2])), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967295U)))) ? (((/* implicit */int) (short)-11407)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5]))))))))));
            }
            var_45 = ((/* implicit */long long int) var_9);
            arr_87 [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_63 [i_1] [11LL] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) arr_47 [i_1] [i_1] [i_5] [i_1] [i_1] [i_5])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11434)))))));
            var_46 = ((((/* implicit */_Bool) max((arr_43 [i_1 + 1] [i_5 + 3] [i_5] [i_5 - 1]), (((/* implicit */unsigned int) (signed char)-13))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1062812821U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))) : (var_0));
        }
        for (short i_23 = 2; i_23 < 9; i_23 += 2) /* same iter space */
        {
            arr_90 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) (-(var_1))))) > (((/* implicit */int) var_12))));
            arr_91 [i_1] [i_23] = ((/* implicit */signed char) (~(-2022821025996467205LL)));
        }
        /* vectorizable */
        for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 3) 
        {
            var_47 = ((/* implicit */short) ((unsigned int) var_0));
            arr_94 [i_1] [i_1] = ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2)));
            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_1 - 1] [i_1 - 1] [8LL] [4LL] [(signed char)1])) ? (arr_79 [i_1] [i_24] [i_1 + 2] [i_24] [i_24]) : (arr_79 [i_1 + 1] [i_1] [6LL] [i_1] [i_1])));
            var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-4248794325514157139LL) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((var_5) ^ (var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_84 [i_1])))));
            var_50 = ((/* implicit */short) ((((/* implicit */_Bool) -2022821025996467208LL)) ? (((/* implicit */int) (short)-11407)) : (((/* implicit */int) (signed char)-26))));
        }
        /* vectorizable */
        for (unsigned int i_25 = 0; i_25 < 12; i_25 += 1) 
        {
            var_51 = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) (_Bool)0)))));
            var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3941278763U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)111))));
        }
    }
}
