/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203737
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (short)32767))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31744)))));
        var_18 += ((/* implicit */long long int) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (short)32744))) % (335894531U))), (((/* implicit */unsigned int) (_Bool)0)))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
            {
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (_Bool)0))))));
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    arr_13 [i_0] = ((/* implicit */short) (unsigned short)58071);
                    var_19 += ((/* implicit */unsigned long long int) var_5);
                }
            }
            for (long long int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 17; i_6 += 2) 
                    {
                        var_20 ^= ((/* implicit */unsigned char) (_Bool)1);
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)30704);
                    }
                    arr_24 [i_4] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3129794633321176045LL)) ? (3129794633321176045LL) : (((/* implicit */long long int) ((/* implicit */int) (short)13621)))));
                }
                for (signed char i_7 = 2; i_7 < 20; i_7 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) (short)-32745);
                    arr_27 [i_0] = ((/* implicit */short) 4515377454500482030ULL);
                    var_22 = ((/* implicit */unsigned int) max((var_22), ((-(arr_22 [i_7] [i_7] [i_4] [i_7 + 1] [i_0] [i_1])))));
                }
                arr_28 [i_0] [i_0] = ((/* implicit */unsigned long long int) 1478203613);
            }
            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)203);
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_32 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((arr_21 [i_0 - 2]) >> (((arr_6 [i_0 - 2] [i_0 - 2] [i_0]) - (5925899651088865399LL)))));
                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 6955326668440759771ULL)) ? (((/* implicit */int) (short)4169)) : (((/* implicit */int) (short)-23571)))) ^ ((+(((/* implicit */int) (short)18315))))));
                var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_8])) ? (-5LL) : (arr_5 [i_0] [6LL])));
                arr_33 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11491417405268791849ULL)) ? (((/* implicit */int) (short)31884)) : (((/* implicit */int) (short)-9328))));
                var_25 = ((/* implicit */long long int) var_0);
            }
        }
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            var_26 = ((/* implicit */unsigned long long int) (-(max((var_8), (((/* implicit */unsigned int) var_16))))));
            /* LoopSeq 3 */
            for (int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_39 [i_0] [i_0] = ((/* implicit */long long int) var_7);
                arr_40 [i_0] [i_10] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_19 [i_10] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (2296464093U))) : (arr_21 [i_0 - 1]))));
                /* LoopNest 2 */
                for (long long int i_11 = 2; i_11 < 20; i_11 += 2) 
                {
                    for (short i_12 = 1; i_12 < 18; i_12 += 2) 
                    {
                        {
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)74);
                            var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-23952)) ? (((arr_19 [i_12] [i_0] [i_0] [i_0] [i_0] [i_0]) & (var_5))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0])))))))), (((arr_20 [i_0 - 1]) | (arr_20 [i_0 - 2])))));
                        }
                    } 
                } 
                arr_47 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)203))));
            }
            for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                arr_51 [i_9] [i_9] [i_0] = ((/* implicit */int) arr_15 [i_0] [i_0] [i_0]);
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (unsigned char)60))));
            }
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1647849966U))));
                    arr_58 [i_0] [i_0] = ((/* implicit */unsigned int) arr_34 [i_9] [i_9] [i_9]);
                }
                for (unsigned short i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    var_30 = ((/* implicit */long long int) (+(960U)));
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4662934098850923190ULL)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (signed char)-41))));
                    arr_63 [i_0] [i_14] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) -2126403435)) ? (((((/* implicit */_Bool) var_9)) ? (arr_62 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (var_2)));
                    var_32 = ((/* implicit */unsigned short) arr_37 [i_0]);
                }
                arr_64 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_49 [i_0] [i_0 - 2]))));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_0] [i_0])) + (((/* implicit */int) (unsigned short)426))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9] [i_9] [i_14] [i_0] [i_9] [i_14]))) : (var_11)))) : (3029842115981889081LL)));
            }
            /* LoopNest 3 */
            for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                for (unsigned char i_18 = 2; i_18 < 20; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        {
                            arr_73 [i_0] = ((/* implicit */unsigned long long int) (short)-25810);
                            arr_74 [i_0] [i_0] [i_17] [i_0] [i_19] = ((/* implicit */short) arr_50 [i_0] [i_9] [i_0] [i_9]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_20 = 2; i_20 < 20; i_20 += 2) 
            {
                arr_78 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) 2915206742U);
                arr_79 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) var_17));
                var_34 *= ((/* implicit */unsigned long long int) arr_68 [i_0] [i_9] [i_20] [i_9] [i_20]);
            }
            /* vectorizable */
            for (short i_21 = 2; i_21 < 20; i_21 += 2) 
            {
                var_35 = ((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_0])) * (((/* implicit */int) arr_69 [i_0]))));
                arr_82 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_70 [i_0] [i_0] [i_0] [i_21]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_23 = 1; i_23 < 17; i_23 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)25810))));
                        arr_88 [i_0] [i_9] [i_21] [i_22] = ((/* implicit */_Bool) ((1676280203U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65116)))));
                        var_37 = ((/* implicit */int) min((var_37), ((+((-(((/* implicit */int) (signed char)0))))))));
                    }
                    arr_89 [i_0] = ((/* implicit */unsigned char) arr_67 [i_0] [i_9] [i_0] [i_9] [i_22] [i_0]);
                    var_38 = ((/* implicit */unsigned char) ((unsigned long long int) arr_70 [i_9] [i_0] [i_0] [i_9]));
                    var_39 = ((/* implicit */long long int) (~(((/* implicit */int) arr_68 [i_22] [i_0] [i_22] [i_22] [i_22]))));
                    var_40 -= ((/* implicit */int) var_9);
                }
                for (int i_24 = 1; i_24 < 18; i_24 += 3) 
                {
                    arr_92 [i_0] [i_0] [i_21] [i_21] = ((/* implicit */_Bool) 356187511U);
                    arr_93 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(arr_17 [i_0] [i_0] [i_21 + 1])));
                }
            }
            for (long long int i_25 = 0; i_25 < 21; i_25 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_26 = 2; i_26 < 19; i_26 += 1) 
                {
                    for (unsigned int i_27 = 2; i_27 < 18; i_27 += 2) 
                    {
                        {
                            arr_105 [i_9] [i_0] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (signed char)38)) ? (11860599514465848807ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) -883329101035686253LL)))) > (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (unsigned char)195)), (8840963440627894364LL))) & (((((/* implicit */_Bool) 0LL)) ? (1402034719525257847LL) : (((/* implicit */long long int) var_10)))))))));
                            var_41 = arr_94 [i_0] [i_25] [i_0];
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) min((arr_41 [i_0] [i_0] [i_0] [i_9] [i_27]), ((short)-9480)))) + (2147483647))) >> (((/* implicit */int) arr_55 [i_25] [i_25] [i_25]))))) < (var_4))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_28 = 2; i_28 < 19; i_28 += 4) 
                {
                    for (unsigned int i_29 = 2; i_29 < 20; i_29 += 3) 
                    {
                        {
                            arr_114 [i_0] = ((/* implicit */_Bool) max((var_16), (var_16)));
                            arr_115 [i_28] &= ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
                var_43 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((arr_11 [i_0] [i_9] [i_9] [i_25]), (((/* implicit */unsigned long long int) arr_71 [i_25])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_99 [i_0] [i_0] [i_0] [i_9] [i_9])) ^ (((/* implicit */int) (short)13)))))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)245)) / (((/* implicit */int) (unsigned char)248))))))) : (((arr_61 [i_0] [i_0] [i_9] [i_25] [i_25]) ? (max((2147479552LL), (((/* implicit */long long int) arr_7 [i_9] [i_9] [i_25])))) : (((/* implicit */long long int) ((/* implicit */int) max((var_7), (arr_56 [i_9] [i_9] [i_9] [i_9] [i_9])))))))));
            }
            var_44 = ((/* implicit */unsigned char) ((2855901594U) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147479549LL)) ? (((/* implicit */unsigned int) arr_108 [i_0] [i_0] [i_0] [i_0] [i_0])) : (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_95 [i_0] [i_0] [i_0])))));
        }
        var_45 = ((/* implicit */int) arr_49 [i_0] [i_0]);
        arr_116 [i_0] [i_0] = ((/* implicit */unsigned char) arr_86 [i_0] [i_0] [i_0]);
    }
    /* LoopNest 3 */
    for (long long int i_30 = 3; i_30 < 9; i_30 += 2) 
    {
        for (short i_31 = 1; i_31 < 10; i_31 += 2) 
        {
            for (signed char i_32 = 0; i_32 < 11; i_32 += 2) 
            {
                {
                    var_46 = ((/* implicit */long long int) (~(max((((/* implicit */int) (unsigned char)31)), ((-2147483647 - 1))))));
                    var_47 = ((/* implicit */unsigned int) max((var_47), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) ^ (-3201318460226666140LL)))) ? (var_12) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_50 [i_32] [i_32] [i_32] [i_32])))))))));
                }
            } 
        } 
    } 
}
