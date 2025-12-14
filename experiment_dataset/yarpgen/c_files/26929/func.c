/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26929
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0 + 1] [i_1] [(unsigned char)5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1]))))), (((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_1 - 1] [i_1 + 1])) ? (var_15) : (((/* implicit */unsigned int) var_11))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (_Bool)1))))))), (((((((/* implicit */_Bool) 1016829758813676101ULL)) ? (arr_0 [i_0] [5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] [(short)18] [i_4]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0 - 1] [12] [i_1 + 1] [i_4 + 1]))))))))));
                                var_21 += ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)26031)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_0] [(unsigned char)23] [i_0] [i_0 + 3]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_3)), (var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_3 + 2])))) : (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)22)), (arr_10 [i_0 + 3] [i_1] [(signed char)10] [i_3] [i_4 - 3])))) ? (9769079329051163218ULL) : (((/* implicit */unsigned long long int) ((int) var_9)))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)26019)) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) -337885720))))) ^ (min((337885720), (((/* implicit */int) var_17))))))) : (arr_4 [i_4])));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (signed char)46))));
                    arr_14 [21U] [i_1 - 1] [i_1] [0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_1 + 1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28282))) : (arr_9 [i_0 + 2] [i_1 + 1] [22ULL] [0ULL]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) min((((/* implicit */int) ((short) (-(var_16))))), (var_11)));
        var_25 &= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_0)) ? (var_18) : (((/* implicit */unsigned long long int) var_15)))))) > (((/* implicit */unsigned long long int) (-(4294967295U))))));
    }
    for (signed char i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5]))) == (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (((((/* implicit */_Bool) var_18)) ? (arr_0 [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_5))))))));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 22; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_6] [i_5] [i_5] [i_8])) ? (arr_23 [i_6] [i_5]) : (1016829758813676101ULL))) > (((/* implicit */unsigned long long int) arr_22 [i_5] [i_5 - 1])))))) == (min((arr_21 [i_5] [i_6 + 1] [i_6 + 1] [i_6]), (arr_21 [i_5] [i_6 - 2] [i_5] [18U])))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_17 [i_5 - 1] [(signed char)6])) : (arr_27 [i_8])))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (9223372036854775807LL)))) ? (var_11) : (((/* implicit */int) (_Bool)1))))))))));
                        /* LoopSeq 1 */
                        for (int i_9 = 4; i_9 < 23; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) arr_26 [i_7] [11U]))));
                            arr_30 [i_9] |= ((/* implicit */int) min((max((min((((/* implicit */unsigned int) var_11)), (4294967295U))), (((/* implicit */unsigned int) ((int) arr_20 [i_9] [i_8] [0ULL]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (max((var_7), (((/* implicit */unsigned long long int) var_0)))))))));
                            var_29 += ((/* implicit */signed char) 1383593993);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 23; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) 2147483647)) : (var_0)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-26397)), (var_10)))) : ((-(arr_3 [21ULL] [i_12]))))) % (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned long long int) (-(var_16)))) : (arr_9 [i_5 - 1] [8] [i_11] [i_12])))));
                        var_31 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_5] [i_10] [i_5 + 3] [i_12] [i_11] [i_10 + 1] [i_5 + 3]))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(4294967295U))))))))));
                    }
                    for (int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_32 = ((/* implicit */int) max((var_32), ((-(var_10)))));
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) 2147483647))));
                    }
                    var_34 = (-((((+(var_18))) * (((/* implicit */unsigned long long int) (+(var_15)))))));
                    var_35 = ((/* implicit */unsigned long long int) min(((~(arr_34 [i_5] [i_5] [i_10] [i_11]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_11] [(_Bool)1] [i_10] [i_10] [5ULL] [(unsigned char)18] [(_Bool)1])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [17U] [i_11] [17U] [17U] [i_5 + 3]))))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 2; i_14 < 23; i_14 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_29 [i_5] [i_5 + 2] [i_5] [i_5 - 1] [20U] [i_5 + 2] [i_5 - 1])))) ? (min((arr_0 [i_5 + 1] [21LL]), (var_7))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_34 [i_5 + 2] [i_5] [(unsigned char)7] [i_14])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_5] [i_5] [(short)12] [(short)1]))))))))));
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            var_37 ^= ((/* implicit */int) max((min((min((arr_23 [(signed char)4] [(_Bool)1]), (arr_46 [(_Bool)0] [(signed char)2] [i_11] [(unsigned char)16] [i_14] [(unsigned char)12] [i_15]))), (max((((/* implicit */unsigned long long int) arr_7 [i_15] [i_14 - 1] [i_11])), (var_18))))), (((/* implicit */unsigned long long int) arr_40 [18] [i_11] [i_11] [i_10 + 1] [18]))));
                            arr_47 [i_5] [i_5] [i_11] [7] [i_5] [i_5] [i_10 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_15 [(signed char)18]))) ? (262143LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-99)))))) ? (((int) arr_9 [i_5] [13ULL] [i_14] [i_15])) : (-1564133181));
                            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) var_16))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 4) 
                        {
                            arr_52 [i_16] [i_16] [(signed char)10] [i_5] [i_11] [(short)16] [i_5 + 2] = ((/* implicit */int) var_7);
                            var_39 ^= ((((/* implicit */unsigned long long int) arr_26 [6LL] [i_5])) + (((((/* implicit */_Bool) var_10)) ? (arr_31 [14LL] [10ULL] [i_16]) : (((/* implicit */unsigned long long int) arr_27 [i_11])))));
                            arr_53 [i_5] [(unsigned char)8] [(short)13] [i_11] [i_10] [i_5] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-26397))))) ? (((/* implicit */long long int) var_16)) : (((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_5] [i_5]))) + (var_2))));
                            arr_54 [i_5] [i_5] [i_11] [21] [3ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_5] [i_10] [i_10 - 1] [(_Bool)1] [(unsigned short)23]))))) ? ((-(((/* implicit */int) arr_5 [i_10] [i_16])))) : (((/* implicit */int) arr_48 [i_5] [i_16] [0ULL] [i_14 - 1] [i_16] [i_5]))));
                        }
                        var_40 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(2147483647))), ((~(((/* implicit */int) arr_10 [i_5] [i_10] [2] [i_14] [i_10 - 1]))))))) ? (((((/* implicit */_Bool) arr_51 [i_5] [i_11] [0ULL] [i_14 - 2] [5U])) ? (min((arr_27 [i_5]), (((/* implicit */long long int) -509813041)))) : (((/* implicit */long long int) arr_16 [21ULL])))) : (max((var_5), (((/* implicit */long long int) (~(298503691U))))))));
                    }
                    for (unsigned short i_17 = 1; i_17 < 23; i_17 += 3) 
                    {
                        var_41 = ((/* implicit */short) ((unsigned long long int) var_7));
                        arr_58 [(signed char)14] [i_11] [i_10] [(signed char)14] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_25 [i_17] [i_17] [(signed char)18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)46))))) : (arr_0 [i_10 + 1] [i_17 - 1])))));
                    }
                    for (int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_44 [i_5 + 1] [i_10 + 1] [(short)16])))))))));
                        arr_62 [(_Bool)1] [i_5] [i_10] [i_5] [i_5] = ((/* implicit */short) (+(min((((int) var_6)), ((~(((/* implicit */int) var_3))))))));
                        arr_63 [(short)5] [i_5] [(short)5] [(short)17] [i_10] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) arr_44 [6U] [i_10] [i_18])) ? (arr_26 [i_11] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [22U]))))), (((/* implicit */long long int) ((unsigned int) arr_1 [i_11])))))));
                        arr_64 [i_5 + 3] [i_5 + 3] [i_11] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_44 [(unsigned char)22] [(signed char)0] [i_11]))))), (min((arr_0 [i_11] [i_18]), (((/* implicit */unsigned long long int) 1073741824)))))))));
                    }
                }
            } 
        } 
    }
    for (int i_19 = 1; i_19 < 18; i_19 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_20 = 1; i_20 < 17; i_20 += 4) /* same iter space */
        {
            arr_69 [i_19 - 1] [15U] [i_19] = (i_19 % 2 == zero) ? (((/* implicit */short) min((((unsigned long long int) ((((/* implicit */int) arr_13 [(unsigned char)5] [(short)8] [i_19] [i_19] [i_19] [i_19] [i_19 - 1])) << (((arr_22 [i_19] [i_20]) - (123113636)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_55 [i_19]) ^ (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */int) arr_6 [i_19] [i_19] [i_20] [i_19])) << (((((/* implicit */int) var_17)) - (20181))))) : (-1067886975))))))) : (((/* implicit */short) min((((unsigned long long int) ((((/* implicit */int) arr_13 [(unsigned char)5] [(short)8] [i_19] [i_19] [i_19] [i_19] [i_19 - 1])) << (((((arr_22 [i_19] [i_20]) - (123113636))) - (66933623)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_55 [i_19]) ^ (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */int) arr_6 [i_19] [i_19] [i_20] [i_19])) << (((((/* implicit */int) var_17)) - (20181))))) : (-1067886975)))))));
            var_43 *= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (!((_Bool)1))))))));
            var_44 |= ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */_Bool) var_19)) && ((!(((/* implicit */_Bool) var_16))))))));
        }
        for (unsigned char i_21 = 1; i_21 < 17; i_21 += 4) /* same iter space */
        {
            arr_72 [i_19 - 1] [i_19] = (~(max((((/* implicit */int) (unsigned char)215)), (var_8))));
            /* LoopSeq 2 */
            for (short i_22 = 1; i_22 < 17; i_22 += 3) 
            {
                var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned int) var_8)) & (var_9)))))))))));
                arr_76 [i_19] [i_19] = ((/* implicit */int) (unsigned char)255);
                var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (max((2147483647), (((/* implicit */int) arr_28 [i_22] [i_22] [i_22] [i_19 - 1] [i_22 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9712098320574257207ULL))))))))));
                var_47 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((long long int) (signed char)106))) & (arr_1 [i_19 - 1]))) | (((/* implicit */unsigned long long int) (~((-(var_9))))))));
            }
            /* vectorizable */
            for (unsigned short i_23 = 3; i_23 < 18; i_23 += 4) 
            {
                var_48 = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_80 [i_19] [i_21] [i_23]))))));
                var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) (((~(((/* implicit */int) (short)-23631)))) <= (((2147483647) << (((var_4) - (303115620U))))))))));
                var_50 = ((/* implicit */unsigned long long int) arr_45 [i_23] [i_23] [i_23] [i_23 - 2] [i_23] [(unsigned char)3]);
            }
            var_51 = ((/* implicit */int) var_5);
            /* LoopNest 3 */
            for (unsigned short i_24 = 2; i_24 < 18; i_24 += 3) 
            {
                for (long long int i_25 = 1; i_25 < 17; i_25 += 2) 
                {
                    for (int i_26 = 1; i_26 < 18; i_26 += 3) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (min((var_2), (((/* implicit */long long int) arr_13 [i_21 + 1] [i_21 - 1] [i_21] [i_21 + 2] [i_21 + 1] [i_21 + 1] [i_21])))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [(unsigned short)15] [i_19 - 1] [i_19 + 1] [i_19] [i_19])))));
                            var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) arr_61 [i_24] [i_21] [i_24] [i_21]))));
                        }
                    } 
                } 
            } 
        }
        var_54 ^= arr_59 [i_19] [i_19 - 1] [i_19 + 1] [i_19] [i_19 - 1];
    }
    var_55 += ((/* implicit */int) ((((/* implicit */_Bool) max(((-(var_5))), (((/* implicit */long long int) var_12))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) ((-443317616) <= (var_12))))) == ((+(var_18)))))));
    var_56 = ((/* implicit */long long int) var_6);
}
