/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4738
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
    var_14 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */_Bool) var_4);
        var_15 = ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (min((arr_0 [i_0] [i_0]), (var_4))))))) * (max((((/* implicit */long long int) var_12)), (var_11))));
    }
    for (short i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_5 [i_1]);
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_8 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) (short)-21976)), (var_8)))), (((arr_11 [i_3] [i_2] [i_1]) ? (((/* implicit */long long int) 3)) : ((-9223372036854775807LL - 1LL))))))) : (((((/* implicit */_Bool) (short)21975)) ? (((/* implicit */unsigned long long int) max((2333178599U), (129024U)))) : (((575897802350002176ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))))));
                arr_13 [i_1] = ((/* implicit */long long int) min((3), ((-(((/* implicit */int) var_1))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-21976)))))))))));
                arr_14 [i_2] [i_2] &= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)21975))))) : ((+(var_5))))));
            }
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_5))));
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            arr_17 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), ((+(15178633841552098027ULL)))))) ? (-4) : (((/* implicit */int) (short)-21965))));
            var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_9 [(unsigned short)12] [i_1 + 1]) & (arr_9 [i_4] [i_1 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (3268110232157453570ULL)))));
            arr_18 [i_1 - 1] [i_1 - 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1] [i_4] [i_1 - 3])) * (-10)));
        }
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) 
        {
            for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_19 [(unsigned char)5])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-21987))))) : ((+(arr_15 [i_1]))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (((int) arr_23 [i_5 - 2] [11LL]))))))))));
                                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_5] [i_7] [i_8])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3080244017U)) ? (((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) : (3268110232157453589ULL))) : (((/* implicit */unsigned long long int) var_9)))))));
                                var_22 -= var_0;
                                arr_28 [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44901)) - (((/* implicit */int) (unsigned char)1))))), (((10065516510608931468ULL) - (((/* implicit */unsigned long long int) arr_10 [i_1 + 1] [i_5 + 1]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 15178633841552098051ULL)) ? (arr_19 [i_1 + 1]) : (15178633841552098041ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_6 - 1] [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_5 - 2] [i_6 + 1]))) : (var_13))))));
                    arr_29 [i_6] [i_5] [i_1] [i_1] = var_0;
                    arr_30 [i_1 + 2] [i_5] [i_1 + 2] = ((/* implicit */_Bool) var_0);
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-21987)) ? (((/* implicit */unsigned long long int) 663754191870203684LL)) : (3268110232157453574ULL))), (arr_19 [i_9])));
        var_25 = ((/* implicit */int) max((((min((arr_8 [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_32 [i_9])))) - (((/* implicit */unsigned long long int) (-(1221453559U)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((3335036942U) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            var_26 = ((/* implicit */unsigned int) (unsigned char)148);
            arr_39 [i_10] [i_11] = ((/* implicit */unsigned int) (((-(15))) >= (((/* implicit */int) arr_38 [i_10]))));
        }
        for (int i_12 = 4; i_12 < 16; i_12 += 2) 
        {
            arr_44 [i_10] = ((/* implicit */long long int) ((var_10) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4098102302U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)20449))))) : (var_13)));
            /* LoopSeq 3 */
            for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                arr_47 [i_10] [i_12 - 1] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) var_13)) : (-2301727387298726630LL)));
                var_27 &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_33 [i_10] [i_13]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1023962204)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) var_12)))))));
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65520)) << (((((long long int) var_11)) - (8886832255030783869LL))))))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8119952833571374518LL)) || (((/* implicit */_Bool) -2253547964605768166LL))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 2; i_15 < 13; i_15 += 4) 
                {
                    var_30 = ((/* implicit */short) ((int) (short)27821));
                    var_31 = ((/* implicit */int) (~(var_5)));
                    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_46 [i_15 + 3] [i_15] [i_12 + 1]))));
                    arr_54 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) (-(((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                arr_55 [i_10] [i_10] [i_10] = ((/* implicit */long long int) arr_41 [i_14]);
                arr_56 [i_10] [i_10] [(_Bool)1] [i_14] = ((/* implicit */unsigned int) arr_45 [i_12]);
            }
            for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                arr_60 [i_10] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    arr_64 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_53 [i_10] [i_12 - 3] [i_16] [i_17])) : (((/* implicit */int) arr_63 [i_10] [i_10] [(_Bool)1]))))));
                    arr_65 [i_10] [i_10] [i_16] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) arr_34 [i_17]);
                    /* LoopSeq 4 */
                    for (short i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_17] [i_12] [i_16])) || (((/* implicit */_Bool) arr_48 [i_12 - 2] [i_12 - 2]))));
                        arr_68 [i_10] [i_10] [i_10] [i_18] [i_10] = ((/* implicit */int) var_2);
                        var_34 ^= ((/* implicit */short) ((int) (~(((/* implicit */int) (_Bool)1)))));
                        arr_69 [i_10] [i_18] [i_18] [i_18] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_10] [i_12])) >> (((/* implicit */int) var_6))))) >= (arr_51 [i_12 - 3] [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 2] [i_12 - 1])));
                        arr_70 [i_10] [2U] [i_16] [i_12] [(unsigned char)0] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(3768583453504709230LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (arr_66 [i_12 - 1] [5LL] [(unsigned char)13])));
                    }
                    for (unsigned char i_19 = 0; i_19 < 17; i_19 += 4) 
                    {
                        var_35 -= ((/* implicit */unsigned int) var_7);
                        var_36 ^= ((/* implicit */unsigned char) 6602204946490322638LL);
                        arr_74 [i_10] [i_12] [i_16] [i_17] [i_19] = ((/* implicit */short) (unsigned short)48244);
                        var_37 = arr_51 [i_12 - 4] [i_10] [i_16] [(unsigned char)3] [i_19] [i_12];
                        var_38 &= ((/* implicit */unsigned long long int) ((arr_72 [i_12 - 1] [i_12 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_62 [i_10] [i_10] [i_10] [i_10] [i_10]) || (((/* implicit */_Bool) var_3))))))));
                    }
                    for (long long int i_20 = 1; i_20 < 16; i_20 += 4) 
                    {
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (+(3268110232157453589ULL))))));
                        arr_79 [i_10] [i_10] [i_16] [i_17] [i_20] [i_20] = (-(((/* implicit */int) arr_53 [i_12 - 3] [i_12] [i_16] [i_20 - 1])));
                        arr_80 [(unsigned short)10] = ((/* implicit */unsigned char) (+((~(arr_35 [i_12])))));
                        var_40 ^= ((((/* implicit */_Bool) (short)-29549)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_42 [i_10] [i_10] [i_12 - 2]));
                        arr_81 [i_10] = ((/* implicit */long long int) (-(arr_73 [i_20 + 1] [i_12] [i_12 - 3] [i_12 - 3] [i_12 - 3])));
                    }
                    for (short i_21 = 1; i_21 < 16; i_21 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned int) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_77 [i_12 - 4] [i_12 + 1] [i_12 + 1] [i_21 - 1] [i_21] [i_21 + 1] [i_12 + 1])));
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_21 + 1] [i_12 - 2] [i_16]))) | (var_7)));
                    }
                    var_43 = ((/* implicit */long long int) ((((var_10) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_10)))) < (((/* implicit */int) arr_36 [i_12 - 3]))));
                    var_44 = ((/* implicit */unsigned int) arr_48 [i_12] [i_17]);
                }
                for (long long int i_22 = 0; i_22 < 17; i_22 += 4) 
                {
                    var_45 ^= ((/* implicit */unsigned int) var_6);
                    /* LoopSeq 1 */
                    for (long long int i_23 = 0; i_23 < 17; i_23 += 1) 
                    {
                        arr_91 [i_10] [i_12] [i_16] [i_22] [i_12 + 1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2253547964605768166LL)) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29927))) * (arr_66 [i_10] [i_10] [i_10])))));
                        arr_92 [i_10] [i_10] [i_10] [i_16] [i_22] [13ULL] [i_23] = ((/* implicit */_Bool) var_5);
                    }
                }
                var_46 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_45 [i_12 + 1]))));
            }
            arr_93 [i_10] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)238))))) ? (((/* implicit */int) arr_59 [i_10] [i_10] [i_12 - 4])) : ((+(((/* implicit */int) var_2))))));
        }
        var_47 ^= ((/* implicit */int) ((arr_35 [i_10]) / (((((/* implicit */_Bool) arr_41 [i_10])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        arr_94 [i_10] = ((/* implicit */int) (+(3013835809923085768LL)));
        arr_95 [(short)0] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_10] [i_10] [1ULL] [i_10])) ? (((/* implicit */int) arr_62 [i_10] [(unsigned short)4] [(unsigned short)4] [i_10] [(unsigned short)4])) : (((/* implicit */int) arr_83 [i_10] [i_10] [i_10] [i_10] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_52 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
    }
    var_48 = ((/* implicit */int) (~(((((/* implicit */long long int) (+(0U)))) / (((((/* implicit */_Bool) var_0)) ? (-4961232356765433154LL) : (((/* implicit */long long int) var_5))))))));
}
