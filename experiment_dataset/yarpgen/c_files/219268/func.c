/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219268
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = (~(5939373584899901147ULL));
        var_14 = ((/* implicit */unsigned char) arr_3 [i_0]);
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_5)))));
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)0)) ? (-5122930460074028507LL) : (5122930460074028506LL))) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (235)))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_12 [i_1] [i_2 - 1] = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) 548186188701916237LL)), (5939373584899901147ULL))));
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(-5122930460074028506LL))))))));
                arr_13 [i_1] [0ULL] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_9 [i_2 + 2] [i_1] [i_2 + 2] [i_2]));
            }
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_22 [i_1] [i_1] [i_1] [3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)16376))))))));
                        arr_23 [i_4] [i_4] [i_1] [i_5] [i_6] [i_4] = ((/* implicit */long long int) min((min((var_1), (((((/* implicit */unsigned long long int) var_10)) | (arr_16 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_4 [8U])), (-8586688626211609739LL))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2]))) & (arr_10 [20ULL] [20ULL] [i_4] [i_4]))))))));
                    }
                    for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        arr_26 [i_1] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (-6825438420347401773LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) arr_19 [i_1] [(unsigned char)11] [13]))))))))) : (arr_16 [i_2] [7U])));
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)9] [i_1] [i_7])) ? (((/* implicit */int) arr_24 [(unsigned short)1] [i_5])) : (((/* implicit */int) (unsigned short)52847))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))))) << (((((unsigned int) ((short) (short)-1))) - (4294967246U)))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                    {
                        var_18 = var_7;
                        arr_31 [i_1] [i_2 + 1] [i_4] [i_5] [i_8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_11))));
                        arr_32 [i_1] = ((/* implicit */long long int) (~((-(256021996U)))));
                        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) arr_16 [i_2] [i_2])))));
                    }
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                    {
                        arr_35 [(unsigned short)6] [i_1] [(unsigned short)6] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4124896884U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_1])))) | (((unsigned long long int) var_9)))) : (min((((((/* implicit */unsigned long long int) 5122930460074028491LL)) & (var_1))), (((/* implicit */unsigned long long int) min(((unsigned short)50939), (((/* implicit */unsigned short) arr_11 [i_5] [i_4] [i_2] [5U])))))))));
                        arr_36 [i_2] [i_1] [i_9] = ((/* implicit */signed char) (short)0);
                        var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)212)) && (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (((((/* implicit */_Bool) (short)-13)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_5]))))))) | (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-3)), (arr_19 [i_1] [i_4] [i_1])))) ? (697689739692746347LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9] [i_9] [i_9] [i_9] [i_2 + 2] [i_2 + 1] [i_2 + 2])))))));
                        arr_37 [i_1] [i_2] [i_4] [i_5] [i_9] [i_5] = ((/* implicit */long long int) 12507370488809650469ULL);
                    }
                    arr_38 [i_1] [i_2] [i_1] [i_1] [i_1] [0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_1] [i_2 + 1])), (((((/* implicit */_Bool) (unsigned short)42443)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-11)))))))) ? (((/* implicit */unsigned long long int) ((long long int) var_0))) : (var_2));
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_21 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                        var_22 = ((/* implicit */unsigned char) ((arr_14 [i_2 + 2] [i_2] [i_2] [i_2 + 1]) << (((((((/* implicit */_Bool) (short)-13)) ? (5122930460074028505LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))))) - (5122930460074028497LL)))));
                        var_23 = (!(((/* implicit */_Bool) ((int) arr_24 [i_1] [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_24 = ((((/* implicit */_Bool) 8182320614813649532LL)) ? (((/* implicit */int) (unsigned short)2048)) : (((/* implicit */int) (unsigned char)34)));
                        var_25 = ((((/* implicit */_Bool) arr_41 [16U] [i_2 - 1] [i_2] [i_2 + 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_2 + 2]))) : (var_7));
                        arr_43 [i_1] [i_2] [i_11] [i_11] [i_11] [i_1] = ((/* implicit */unsigned int) ((long long int) (-(var_2))));
                    }
                    for (short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_1]))))) ? (((/* implicit */int) (unsigned short)52847)) : (((/* implicit */int) ((short) arr_30 [i_1] [i_1] [i_4] [i_5] [i_12])))))));
                        arr_46 [i_1] = ((/* implicit */long long int) (short)-23072);
                    }
                }
                arr_47 [i_1] [i_2] [i_1] [(short)17] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_24 [i_1] [i_4])) ? (arr_15 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [10ULL] [i_2] [i_4] [i_1] [i_2] [i_1] [i_4])))))))) && (((/* implicit */_Bool) min((arr_6 [2LL] [i_1] [5LL]), (((/* implicit */short) arr_44 [i_4] [i_4] [i_4] [i_4] [(short)18])))))));
                arr_48 [i_1] = ((/* implicit */_Bool) ((long long int) min((((/* implicit */int) arr_25 [i_2 - 1] [i_2] [i_2] [i_4] [i_2] [i_1])), ((+(((/* implicit */int) (signed char)-26)))))));
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    arr_52 [i_1] [i_1] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)155)) && (((/* implicit */_Bool) var_11))))))), (((/* implicit */int) ((unsigned char) (short)-13)))));
                    var_27 = ((/* implicit */unsigned long long int) (+(((arr_19 [i_1] [i_4] [i_1]) / (arr_19 [i_1] [i_2 + 1] [i_4])))));
                }
            }
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                var_28 = -5122930460074028506LL;
                var_29 = ((/* implicit */unsigned short) ((long long int) arr_24 [i_1] [i_2 - 1]));
            }
            arr_55 [i_1] [3] [i_1] = ((/* implicit */unsigned long long int) ((short) (signed char)-11));
            arr_56 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_2]);
        }
        var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_53 [i_1] [i_1] [i_1])))));
        arr_57 [i_1] = ((/* implicit */unsigned long long int) var_8);
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4027368052516756135ULL)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) -8182320614813649533LL))))))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) var_9);
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 131071LL)) ? (2407593668010005903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((((((/* implicit */int) (short)0)) | (((/* implicit */int) arr_11 [i_15] [(_Bool)1] [i_17] [i_18])))) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_15])), (arr_65 [i_1] [i_15] [i_16])))))) : (((/* implicit */int) ((unsigned short) arr_58 [i_17])))));
                            arr_69 [i_1] [(unsigned short)14] [i_16] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((int) 8182320614813649532LL)))))));
                            arr_70 [i_1] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (unsigned char)34))));
                            arr_71 [i_1] [i_15] [i_16] [i_17] [i_1] = ((/* implicit */unsigned char) ((((unsigned long long int) (unsigned char)199)) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2048)))))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_1] [i_15])) | (((/* implicit */int) arr_67 [i_1] [i_1] [0LL] [(short)15] [i_1]))))) ? (min((arr_58 [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65534))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((6325000326529085462ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) ((unsigned int) 10949385485242197130ULL))))))));
                            arr_74 [i_1] [i_15] [i_15] [i_17] = ((/* implicit */unsigned short) (((+(((int) var_12)))) << (((((((/* implicit */_Bool) ((unsigned char) arr_54 [(unsigned short)2] [i_1] [i_16] [i_17]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) - (10357)))));
                        }
                        arr_75 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 17625060781532447491ULL))) && (((/* implicit */_Bool) ((unsigned long long int) arr_34 [i_1] [i_1] [12LL] [i_17])))));
                    }
                    arr_76 [i_1] [i_1] [i_1] [i_16] = ((/* implicit */signed char) ((_Bool) ((int) var_3)));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)216)) && (((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (long long int i_20 = 0; i_20 < 18; i_20 += 3) 
    {
        var_36 = ((/* implicit */int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((unsigned long long int) arr_78 [i_20] [i_20])) : (((/* implicit */unsigned long long int) ((arr_10 [i_20] [i_20] [i_20] [i_20]) | (((/* implicit */long long int) arr_61 [16ULL]))))))), (((/* implicit */unsigned long long int) var_3))));
        /* LoopSeq 1 */
        for (int i_21 = 1; i_21 < 14; i_21 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_22 = 0; i_22 < 18; i_22 += 4) 
            {
                for (unsigned short i_23 = 0; i_23 < 18; i_23 += 2) 
                {
                    for (signed char i_24 = 0; i_24 < 18; i_24 += 4) 
                    {
                        {
                            arr_91 [i_20] [i_20] [i_20] [(short)5] [i_20] = ((/* implicit */short) (-(((int) (unsigned short)63721))));
                            arr_92 [8LL] [i_21] [i_20] = ((/* implicit */short) (unsigned short)0);
                        }
                    } 
                } 
            } 
            arr_93 [i_20] [i_20] = ((/* implicit */short) (((+(((((/* implicit */_Bool) arr_73 [i_20] [i_21] [i_21] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) -3890466935995005542LL)) : (var_2))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_87 [i_21 + 2] [i_21 - 1] [i_21 + 3] [i_21] [15] [(short)10])) && (((/* implicit */_Bool) var_5))))))));
        }
        var_37 = ((/* implicit */_Bool) (-(((unsigned long long int) (unsigned short)65531))));
        arr_94 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) | (arr_40 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])))) ? (((/* implicit */unsigned long long int) ((5358998043080622572LL) << (((arr_40 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]) - (14690566916873239861ULL)))))) : (((((/* implicit */_Bool) arr_40 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])) ? (arr_40 [i_20] [i_20] [i_20] [i_20] [14ULL] [i_20] [i_20]) : (arr_40 [i_20] [i_20] [(unsigned short)14] [i_20] [i_20] [i_20] [i_20])))));
    }
}
