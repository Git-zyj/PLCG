/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193260
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 663755046))))), ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [(unsigned short)6] [i_0])))))) + ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)117))))));
        arr_3 [i_0] [(unsigned short)13] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((signed char) ((signed char) arr_1 [14LL] [14LL]))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_17 -= ((/* implicit */unsigned short) ((long long int) (-(-4821331603452344174LL))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((int) var_5)) : ((+(((/* implicit */int) var_9))))));
                            var_19 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                            var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5]))));
                            var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)200))));
                        }
                    }
                    for (short i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        arr_23 [i_1] [8] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((signed char) -1340468376));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_6 + 2] [i_6 + 3] [i_2])) & (((/* implicit */int) ((unsigned short) (unsigned short)59246)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */int) ((_Bool) -1969820369));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_1 + 1])) >= (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_1 + 1]))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) (~(arr_6 [i_3])));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])) : (((/* implicit */int) ((_Bool) var_5)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) (signed char)48)))));
                        arr_34 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1])));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (signed char)-72)) : (-115965425))) >= (561624433)));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_2] [i_1] [i_1 + 1]))) | (arr_15 [i_1 + 1] [i_1] [i_1 + 1] [i_3] [i_10])));
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) 3371146061914077074LL);
                            arr_40 [(signed char)14] [i_1] [(unsigned short)5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551608ULL))));
                        }
                        for (unsigned short i_12 = 3; i_12 < 13; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) -7727060122441501418LL)) ? (((((/* implicit */_Bool) -156043478)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_24 [i_12 + 1] [i_1 + 1] [i_3] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_12 - 3] [i_1 + 1] [i_3] [i_1])))));
                            var_32 = ((arr_36 [5] [i_1] [i_10] [i_3] [i_2] [i_1]) ? (((/* implicit */int) arr_36 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_36 [i_1] [i_1] [i_1] [6LL] [i_10] [i_12])));
                            var_33 = ((/* implicit */unsigned char) (-(-6528261537146299725LL)));
                            var_34 = ((/* implicit */unsigned short) ((_Bool) 6389879746328305800ULL));
                        }
                    }
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        arr_45 [i_1] [i_2] [i_3] [i_13] = ((/* implicit */_Bool) (~(arr_6 [i_3])));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152912708513824768LL)) ? (((/* implicit */int) arr_12 [i_2] [i_1] [12ULL])) : (((/* implicit */int) var_0))))) ? (arr_6 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1 + 1])))));
                    }
                    arr_46 [i_1 + 1] [i_1] [i_3] = ((/* implicit */int) ((unsigned int) arr_42 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]));
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (-((-(((/* implicit */int) arr_13 [i_1 + 1] [i_2] [i_3] [(signed char)10])))))))));
                        arr_49 [i_1 + 1] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [5]))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8929490988731447107ULL)))));
                        var_37 = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_1 + 1]));
                    }
                    for (long long int i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        var_38 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)12235)) ? (((/* implicit */int) arr_38 [i_1] [i_2] [(unsigned short)3] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) (unsigned short)4178))));
                        var_39 = ((/* implicit */short) ((unsigned short) var_7));
                    }
                    var_40 = ((/* implicit */unsigned short) ((arr_21 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])))));
                }
            } 
        } 
        arr_53 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) (signed char)46));
        arr_54 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-5504))))) ? (((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_1] [i_1] [i_1])) ? (arr_41 [i_1] [i_1 + 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 3359639772U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (2270475863U))))));
    }
    var_41 = ((/* implicit */signed char) min((var_5), (var_3)));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 23; i_16 += 4) 
    {
        for (short i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            {
                var_42 = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (max((var_13), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((unsigned int) ((unsigned short) ((unsigned short) var_14)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                            {
                                arr_71 [i_16] [i_16] [16U] [i_17] [i_17] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_63 [i_19] [i_19] [i_17] [i_16])) && (((/* implicit */_Bool) arr_64 [i_20] [i_17])))) ? (((/* implicit */int) ((1727254538U) == (((/* implicit */unsigned int) arr_58 [i_16]))))) : (((/* implicit */int) ((short) 2265307907U))))) / ((-(((/* implicit */int) (unsigned short)8660))))));
                                arr_72 [i_20] [i_20] [i_20] [i_20] [i_20] [i_17] [22] = ((/* implicit */unsigned long long int) 4138573246U);
                            }
                            arr_73 [i_16] [i_17] [i_17] [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)20675))))))));
                            var_44 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-19635))) + (((unsigned int) arr_55 [i_16]))))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */_Bool) (+(-9053628339200234140LL)));
                var_46 = ((/* implicit */signed char) ((((unsigned int) arr_61 [i_16])) == (((/* implicit */unsigned int) arr_58 [i_17]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        for (unsigned short i_22 = 0; i_22 < 25; i_22 += 3) 
        {
            {
                arr_79 [i_21] = ((/* implicit */unsigned int) ((unsigned short) arr_78 [i_21]));
                var_47 = ((/* implicit */int) ((short) ((int) arr_77 [i_21] [i_21] [i_21])));
                /* LoopSeq 2 */
                for (unsigned short i_23 = 0; i_23 < 25; i_23 += 2) 
                {
                    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_76 [i_22])) << (((((/* implicit */int) var_4)) - (56092)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (signed char)-102)) : (1233902076)))))) ? ((-(2712518371727727253ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_77 [i_21] [13U] [i_21])) ? (((/* implicit */int) arr_77 [i_21] [i_22] [i_22])) : (((/* implicit */int) arr_77 [i_21] [i_22] [i_23])))))));
                    var_49 = max((((/* implicit */unsigned int) ((signed char) arr_76 [i_21]))), (((unsigned int) arr_76 [i_23])));
                    arr_82 [i_23] &= ((/* implicit */unsigned long long int) (((-2147483647 - 1)) >= (((((/* implicit */int) arr_74 [i_23])) | (((/* implicit */int) arr_74 [i_23]))))));
                    var_50 -= ((/* implicit */short) ((unsigned char) arr_77 [i_23] [i_22] [(unsigned short)10]));
                }
                for (int i_24 = 2; i_24 < 24; i_24 += 4) 
                {
                    arr_87 [i_21] = ((((((/* implicit */_Bool) arr_83 [i_24 + 1] [i_24 + 1] [i_24 - 2] [i_24 + 1])) ? (var_13) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)32529)), (8807805717819492403LL)))))) - (((/* implicit */unsigned long long int) ((int) arr_77 [i_21] [i_24 + 1] [i_24 + 1]))));
                    var_51 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_85 [i_21] [i_21] [i_24 + 1] [(unsigned short)22])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4611686018427387904ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_75 [22U])) && (((/* implicit */_Bool) var_5)))))))), (((((/* implicit */_Bool) ((unsigned int) arr_80 [i_21] [i_21] [i_21]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_77 [i_21] [i_21] [i_24])))) : (((((/* implicit */_Bool) var_10)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20921)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_25 = 0; i_25 < 25; i_25 += 3) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 25; i_26 += 4) 
                        {
                            {
                                arr_93 [i_21] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_75 [i_25])));
                                var_52 |= ((/* implicit */unsigned short) (-(min((min((130916643U), (((/* implicit */unsigned int) arr_88 [(short)7] [i_26])))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_84 [i_24 + 1] [i_26] [i_26] [i_21])), ((unsigned short)37274))))))));
                                arr_94 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 514892110))) ? (((/* implicit */int) ((12471679180843677911ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_24 + 1] [i_24] [i_24 + 1] [i_24 + 1])))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)13)) > (((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
