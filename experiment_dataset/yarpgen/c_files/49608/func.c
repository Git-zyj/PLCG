/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49608
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 268431360U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)10)), (var_4)))))))) ? (((/* implicit */int) ((signed char) (unsigned short)10398))) : (((/* implicit */int) ((signed char) 2925881181U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_0])) ? (4026535936U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0])))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((/* implicit */unsigned int) (short)-2)), (((((/* implicit */_Bool) arr_3 [i_1 - 3] [2ULL] [i_1 - 2])) ? (4026535936U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [18ULL] [i_1 - 3]))))))))));
                    arr_8 [i_2] [(unsigned char)13] [i_0] = ((/* implicit */unsigned char) var_2);
                    arr_9 [i_0] [i_0] [(signed char)8] [i_0] = ((/* implicit */unsigned short) ((short) arr_6 [(unsigned char)14] [i_0]));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        {
                            arr_20 [i_3] [i_4] [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) arr_15 [i_5] [i_5] [i_5]);
                            arr_21 [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-119))));
                            arr_22 [i_5] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) var_18);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_8 = 4; i_8 < 13; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        {
                            arr_29 [(unsigned char)7] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)8111))));
                            arr_30 [i_3] [i_3] [i_5] [i_8] [(signed char)7] [i_9] = ((/* implicit */short) ((((/* implicit */int) (short)10521)) << (((arr_18 [(short)9] [i_4] [i_4] [i_4]) - (1211194537U)))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (+(arr_18 [i_9] [14] [2U] [14]))))));
                            var_22 = 5ULL;
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) arr_4 [i_3] [i_5]);
            }
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) arr_16 [i_3] [i_3] [i_4] [i_4])) * (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_4])))))));
        }
        var_25 = ((/* implicit */short) max((((((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) << (((2357697837U) - (2357697837U))))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-108)) || (((/* implicit */_Bool) (signed char)112)))))));
    }
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268431360U)) ? (((/* implicit */int) var_14)) : (2147483647)))) ? (((((/* implicit */int) arr_15 [6LL] [i_10] [6LL])) & (((/* implicit */int) var_8)))) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */int) var_12)), (arr_27 [i_10] [i_10] [(unsigned char)14] [i_10] [8U]))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-119))))), (arr_4 [i_10] [(short)20]))))));
        var_27 = ((/* implicit */unsigned long long int) (unsigned short)0);
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) 0)) == (-3685201568872244046LL)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-18238)))))));
                        arr_42 [i_10] [i_11] [i_12] = ((/* implicit */short) ((int) (+(((/* implicit */int) (signed char)112)))));
                        arr_43 [i_10] [i_11] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)23708)))))) + ((+(268431359U)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_10] [i_10] [i_13] [i_10])))))))) : (0U));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) 4294967286U);
            var_30 ^= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_10] [i_11]))))), ((~(((((/* implicit */_Bool) arr_14 [i_10] [i_11])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-20))))))));
            arr_44 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) ((short) arr_14 [i_10] [i_11])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((!(((/* implicit */_Bool) var_5)))))))) : ((+(357193586U)))));
        }
        for (int i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            var_31 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_16 [i_10] [i_10] [(unsigned char)8] [i_14])) ? (((/* implicit */int) arr_16 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_16 [i_10] [i_14] [i_10] [i_14])))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)19)), (arr_16 [i_10] [i_14] [(unsigned short)7] [i_14]))))));
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) 10400516472313473159ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_15] [i_14] [i_15]))) : (0ULL))))))))));
                arr_51 [i_10] = ((/* implicit */unsigned char) (short)-23717);
                var_33 |= ((/* implicit */unsigned int) var_5);
                arr_52 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (((+(0ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_15] [i_14])))));
            }
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                arr_57 [8LL] [8LL] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), ((unsigned short)8137)))) ? (((((/* implicit */_Bool) var_17)) ? (4920096447302809385ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60520)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) 4294967295U))));
                /* LoopSeq 2 */
                for (unsigned int i_17 = 1; i_17 < 12; i_17 += 1) 
                {
                    var_34 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_58 [i_10] [i_10] [(unsigned char)7])) < (((/* implicit */int) arr_56 [i_16] [i_17 + 1] [i_16]))))), (arr_12 [i_16] [i_16])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_18 = 1; i_18 < 11; i_18 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (+(var_11))))));
                        var_36 = ((/* implicit */unsigned long long int) (+(arr_60 [i_10] [i_18 + 2] [i_14] [i_17 + 1] [i_10])));
                    }
                    for (long long int i_19 = 1; i_19 < 12; i_19 += 2) 
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_10])) ? (((((/* implicit */_Bool) arr_16 [i_17 + 1] [i_17] [i_17] [i_17])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41983))) & (3834562314845791275ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [i_19] [i_14] [i_19 + 1] [i_17] [(unsigned char)11] [(unsigned char)11]), (((/* implicit */unsigned char) (signed char)-20))))))));
                        arr_66 [i_10] [i_10] [i_16] [i_17] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((signed char) (signed char)116))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10] [i_16] [i_17 - 1] [i_19 - 1]))) : (6U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_14] [i_14] [i_16]))) >= (var_11)))) : (((/* implicit */int) (_Bool)0)))))));
                        arr_67 [i_10] [i_10] [(signed char)3] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) var_4);
                    }
                    arr_68 [i_17] [(short)8] [i_17] [11U] = (unsigned short)0;
                }
                for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
                {
                    var_38 = (-(((((/* implicit */int) arr_25 [i_14] [i_14] [i_14])) & (((/* implicit */int) ((_Bool) arr_33 [i_16] [i_20]))))));
                    arr_73 [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [(signed char)11] [i_14] [i_14] [11ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned short)65533))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_23 [(signed char)4] [i_16] [i_14] [i_20]) : (arr_38 [i_10] [i_10] [i_10] [i_10])))))) : (18446744073709551615ULL)));
                }
                arr_74 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7664))) : (796805601U)));
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (+((-(arr_60 [i_10] [i_10] [(_Bool)1] [i_10] [i_10]))))))));
            }
            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_10] [4U] [i_10] [i_14] [i_10]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 1070603327))) : ((+(3834562314845791275ULL)))));
            arr_75 [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_10] [(signed char)7] [i_10] [i_14])) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)26561)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))) : (arr_60 [i_10] [i_10] [i_10] [i_14] [i_14])))))) : (12540895795092127286ULL)));
        }
        var_42 = ((/* implicit */short) (unsigned char)213);
    }
    var_43 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) min((var_12), (((/* implicit */unsigned char) var_10))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) ^ (var_11)))))));
    var_44 = ((/* implicit */signed char) var_7);
    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (~(14612181758863760340ULL))))));
}
