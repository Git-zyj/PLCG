/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36144
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((11558639361730167679ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227)))))) + (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((16383U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)960))))) ? (((/* implicit */int) var_11)) : (arr_2 [i_0 - 1] [i_0 - 2])))) - (max((arr_1 [i_2]), (((/* implicit */unsigned int) arr_6 [i_0 - 2] [i_0]))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (short)10034)) * (((/* implicit */int) (_Bool)1)))))));
                    var_16 = var_11;
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) arr_1 [(unsigned short)17])) + (var_2)))))) ? (((((_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_10 [0LL]))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((min((var_2), (((/* implicit */unsigned long long int) var_12)))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8604375004184460718LL)) ? (33554431) : (((/* implicit */int) (_Bool)1))))) + (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))))))))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((unsigned long long int) ((arr_2 [i_3] [i_3]) + (((/* implicit */int) var_0))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((long long int) min((arr_1 [i_3]), (arr_1 [i_3]))))));
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        var_21 += ((/* implicit */signed char) ((unsigned char) min(((-(var_9))), (((((/* implicit */_Bool) arr_11 [i_6] [i_5])) ? (((/* implicit */int) arr_22 [i_4] [i_5] [i_6] [(unsigned char)12])) : (((/* implicit */int) var_8)))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_19 [i_7] [i_6] [i_4])))), (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_23 [(unsigned char)17] [(unsigned char)17]))))))))))));
                        arr_24 [i_5] [i_6] = ((/* implicit */signed char) min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0))), (((/* implicit */unsigned short) ((min((((/* implicit */int) var_8)), (arr_18 [i_4]))) < ((+(((/* implicit */int) arr_22 [i_7] [i_5] [i_5] [i_4])))))))));
                    }
                } 
            } 
        } 
        arr_25 [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) (_Bool)1))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65534))))), (((unsigned int) var_6))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned char) (+(min((var_9), (((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_8]))))));
        /* LoopNest 3 */
        for (signed char i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_8] [i_8] [i_8]))))))) ? (min((((/* implicit */unsigned long long int) (~(arr_13 [i_9])))), (((((/* implicit */_Bool) arr_22 [i_8] [i_9] [i_10] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_20 [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) ((arr_37 [i_9 - 1]) - (((/* implicit */int) arr_21 [i_8] [i_9 + 1] [i_9 - 1] [i_11]))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_11])) || (arr_3 [i_10] [i_8] [i_9 + 1]))))));
                            arr_41 [i_8] [i_9 + 2] [i_9 + 2] [i_11] [i_12] = ((/* implicit */unsigned short) ((((((arr_1 [i_12]) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9 + 1] [i_9 + 2]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_1 [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) <= (((arr_20 [i_11] [13ULL] [i_10] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))))));
                        }
                        for (long long int i_13 = 1; i_13 < 15; i_13 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (((+(((((/* implicit */_Bool) arr_37 [(_Bool)1])) ? (((/* implicit */int) arr_42 [i_13 + 1] [i_9 + 3] [i_10] [i_9 + 3] [i_8])) : (((/* implicit */int) (unsigned short)10)))))) | (((/* implicit */int) arr_34 [i_8] [i_9] [i_10] [i_13 - 1])))))));
                            arr_44 [i_8] [i_10] [i_10] [i_8] [i_8] = ((/* implicit */short) var_6);
                            arr_45 [i_8] [i_8] [i_8] [0] [0] [i_8] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_20 [i_9 + 3] [i_8] [i_13 - 1] [13LL])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_9] [i_8]))))) : (min((((/* implicit */long long int) arr_19 [i_9] [(_Bool)1] [i_13])), (arr_16 [23LL] [i_11]))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13954)) % (((/* implicit */int) (short)9818))))) ? (arr_28 [i_13] [i_13]) : (((/* implicit */int) var_12)))))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_9 + 3])) ? (arr_1 [i_9 + 4]) : (arr_1 [i_9 + 1])))))));
                        }
                    }
                } 
            } 
        } 
        arr_46 [i_8] = ((/* implicit */signed char) var_1);
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            for (short i_15 = 4; i_15 < 13; i_15 += 2) 
            {
                {
                    arr_53 [i_15] [i_8] [i_14] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_37 [i_8])))) * (arr_15 [21LL])));
                    arr_54 [i_8] [i_14] [i_14] [i_15 + 3] = ((/* implicit */unsigned int) ((unsigned short) ((arr_18 [i_15 - 2]) != (arr_18 [i_15 + 3]))));
                    var_27 *= ((/* implicit */signed char) min((((/* implicit */int) ((arr_16 [i_15 - 4] [i_15 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_14] [i_14]))))) ? (min((arr_51 [i_8] [i_14] [i_15 + 3] [i_15 - 1]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) 1636762770)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_16 = 0; i_16 < 22; i_16 += 1) 
    {
        for (unsigned char i_17 = 2; i_17 < 18; i_17 += 3) 
        {
            {
                var_28 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [i_17 + 4])) ? (arr_13 [i_17 + 4]) : (arr_13 [i_17 - 1]))) <= ((-(arr_13 [i_17 + 4])))));
                arr_61 [i_16] = ((/* implicit */unsigned char) var_3);
                /* LoopSeq 3 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                    arr_64 [i_16] [i_17] [i_16] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 0U)), (((arr_15 [i_16]) << (((/* implicit */int) (unsigned short)0))))));
                    arr_65 [i_16] [i_17 + 3] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_17 [i_16]), (arr_17 [i_17 + 3]))))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    arr_69 [i_16] [i_16] [8] = ((/* implicit */_Bool) ((min((((/* implicit */int) var_4)), ((-(((/* implicit */int) var_13)))))) - (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (signed char i_21 = 2; i_21 < 19; i_21 += 1) 
                        {
                            {
                                arr_75 [i_16] [i_16] [i_16] [9ULL] [i_16] = ((/* implicit */unsigned int) ((short) var_8));
                                arr_76 [i_16] [i_16] [i_19] [i_20] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned short) var_5))) & (min((-1136626231), (((/* implicit */int) (unsigned char)112)))))) | ((+(((/* implicit */int) ((_Bool) var_0)))))));
                                var_30 ^= ((/* implicit */unsigned int) (!(arr_60 [20LL] [20LL] [i_19])));
                                arr_77 [i_20] [(_Bool)1] [i_19] [i_16] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (short)-10035)) - (((/* implicit */int) var_8)))))) : (((/* implicit */int) (unsigned short)21883))));
                                arr_78 [i_16] [i_20] [i_16] [i_16] [i_16] = ((/* implicit */_Bool) ((unsigned long long int) max((min((arr_21 [(signed char)14] [(signed char)14] [i_20] [(unsigned char)10]), (((/* implicit */signed char) arr_60 [i_16] [i_16] [i_16])))), (((/* implicit */signed char) ((_Bool) 4095U))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    arr_82 [i_16] = ((/* implicit */int) (+(4095U)));
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 22; i_23 += 3) 
                    {
                        for (unsigned char i_24 = 0; i_24 < 22; i_24 += 4) 
                        {
                            {
                                arr_88 [i_16] [i_16] = ((arr_63 [i_17] [(_Bool)1] [i_16]) - (arr_63 [i_16] [i_16] [i_16]));
                                arr_89 [11LL] [i_17] [i_23] [i_16] [2LL] [i_22] [i_22] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_79 [i_16] [i_17 - 1]))));
                                arr_90 [i_16] [i_17] [i_17] [i_22] [i_16] [i_23] [(signed char)6] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_73 [i_16] [i_17] [i_22] [i_23] [i_16] [i_24] [i_24]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_16] [i_16])) && (((/* implicit */_Bool) arr_18 [i_16]))))) : (((/* implicit */int) ((short) 10468358724452586070ULL))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_25 = 1; i_25 < 21; i_25 += 1) 
                    {
                        arr_93 [i_16] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_4))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_58 [i_16] [(unsigned short)16])) : (((/* implicit */int) arr_70 [i_16] [i_16]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_25 + 1] [i_17 + 1]))) : (arr_20 [i_17 + 2] [(short)18] [i_25 + 1] [(unsigned short)10])));
                        arr_94 [i_16] [i_17 + 1] = ((/* implicit */signed char) arr_18 [i_16]);
                        arr_95 [i_16] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)38644))));
                        arr_96 [i_16] [(_Bool)1] [i_16] [i_22] [i_25 + 1] = ((/* implicit */int) ((unsigned long long int) arr_80 [i_16] [i_17 - 2] [i_16]));
                    }
                    for (unsigned int i_26 = 0; i_26 < 22; i_26 += 4) 
                    {
                        var_32 = ((((/* implicit */_Bool) var_12)) ? (arr_92 [(unsigned short)17] [i_16] [i_17 + 1] [i_26] [i_17] [i_26]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551606ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))));
                        arr_100 [i_16] [i_17 - 1] [i_16] [i_22] [i_17 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (short)8504))))) | (((/* implicit */int) (_Bool)1))));
                    }
                }
                arr_101 [i_16] [i_16] [(short)0] &= ((/* implicit */_Bool) ((long long int) min((var_1), (((/* implicit */unsigned short) arr_12 [i_16])))));
            }
        } 
    } 
}
