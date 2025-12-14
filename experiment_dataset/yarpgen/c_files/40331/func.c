/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40331
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
    var_19 ^= ((/* implicit */unsigned long long int) ((var_11) << (((((/* implicit */int) var_18)) + (30801)))));
    var_20 = ((/* implicit */unsigned int) var_18);
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) min((3438124888U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 2U)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) (unsigned char)0))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_22 = arr_2 [i_1];
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) (!(((2U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                    var_24 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                    arr_8 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_9);
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) 0U))));
                }
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    var_25 = ((/* implicit */short) ((((unsigned long long int) (short)0)) > (((/* implicit */unsigned long long int) ((3429646132U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)19591))))))));
                    var_26 += ((/* implicit */unsigned long long int) arr_2 [i_0 + 2]);
                    var_27 &= ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0] [i_0]))));
                }
                var_28 = ((/* implicit */unsigned int) ((arr_1 [i_0 - 2]) | (arr_1 [i_0 - 1])));
                var_29 = ((/* implicit */short) 3607236611U);
                var_30 *= ((/* implicit */short) ((unsigned int) 2587545930U));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_31 = var_1;
                    var_32 = ((/* implicit */short) (+(var_6)));
                    var_33 = ((/* implicit */unsigned long long int) ((unsigned int) (+(arr_7 [(short)4] [i_1] [i_2] [i_5] [i_5]))));
                }
                for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                {
                    var_34 = ((/* implicit */short) 2U);
                    var_35 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)227)) && (((/* implicit */_Bool) 856842407U)))))));
                    var_36 ^= ((/* implicit */unsigned long long int) (-(((unsigned int) var_18))));
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_5))));
                }
            }
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_38 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))) & (var_7)));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) arr_6 [i_1])));
                    var_40 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))) > (arr_1 [i_7])));
                }
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_1]))));
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((5876935929324590434ULL) << (((/* implicit */int) (unsigned char)7)))))));
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 2])) : (((/* implicit */int) ((unsigned char) arr_10 [(unsigned char)13] [i_1] [i_1] [i_1])))));
                }
                var_44 &= arr_6 [i_1];
            }
        }
        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 4) /* same iter space */
        {
            var_45 = 2434217141U;
            var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_12 [i_0] [(unsigned char)16])), (arr_20 [i_0] [1ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_10 + 4])) ? (3221225472U) : (3471745430U)))))))));
            var_47 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1073741820U)), (13092850546953907451ULL)));
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                var_48 ^= var_13;
                var_49 = ((/* implicit */short) ((((unsigned int) var_10)) <= ((-(1546726093U)))));
            }
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                var_50 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                arr_32 [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13092850546953907437ULL)) ? (4915360655917692686ULL) : (((/* implicit */unsigned long long int) 2833477841U))));
            }
            for (unsigned int i_13 = 3; i_13 < 20; i_13 += 3) 
            {
                var_51 = ((/* implicit */short) min((arr_33 [i_10] [i_10 + 1] [i_0 - 1] [i_0 - 2]), (min((((/* implicit */unsigned long long int) 3221225491U)), (301761709795766018ULL)))));
                var_52 = ((/* implicit */unsigned long long int) 3325658381U);
            }
        }
        for (unsigned int i_14 = 1; i_14 < 17; i_14 += 4) /* same iter space */
        {
            var_53 &= ((unsigned char) min((1073741823U), (1073741820U)));
            var_54 = ((unsigned int) var_4);
            var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((3717826944U), ((+(var_8)))))))))));
            var_56 += ((/* implicit */unsigned long long int) ((((arr_15 [i_14 + 3] [i_14] [i_14 + 4] [17U]) & (arr_15 [i_14] [i_14 + 2] [i_14 + 4] [i_14 + 2]))) / (((((/* implicit */_Bool) ((short) 5353893526755644206ULL))) ? (var_9) : (min((arr_2 [(unsigned char)20]), (((/* implicit */unsigned int) arr_6 [i_0]))))))));
            var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) var_4))));
        }
        arr_37 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(unsigned char)2] [i_0 + 2]))))))));
    }
    for (unsigned long long int i_15 = 1; i_15 < 11; i_15 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            var_58 = ((/* implicit */short) (((+(arr_11 [i_15 - 1] [i_16]))) != (min((((/* implicit */unsigned long long int) var_3)), (arr_11 [i_15 - 1] [i_15])))));
            var_59 *= ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) (short)14929)), (((((/* implicit */_Bool) (unsigned char)0)) ? (3776482151U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)255))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            arr_45 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_15 - 1] [i_15 + 1])) ? (((((/* implicit */_Bool) 5876935929324590434ULL)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
            arr_46 [i_15] [i_17] = ((/* implicit */unsigned char) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 7U)) && (((/* implicit */_Bool) 2146828220U))))))));
            var_60 = ((/* implicit */unsigned int) ((unsigned char) var_2));
            var_61 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (var_9) : (var_13))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_15] [i_15 - 1] [i_15 + 1])))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                var_62 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_39 [i_15 + 1] [i_15]))));
                var_63 *= ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_15 - 1]))));
                arr_53 [i_15] [i_15] [0ULL] [i_19] = ((/* implicit */short) ((unsigned char) arr_31 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1]));
            }
            for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 2) 
            {
                var_64 += var_18;
                var_65 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)21)))))));
            }
            /* vectorizable */
            for (unsigned int i_21 = 2; i_21 < 8; i_21 += 2) 
            {
                var_66 = ((/* implicit */unsigned long long int) min((var_66), (arr_42 [i_21] [i_18])));
                var_67 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_55 [i_15 - 1] [i_15 - 1] [i_15 + 1]))));
            }
            var_68 = ((/* implicit */unsigned int) max((var_68), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (18446744073709551608ULL))))));
            /* LoopNest 2 */
            for (unsigned char i_22 = 1; i_22 < 8; i_22 += 1) 
            {
                for (unsigned int i_23 = 3; i_23 < 11; i_23 += 1) 
                {
                    {
                        var_69 = (+(((((/* implicit */_Bool) arr_21 [i_23] [(short)2] [i_23 - 3] [i_22 - 1] [i_15 - 1] [i_15])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_23] [i_15 - 1] [i_15 + 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_24 = 2; i_24 < 9; i_24 += 1) 
                        {
                            var_70 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_18 [i_15 + 1])))), (((/* implicit */int) arr_55 [i_24 + 1] [i_23 - 2] [i_18]))));
                            var_71 = ((/* implicit */unsigned long long int) min((var_71), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_24 - 1] [19U] [19U])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_18] [(unsigned char)8] [i_18]))) / (var_8))) : ((-(arr_7 [i_15] [17U] [17U] [i_22] [i_24])))))))))));
                            var_72 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_15 - 1] [i_18])) | (((/* implicit */int) arr_47 [i_15 + 1] [i_15] [3U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9745666523589372946ULL)))))) : ((~(arr_20 [i_15 + 1] [i_15 + 1]))));
                        }
                        for (unsigned int i_25 = 0; i_25 < 12; i_25 += 3) 
                        {
                            var_73 = ((/* implicit */unsigned char) arr_29 [i_15] [i_15]);
                            var_74 ^= ((/* implicit */unsigned int) 10ULL);
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_26 = 2; i_26 < 9; i_26 += 4) 
                        {
                            var_75 = ((/* implicit */unsigned long long int) (short)-14929);
                            var_76 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_15] [i_26] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (((var_6) - (((/* implicit */unsigned long long int) var_13))))))) ? (min((((/* implicit */unsigned long long int) arr_34 [i_26 + 3] [i_23] [i_18])), (min((((/* implicit */unsigned long long int) (short)-1)), (arr_60 [i_15] [i_22] [i_23] [i_26]))))) : (((/* implicit */unsigned long long int) min((((var_11) - (var_9))), (((unsigned int) (unsigned char)165)))))));
                        }
                        for (short i_27 = 1; i_27 < 11; i_27 += 2) 
                        {
                            var_77 = ((/* implicit */short) min((var_77), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (arr_41 [i_15] [i_18] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_18] [i_18] [i_15]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2148139075U)) && (((/* implicit */_Bool) (short)-14917)))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_55 [i_23] [i_22] [(unsigned char)7])), (arr_70 [(unsigned char)8] [i_18] [(short)0] [i_18] [i_18])))), (min((arr_4 [i_15]), (((/* implicit */unsigned long long int) var_7))))))))))));
                            var_78 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)1))));
                            var_79 = ((/* implicit */short) min((min((((/* implicit */unsigned int) (short)28376)), (arr_7 [i_15] [i_15] [i_15 - 1] [i_22 + 1] [i_22 + 2]))), (min((arr_7 [i_15] [i_15 + 1] [i_15 + 1] [i_22] [i_22 - 1]), (arr_7 [4ULL] [4ULL] [i_15 + 1] [i_18] [i_22 + 3])))));
                        }
                        var_80 = ((/* implicit */short) min((var_8), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_17)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_28 = 0; i_28 < 12; i_28 += 3) 
                        {
                            var_81 = var_4;
                            var_82 = ((/* implicit */unsigned long long int) max((var_82), (((/* implicit */unsigned long long int) ((arr_71 [i_15] [i_23 - 1] [i_23 - 1] [i_23 - 3] [(short)0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_15] [i_15]))))))));
                            var_83 -= ((((/* implicit */_Bool) (short)128)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_23 - 1] [4U] [i_22 - 1] [i_22] [4U] [i_15 + 1]))));
                            var_84 = ((/* implicit */short) arr_67 [i_15] [i_22 + 3] [i_15] [i_22] [i_22] [i_23] [i_23]);
                            var_85 = ((/* implicit */unsigned int) ((0ULL) | (var_1)));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_29 = 0; i_29 < 12; i_29 += 1) /* same iter space */
        {
            var_86 = ((/* implicit */unsigned int) min((var_86), (2402550965U)));
            var_87 = arr_10 [i_15 + 1] [i_15] [i_29] [(short)15];
        }
    }
}
