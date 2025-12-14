/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45879
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (short)31372));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-31381))))) ? (min((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */_Bool) (signed char)104)) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_0))))));
                var_15 ^= ((/* implicit */unsigned int) (-(arr_4 [i_1] [i_0])));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 3) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((((unsigned int) ((((/* implicit */_Bool) arr_2 [(short)10] [i_2])) ? (arr_6 [(short)14]) : (((/* implicit */long long int) ((/* implicit */int) (short)31372)))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_7 [15ULL]))) ? (((((/* implicit */int) (unsigned char)153)) << (((768U) - (755U))))) : ((-(((/* implicit */int) (unsigned char)165)))))))))));
        var_17 = ((/* implicit */unsigned int) var_3);
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((1908742832683916071LL), (((/* implicit */long long int) arr_3 [i_2] [i_2 + 1] [i_2 + 2]))))), (max((12ULL), (((/* implicit */unsigned long long int) arr_3 [i_2] [(_Bool)1] [i_2 + 2]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_19 ^= ((/* implicit */_Bool) arr_14 [i_5] [i_5]);
                            var_20 = ((/* implicit */unsigned char) min((arr_12 [i_2 - 2] [i_2 - 1]), (((arr_2 [i_3] [i_3]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(unsigned char)10] [(unsigned char)10])) ? (((/* implicit */long long int) -951163328)) : (var_9))))))));
                        }
                    } 
                } 
                arr_17 [i_2] [(unsigned char)7] [(unsigned short)11] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2])) ? (((/* implicit */int) (short)31372)) : (arr_16 [4] [i_2 - 1] [i_2 + 1] [i_2 - 4] [4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)93)))) : (13182969965248685937ULL)));
            }
            for (signed char i_7 = 2; i_7 < 17; i_7 += 4) 
            {
                var_21 = ((/* implicit */_Bool) ((min((max((((/* implicit */long long int) arr_12 [(signed char)1] [(signed char)1])), (-1669264160322560479LL))), (min((-9223372036854775802LL), (1908742832683916074LL))))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)220))))));
                var_22 = ((/* implicit */unsigned long long int) arr_14 [i_2] [4LL]);
            }
        }
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    {
                        var_23 = max((((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (signed char)-104))))) ? (((((/* implicit */_Bool) var_2)) ? (-1908742832683916072LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : ((+(-3357025643470669438LL))))), (min((((/* implicit */long long int) arr_12 [i_2 - 4] [i_2 + 2])), (-3652848474815196456LL))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_9] [i_2] [i_11] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8]))) : (arr_29 [(short)12] [i_8] [i_8] [(short)12] [i_8] [13U]))))));
                            var_25 = ((/* implicit */signed char) arr_4 [(_Bool)1] [i_8]);
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (signed char)101))));
                            var_27 = ((/* implicit */int) 4073417125U);
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                var_28 = ((/* implicit */_Bool) var_5);
                /* LoopNest 2 */
                for (signed char i_13 = 2; i_13 < 17; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */short) ((unsigned char) (unsigned char)103));
                            arr_38 [i_2] [i_2] [i_2 + 2] [(_Bool)1] [i_2] [(unsigned short)14] = ((/* implicit */short) 9196568274276518644LL);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    arr_43 [i_8] [i_8] [i_2] [i_15] [(unsigned char)0] = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) arr_12 [i_8] [i_8])))));
                    arr_44 [i_2 - 3] [i_2 - 3] [i_12] [i_2] [(signed char)10] = ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8]))) == (arr_30 [9LL] [i_12]))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_4))));
                }
                arr_45 [i_2] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((_Bool) -957364919)) ? (arr_28 [i_2 + 1] [i_2 - 2] [i_2 + 2]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) / (arr_28 [i_2] [i_2 - 2] [i_2 + 2])))));
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_21 [i_8]))));
            }
        }
        var_32 *= ((((/* implicit */_Bool) var_1)) ? (2843909331U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)153)))));
    }
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 4) 
    {
        var_33 *= ((/* implicit */unsigned long long int) arr_40 [i_16] [i_16] [16U] [(short)14] [i_16]);
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) ((_Bool) 1784733824088908947ULL))) : (arr_37 [i_16] [0ULL] [i_16] [4LL] [i_16] [i_16] [0ULL])));
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 12; i_18 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        arr_56 [5] [i_19] [i_19] [i_18] = ((/* implicit */signed char) ((arr_42 [(signed char)6] [i_17] [i_19] [(short)8] [i_16] [i_16]) ? (((/* implicit */unsigned long long int) (~(var_12)))) : ((-(5263774108460865679ULL)))));
                        arr_57 [i_16] [i_19] = ((/* implicit */unsigned int) arr_46 [i_16] [i_16]);
                        var_35 ^= ((/* implicit */unsigned char) (short)-171);
                    }
                    for (int i_20 = 4; i_20 < 11; i_20 += 4) 
                    {
                        arr_62 [i_20] [i_18] [10ULL] [10ULL] = ((/* implicit */_Bool) 13182969965248685937ULL);
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 2; i_21 < 9; i_21 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) arr_37 [i_21 + 3] [14ULL] [0] [i_21 + 2] [i_21 + 2] [i_20 + 1] [0]);
                            var_37 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_25 [i_20 + 1] [i_21 + 1] [i_18] [i_20])) | (((arr_64 [i_16] [i_21] [i_18] [i_16] [5U] [(signed char)11]) ^ (((/* implicit */unsigned int) var_12))))));
                            arr_65 [2ULL] [i_21] [i_20 + 1] [i_20] [2ULL] [i_17] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)15173)))))));
                        }
                        for (short i_22 = 0; i_22 < 12; i_22 += 2) 
                        {
                            var_38 = (!(((/* implicit */_Bool) var_4)));
                            arr_69 [7U] [i_22] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_23 = 2; i_23 < 10; i_23 += 4) 
                        {
                            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) 1929898290U))));
                            var_40 = ((/* implicit */_Bool) (unsigned char)90);
                        }
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_41 = ((((((/* implicit */_Bool) 0ULL)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_16]))))) ^ (((/* implicit */unsigned long long int) -9196568274276518645LL)));
                        arr_75 [(short)1] [(unsigned char)5] [11] [i_24] [11] [i_16] = ((/* implicit */unsigned int) arr_73 [i_16] [i_16] [i_16] [(unsigned short)2]);
                        arr_76 [(unsigned char)1] [0ULL] [i_24] = ((/* implicit */short) (signed char)-120);
                    }
                    arr_77 [i_16] [i_17] [10LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_16] [i_16] [i_16] [(_Bool)1] [i_16] [i_16])) ? (arr_4 [i_16] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                    /* LoopSeq 2 */
                    for (short i_25 = 0; i_25 < 12; i_25 += 4) 
                    {
                        var_42 ^= ((/* implicit */long long int) ((unsigned long long int) 3925970691776365549ULL));
                        var_43 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */long long int) 3169349723U)) : (9196568274276518625LL))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216)))));
                    }
                    for (unsigned char i_26 = 2; i_26 < 9; i_26 += 2) 
                    {
                        arr_83 [(unsigned char)5] [i_17] = ((/* implicit */short) (+(((/* implicit */int) (!(arr_24 [i_16] [(unsigned char)6]))))));
                        arr_84 [i_26 + 3] [(_Bool)1] [i_16] [i_17] [i_16] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (short)0))))));
                    }
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-105)) ? (arr_22 [(unsigned char)10] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) 1774168412625462570LL)))))))))));
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        var_45 = ((/* implicit */short) ((((((arr_87 [i_27]) + (9223372036854775807LL))) << (((/* implicit */int) (short)0)))) >= (min((((/* implicit */long long int) var_1)), (arr_87 [i_27])))));
        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) var_3))));
        arr_88 [i_27] [i_27] |= ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) -2003037441)) : (arr_87 [i_27])))) / (((arr_85 [i_27]) ? (13182969965248685937ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))))), (((/* implicit */unsigned long long int) arr_87 [i_27]))));
    }
}
