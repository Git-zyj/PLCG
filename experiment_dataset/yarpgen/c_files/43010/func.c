/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43010
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) var_1);
        var_16 = ((/* implicit */short) 2007074001);
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) arr_4 [i_1])) ? (1306279376U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) var_0))))));
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) var_0);
            arr_8 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) < (-1314193028294258606LL))) ? (((/* implicit */int) min((arr_2 [i_2 + 1] [i_2 - 1]), (arr_6 [i_2 - 1] [i_2 + 1])))) : ((+(((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1]))))));
        }
        for (unsigned short i_3 = 4; i_3 < 8; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_19 = ((/* implicit */unsigned char) (-(arr_3 [i_3 + 1] [i_3 - 4])));
                arr_16 [i_1] = ((/* implicit */signed char) (unsigned char)7);
            }
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) >> (((-1591333582) + (1591333590))))))));
        }
        for (int i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -5296919149802370272LL)) | (2304476447823056835ULL))))));
                            arr_29 [11] [11] [i_1] [11] [i_8] [11] [11] = ((/* implicit */long long int) var_6);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_12)), (arr_18 [i_1])))), (min((((/* implicit */long long int) var_10)), (arr_14 [i_8 - 2])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (-5846086026831646283LL)))) && (((/* implicit */_Bool) arr_13 [i_5] [i_6] [i_7]))))) : (((/* implicit */int) min((((/* implicit */short) arr_6 [i_5] [i_5])), (arr_23 [i_5 - 1] [i_1]))))));
                            arr_30 [i_1] [i_7] [i_6] [i_1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_7 [i_5] [i_7] [i_5])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned char)203)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    arr_36 [i_1] [9] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_33 [i_1] [i_1] [i_1] [i_1]);
                    arr_37 [i_10] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) var_14)))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) >= (var_1)))))));
                    var_23 = ((/* implicit */unsigned short) min((((var_2) + (((/* implicit */unsigned long long int) arr_5 [i_5 - 2] [i_5 - 2])))), (((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) var_6))))))));
                    var_24 = ((/* implicit */int) (-(((((/* implicit */_Bool) (~(16142267625886494781ULL)))) ? (((/* implicit */unsigned long long int) ((arr_32 [i_1]) - (((/* implicit */int) (short)8285))))) : (11351323809052594583ULL)))));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_25 = ((unsigned short) ((((/* implicit */_Bool) arr_27 [i_1] [i_5] [i_9 + 1] [i_9 - 1] [(unsigned char)8] [i_5 + 1])) ? (arr_32 [i_5 - 1]) : (((/* implicit */int) arr_27 [i_5 - 2] [i_5 - 2] [i_9] [i_9 - 1] [i_11] [i_5 - 2]))));
                        var_26 = ((/* implicit */unsigned char) max((1309462757), (((/* implicit */int) (unsigned char)105))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 2) 
                    {
                        var_27 &= ((/* implicit */int) ((((((/* implicit */int) arr_40 [i_1] [7U] [i_5 + 1] [i_9 + 1] [i_12])) - (((/* implicit */int) var_14)))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_1] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_10 [i_1] [i_5] [i_5 + 1]))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_12] [(signed char)3] [i_12] [i_12 - 1] [i_12])))))));
                        arr_43 [i_5] [i_10] [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) 4578875688833331132ULL);
                        var_29 |= ((/* implicit */unsigned int) var_7);
                        var_30 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_5]))))) ? ((+(var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_10] [i_9] [i_5 - 1] [i_1]))))) >> ((((-(((((/* implicit */_Bool) var_1)) ? (130816) : (((/* implicit */int) arr_33 [i_5] [i_9] [i_10] [(unsigned short)5])))))) + (130838)))));
                    }
                }
                for (int i_13 = 1; i_13 < 11; i_13 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_48 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) 4578875688833331139ULL))) == (arr_22 [i_5] [i_5 - 1] [i_5 - 2] [i_1] [i_5 - 2])))) >> (((((/* implicit */int) arr_19 [i_1] [i_1])) - (65)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) 4578875688833331139ULL))) == (arr_22 [i_5] [i_5 - 1] [i_5 - 2] [i_1] [i_5 - 2])))) >> (((((((/* implicit */int) arr_19 [i_1] [i_1])) - (65))) + (81))))));
                        var_31 = ((/* implicit */unsigned long long int) 33554400);
                        arr_49 [i_1] [i_14] [i_14] [i_5] [i_9] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_40 [i_1] [i_5] [i_9] [i_13] [i_14])) ^ (min((((/* implicit */int) var_10)), (-1450823361)))));
                        var_32 = ((/* implicit */int) ((unsigned int) min((var_3), ((+(((/* implicit */int) var_12)))))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((unsigned char) (~((~(((/* implicit */int) var_7)))))));
                        var_34 *= ((/* implicit */short) var_2);
                    }
                    for (int i_16 = 3; i_16 < 9; i_16 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) var_11))));
                        var_36 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) arr_51 [i_1] [i_5 - 2] [i_9] [i_13] [i_1] [i_16 - 1] [i_1])), (var_2))) < (((/* implicit */unsigned long long int) var_1)))) ? (((((((/* implicit */int) arr_27 [i_1] [i_1] [i_5] [11LL] [i_13] [i_16])) + (2147483647))) << (((((/* implicit */int) (unsigned short)58259)) - (58259))))) : (((/* implicit */int) arr_28 [i_1] [i_5]))));
                    }
                    var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_45 [i_5 - 1] [i_9 + 1] [i_9]), (arr_45 [i_5 + 1] [i_13] [i_13]))))));
                }
                var_38 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_26 [i_1] [i_1] [i_1] [i_5] [i_9]))) ? (((unsigned long long int) arr_40 [i_9] [i_5] [i_5] [i_5] [i_1])) : (((/* implicit */unsigned long long int) arr_17 [i_5 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_5] [i_9 + 2])) & (((/* implicit */int) arr_38 [i_5] [i_9 + 2])))))));
                var_39 = ((/* implicit */unsigned char) ((unsigned short) (-(arr_5 [i_5] [i_5 + 1]))));
                arr_55 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_6))))) > (var_5)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56564))) : (7707146929760624864ULL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-15190))))));
            }
            for (signed char i_17 = 3; i_17 < 11; i_17 += 2) 
            {
                var_40 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_5 + 1] [i_5 + 1]))) ? (((/* implicit */int) ((arr_21 [i_17 - 1] [i_17 - 2] [i_5 - 2]) <= (((/* implicit */int) var_4))))) : (max((((/* implicit */int) arr_0 [i_5 - 1] [i_5 - 1])), (arr_21 [i_17 - 2] [i_17 - 3] [i_5 + 1])))));
                var_41 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_58 [i_17] [i_5] [i_1])))) % (2485180391967955474LL))), (((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_1))), (((((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) var_9)))))))));
            }
            for (unsigned long long int i_18 = 1; i_18 < 11; i_18 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    var_42 = ((/* implicit */unsigned char) min((-1717361294), (((/* implicit */int) min((((((/* implicit */int) var_0)) > (((/* implicit */int) var_8)))), (arr_38 [i_1] [i_18 + 1]))))));
                    /* LoopSeq 2 */
                    for (short i_20 = 1; i_20 < 9; i_20 += 4) 
                    {
                        var_43 ^= ((/* implicit */signed char) (~((~(((/* implicit */int) min((var_14), (var_14))))))));
                        var_44 = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_67 [i_1] [i_1] [i_18] [i_5] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))))))));
                    }
                    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) 
                    {
                        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) ? (((/* implicit */long long int) (+(arr_50 [i_18 - 1] [i_21] [i_21])))) : (3184606672747546483LL))))));
                        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(-1952593942)))))) ? (((((/* implicit */_Bool) 1450823361)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (unsigned char)78)))) : (((/* implicit */int) (unsigned short)35655))));
                        var_47 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_11))))), ((+(arr_26 [i_21] [i_18 - 1] [i_5 - 2] [i_5] [i_5 + 1])))));
                    }
                    var_48 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_13 [i_5 + 1] [i_18 + 1] [i_18])))) * ((+(((/* implicit */int) arr_4 [i_1]))))));
                    var_49 ^= ((/* implicit */unsigned short) arr_50 [i_1] [i_1] [i_19]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_22 = 2; i_22 < 11; i_22 += 4) 
                    {
                        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_21 [i_1] [i_5] [i_18 - 1])) : (arr_12 [i_18 + 1]))))));
                        var_51 = ((/* implicit */_Bool) ((arr_21 [i_22 - 2] [i_5 - 1] [i_1]) / (((/* implicit */int) (unsigned char)56))));
                    }
                }
                for (unsigned char i_23 = 0; i_23 < 12; i_23 += 2) 
                {
                    var_52 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54310)) / (((/* implicit */int) (short)-21751))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_1] [i_5] [i_5] [i_5 - 1] [i_5] [i_18])))))) : (2304476447823056835ULL)));
                    /* LoopSeq 3 */
                    for (int i_24 = 1; i_24 < 10; i_24 += 2) 
                    {
                        var_53 += ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */int) arr_4 [i_5])) * (((/* implicit */int) (_Bool)0))))) & (min((((/* implicit */unsigned long long int) ((unsigned char) arr_66 [i_5] [i_5] [i_18] [i_23] [i_24 + 2]))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (1140026046829835738ULL)))))));
                        arr_78 [i_1] [i_1] [i_5 - 1] [i_18 + 1] [i_23] [i_24] = ((/* implicit */unsigned short) min((-1952593924), (2147483637)));
                        var_54 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_18 + 1])) ? (arr_14 [i_18 - 1]) : (arr_14 [i_18 - 1])))) || (((/* implicit */_Bool) ((int) arr_14 [i_18 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_25 = 4; i_25 < 9; i_25 += 4) 
                    {
                        var_55 = ((/* implicit */int) arr_1 [i_5 - 1]);
                        arr_81 [i_5] [i_5] [i_18] [i_5] [i_5] |= ((/* implicit */unsigned long long int) var_1);
                    }
                    for (unsigned char i_26 = 0; i_26 < 12; i_26 += 2) 
                    {
                        var_56 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_5 - 1] [i_5 - 2] [i_18 - 1]))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_5 - 2] [i_5 + 1] [i_18 - 1]))) : (max((arr_42 [i_26] [i_5 - 1]), (((/* implicit */int) (unsigned char)56))))));
                        var_57 = ((/* implicit */long long int) var_9);
                        var_58 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (((long long int) 1952593924))));
                    }
                    var_59 &= ((/* implicit */unsigned short) ((int) ((((/* implicit */long long int) arr_71 [i_18] [i_5 - 1] [i_5] [i_5])) + (arr_12 [i_18 - 1]))));
                }
                var_60 = ((/* implicit */unsigned int) min((var_60), (((/* implicit */unsigned int) arr_4 [i_5]))));
                arr_86 [i_1] [i_5] [i_18] = ((/* implicit */unsigned short) (~(max((arr_68 [6U] [6U] [(unsigned char)4] [i_5 - 2] [i_18 + 1]), (((/* implicit */unsigned long long int) var_4))))));
                var_61 = ((unsigned short) arr_79 [i_1]);
            }
        }
    }
    var_62 ^= ((/* implicit */unsigned int) var_12);
    var_63 = ((/* implicit */signed char) var_10);
}
