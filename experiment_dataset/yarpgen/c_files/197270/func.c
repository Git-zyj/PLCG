/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197270
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [6ULL] = ((/* implicit */short) max((max((2985739000074490482LL), (((/* implicit */long long int) max((arr_1 [i_0] [i_0]), ((short)21049)))))), (((/* implicit */long long int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_4] [i_2] [(unsigned char)8] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1830205792U)) ? (((/* implicit */int) (unsigned short)21418)) : (((/* implicit */int) (short)21053))));
                            var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */int) var_9)), (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)21050)), (-1)))) && (((/* implicit */_Bool) (-(var_10)))))))));
                            var_15 = ((/* implicit */signed char) arr_13 [3LL] [3LL]);
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_10))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */short) (+(((/* implicit */int) (short)-21055))));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                arr_21 [7U] [i_1] [7U] = ((/* implicit */unsigned int) (unsigned char)255);
                var_18 = ((/* implicit */short) max((max((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_7 [i_0] [i_0] [i_1] [i_5]))), (((/* implicit */int) (unsigned char)76))));
            }
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((3658502293984522524ULL) - (arr_9 [i_0] [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) arr_19 [i_7])))))));
                    arr_27 [i_0] [i_6] [i_0] = ((/* implicit */signed char) arr_24 [i_7]);
                    arr_28 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((max((max((((/* implicit */long long int) var_3)), (5777093988695055477LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1089)))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_6] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_6] [i_7]))) != (-2978491422653337149LL)))) : (arr_7 [(unsigned char)0] [i_1] [i_6] [i_7])))))))));
                }
                for (int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                {
                    var_21 = max((((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_6)), (4294967295U)))))), (arr_23 [i_0] [i_1] [i_6]));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_31 [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_6] [i_8]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_1)) >= (var_13))))))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_33 [i_0] [i_1] [i_9]))));
                        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_22 [i_0] [i_0] [i_6] [i_8]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))))) != (((/* implicit */int) var_6))));
                        var_25 *= ((/* implicit */_Bool) (short)-1);
                        arr_36 [(unsigned char)2] [i_6] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */int) ((4294967293U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)11423)))))), ((-(((/* implicit */int) var_12))))));
                    }
                    arr_37 [i_0] [i_6] [(signed char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -642981950)) ? (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_0]))) : (((/* implicit */int) arr_35 [i_8] [i_6] [i_6] [i_1] [i_0]))));
                }
                for (int i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) arr_32 [i_0] [i_1] [i_6] [i_10] [(signed char)18]);
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */int) arr_29 [i_0] [i_0] [i_0])), (((((/* implicit */int) arr_40 [i_0] [i_1] [i_6] [i_10])) / (var_8)))))))));
                    /* LoopSeq 3 */
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        arr_44 [i_6] [i_1] [i_6] [i_1] [(_Bool)1] = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_6])) ? (((/* implicit */int) ((((/* implicit */unsigned int) -930474282)) < (arr_39 [i_10] [i_6])))) : (((((/* implicit */int) ((var_13) > (((/* implicit */unsigned int) var_1))))) << (((arr_4 [i_0] [i_1] [i_6]) + (2022361222))))));
                        arr_45 [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_10] [i_11])) : (((/* implicit */int) (short)21068)))) == (var_1)));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) max(((((+(((/* implicit */int) (unsigned char)71)))) + (1522282979))), (((/* implicit */int) var_11)))))));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)-21068))) / (arr_22 [i_0] [i_1] [i_0] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))))))));
                    }
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        var_30 |= ((/* implicit */unsigned char) var_9);
                        arr_50 [i_6] [(signed char)18] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) 4294967295U)), (arr_15 [i_0] [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-2978491422653337142LL) / (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_49 [i_0] [i_1] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_1] [i_10] [1U])))))))));
                        arr_51 [i_10] [i_6] [i_10] |= ((/* implicit */long long int) arr_5 [i_0] [18U]);
                        var_31 = ((/* implicit */unsigned short) var_3);
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_19 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_0] [7] [i_10] [i_12])))))), (max((var_13), (((/* implicit */unsigned int) arr_17 [i_0] [6ULL] [(_Bool)1] [i_10] [i_1]))))))) ? (max((((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned short) var_12))))), (((var_9) ? (arr_39 [(short)8] [(short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [7ULL]))))))) : (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (209796353U))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_4)))))))));
                        var_34 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21047))) : (arr_31 [i_0] [i_0] [i_0] [i_6]))), (((/* implicit */unsigned int) (~(var_3))))));
                        var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) var_5)) < (621727943U)));
                        arr_54 [i_10] [i_10] &= (short)-21050;
                    }
                }
                var_36 = ((/* implicit */unsigned char) arr_52 [i_0] [i_0]);
            }
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                arr_58 [5U] [(unsigned char)12] [i_14] [i_0] &= ((/* implicit */short) var_1);
                var_37 |= ((/* implicit */short) arr_6 [i_0] [i_0] [i_14]);
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    arr_62 [4] [4] [(short)14] [(short)14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_48 [i_0] [1U] [i_0] [i_15] [(short)8] [i_1])))) & (var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_14])) ? (((/* implicit */int) (short)-21068)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((arr_41 [i_14]) ? (17100620926066515234ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [12])))))) : (((/* implicit */unsigned long long int) var_1))));
                    var_38 = ((/* implicit */long long int) max((((unsigned short) arr_49 [i_0] [i_1] [i_14])), (((/* implicit */unsigned short) ((arr_49 [i_0] [i_0] [i_0]) <= (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))));
                    arr_63 [i_15] [i_14] [i_14] [i_14] [i_1] [i_0] = arr_33 [i_0] [i_0] [(short)8];
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        arr_67 [i_0] [i_1] [i_14] [i_1] = ((/* implicit */short) (~(var_1)));
                        var_39 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                    }
                    for (int i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        var_40 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((3900612809U) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                        var_41 += ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)21055)) != (arr_16 [(short)12] [i_0] [i_0] [i_15] [i_17])))) % (((/* implicit */int) ((((/* implicit */int) (short)4095)) < (var_8))))))), (max((min((((/* implicit */long long int) var_6)), (arr_23 [i_0] [i_1] [i_14]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_0] [(unsigned char)20] [i_14] [i_14] [i_14])) ? (((/* implicit */int) (short)21062)) : (-523123318))))))));
                    }
                    arr_70 [i_0] [i_0] [i_0] [i_0] [i_15] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) max(((short)21050), (((/* implicit */short) arr_65 [i_0] [i_1] [i_14] [i_15] [i_1] [i_1] [i_15])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) & (4785011420917701825ULL)))));
                }
            }
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) var_8))));
        }
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            for (unsigned short i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                for (short i_20 = 0; i_20 < 23; i_20 += 2) 
                {
                    {
                        var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_22 [i_0] [i_18] [i_0] [i_20]), (((/* implicit */long long int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-9003))))));
                        arr_79 [i_18] [i_18] [i_19] [i_20] [i_19] = ((/* implicit */int) arr_29 [i_0] [i_18] [i_20]);
                        arr_80 [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_40 [i_0] [(short)20] [i_19] [i_0])), ((unsigned short)53029)))) / (((/* implicit */int) max((arr_40 [i_0] [i_18] [i_19] [i_18]), (arr_40 [i_0] [i_0] [(unsigned char)21] [i_0]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
    {
        arr_83 [i_21] [i_21] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) arr_78 [i_21] [i_21] [i_21])))))));
        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_43 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [(unsigned char)12]), (((/* implicit */unsigned long long int) 4188581193428915694LL))))) ? (max((var_10), (((/* implicit */unsigned int) (unsigned char)247)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_21] [(short)3] [4] [(short)3] [i_21] [i_21]), (((/* implicit */unsigned short) (signed char)127))))))))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)179))))))))));
    }
    var_45 = ((/* implicit */signed char) var_0);
    var_46 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (var_1)))), (((var_13) * (var_10)))))));
}
