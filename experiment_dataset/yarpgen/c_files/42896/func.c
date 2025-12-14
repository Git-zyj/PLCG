/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42896
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)224)) && (((/* implicit */_Bool) min((arr_1 [i_0 - 4] [i_0 - 4]), (arr_1 [i_0 + 2] [i_0 - 1]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) ^ (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))) % (((((/* implicit */_Bool) (short)23076)) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_1])) : (((/* implicit */int) (unsigned char)255))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (max((((/* implicit */long long int) var_2)), (var_13))) : (arr_1 [i_0] [i_1])))))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((unsigned short) (short)-25019))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2] [i_1])) ? (((/* implicit */long long int) var_12)) : (var_7)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [2U] [i_1] [i_0 - 4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1]))))) : (arr_1 [i_0 - 4] [i_0 + 2]))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((-1165053195) > (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 3])))), (((((/* implicit */long long int) var_12)) <= (var_13)))));
        }
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */signed char) 4294967276U);
            var_19 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) (_Bool)1)) > (var_2))) && (((/* implicit */_Bool) var_2)))));
            var_20 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((unsigned int) (_Bool)1))) * (var_13))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */unsigned int) var_12))))), (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2])) ? (((/* implicit */unsigned long long int) var_12)) : (16994059256227243067ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_3] [i_2])))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))))))));
                            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [(_Bool)1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (var_10)))) ? (min((((/* implicit */unsigned int) var_9)), (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (arr_8 [i_2] [i_2] [i_3]))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned int) var_4)), (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_18 [i_2 + 2] [i_2 + 1] [i_3] [i_0 + 1] [i_3 + 1])), (arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5]))))));
                        }
                    } 
                } 
            } 
        }
        arr_20 [i_0] [i_0] = max((((((/* implicit */long long int) var_3)) / (((var_11) ? (var_1) : (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (arr_8 [i_0 - 1] [i_0 - 2] [i_0 + 1])))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 - 4] [i_0 + 2] [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 2] [i_0 - 3] [i_0])) : (((/* implicit */int) var_4))))) ? (-2147483621) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_6 = 4; i_6 < 20; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_7 = 3; i_7 < 18; i_7 += 3) 
        {
            var_24 = ((/* implicit */long long int) 0U);
            arr_25 [i_7] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((((/* implicit */short) arr_21 [i_6])), (arr_16 [i_6] [i_7 - 3] [i_7] [i_6])))))) == (6U)));
            arr_26 [i_7 + 4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)6184)) : (((/* implicit */int) arr_5 [i_6 - 4] [i_7 - 1] [i_7]))))));
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (unsigned short i_9 = 3; i_9 < 21; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) arr_23 [i_7 - 1] [i_6 - 3] [i_9 - 1]);
                            var_26 -= ((/* implicit */unsigned long long int) min((arr_13 [i_6] [i_6] [i_6]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8)))) && (((/* implicit */_Bool) ((arr_24 [i_6]) / (126992900)))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            var_27 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 126992912)) ? (arr_22 [i_6 - 2]) : (arr_22 [i_6 - 2]))) : (((/* implicit */unsigned long long int) var_6)));
            var_28 ^= ((/* implicit */signed char) ((((/* implicit */long long int) 3527095982U)) * (((((((/* implicit */_Bool) -584903063496967033LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_6] [i_6]))) : (var_7))) / (arr_1 [i_11] [i_11])))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    {
                        arr_43 [i_11] [i_11] [(unsigned short)15] = ((unsigned short) ((long long int) var_1));
                        var_29 = ((/* implicit */unsigned short) (+(13428261729297663127ULL)));
                        arr_44 [i_6] [i_12] [i_6] [i_6] [i_6] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((13896501202998656124ULL) / (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) arr_1 [20ULL] [i_11])) ? (((/* implicit */int) (short)4032)) : (((/* implicit */int) arr_14 [i_6])))) : (max((((/* implicit */int) (short)4032)), (var_2))))) >= (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))));
                        arr_45 [i_13] [i_11] [i_11] [i_6] = ((/* implicit */short) max((((/* implicit */long long int) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6 - 4] [i_6 - 3] [i_6 - 1])))))), (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) arr_48 [i_6 - 1] [i_6 - 4]);
                            arr_49 [i_6] [i_14] |= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (3527095982U))) * (((/* implicit */unsigned int) arr_24 [i_6]))));
                            arr_50 [i_12] [i_11] = ((/* implicit */unsigned int) arr_14 [i_14]);
                        }
                        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            var_31 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (var_12) : (126992911)))))) ? (((((/* implicit */_Bool) arr_2 [i_15] [i_13] [i_12])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)184))) >= (arr_1 [i_13] [i_11]))))))) : (arr_37 [(unsigned short)8]));
                            var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_7))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_6 + 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_62 [i_16] [i_6] [i_16] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (var_7))) ? (((min((var_13), (((/* implicit */long long int) var_4)))) & (((/* implicit */long long int) arr_19 [i_6] [i_16] [i_6] [i_6 - 3])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_6] [i_16] [i_16] [i_16] [i_17]))) : (var_6)))) ? (((((/* implicit */_Bool) arr_47 [i_18] [i_17] [i_16] [i_16] [i_16] [i_6] [i_6])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) var_0))))))))));
                        var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6 + 1] [i_6 - 4] [i_6 - 2])) ? (((/* implicit */int) var_9)) : (-126992904)))) ? (max((arr_2 [i_6 - 4] [i_6 + 2] [i_6 - 1]), (arr_2 [i_6 + 2] [i_6 - 4] [i_6 + 1]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) -126992888)) * (arr_17 [i_6 - 4])))));
                        arr_63 [17LL] [i_6] [i_16] [i_16] [i_16] [17LL] = ((/* implicit */_Bool) ((unsigned int) ((long long int) arr_1 [i_6 - 4] [i_6 - 3])));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_19 = 4; i_19 < 20; i_19 += 4) /* same iter space */
    {
        arr_67 [i_19] [i_19] = (~(((/* implicit */int) ((_Bool) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
            {
                {
                    var_34 = ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_73 [i_19 - 2] [i_19 - 1] [i_19 - 4]))))) <= (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_0 [i_19 + 2]))))));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_19] [i_19 - 4] [i_19 - 4])) && (((/* implicit */_Bool) var_4))))), (((((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_19] [i_19] [i_19] [i_19])), (var_4)))) << (((arr_54 [i_19]) - (5349276797462345261LL))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_22 = 3; i_22 < 21; i_22 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) var_4);
                        var_37 = ((/* implicit */int) ((((/* implicit */long long int) ((min((((/* implicit */int) var_5)), (arr_19 [6] [i_20] [i_21] [i_22]))) & (((/* implicit */int) ((var_5) || ((_Bool)0))))))) != (var_0)));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_66 [i_19 - 4])) <= (((/* implicit */int) arr_66 [i_19 - 3])))))) : (((var_6) * (((/* implicit */unsigned int) arr_19 [i_19] [i_20] [i_21] [i_22]))))));
                        var_39 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_66 [i_19 - 4])) ? (min((5788253680463961240ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((var_3) * (((/* implicit */unsigned int) var_12)))))))));
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((int) min((var_0), (arr_1 [i_19 + 2] [i_19])))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        arr_78 [i_23] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_6))) == (((/* implicit */int) ((((/* implicit */long long int) arr_76 [i_23])) < (var_14))))));
        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_0))), (((/* implicit */long long int) ((arr_76 [i_23]) - (arr_76 [i_23])))))))));
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((min((arr_77 [i_23] [i_23]), (arr_77 [i_23] [i_23]))) == (((((/* implicit */_Bool) ((var_10) - (var_10)))) ? (((/* implicit */int) var_4)) : (max((arr_77 [i_23] [i_23]), (((/* implicit */int) (short)4030)))))))))));
    }
}
