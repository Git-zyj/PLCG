/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224322
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_10 [i_2] [i_2 + 1] [i_2 + 1] [i_3 - 2] [i_3] [i_3 - 3])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_1] [i_2 - 1] [i_2 - 1] [i_3 - 3] [i_3] [i_3 - 1]), (((/* implicit */unsigned short) var_0))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned short) var_12);
                                var_15 = ((/* implicit */int) min((((arr_4 [i_0] [i_1] [i_3 - 4] [i_4]) / (((/* implicit */long long int) 1393265095)))), (((/* implicit */long long int) ((unsigned int) arr_4 [i_1] [i_2 + 1] [i_2 + 1] [i_4])))));
                            }
                            for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned short) var_2);
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((signed char) (!(((_Bool) arr_0 [i_0])))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_7 [3] [i_1] [i_3] [i_5]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) min((var_12), (var_9))))))) * (arr_6 [i_0] [i_0])));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_3] [i_5 + 1] = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_8 [i_3] [i_3] [i_1] [i_0])) - (47185)))))))));
                                var_18 = ((((/* implicit */_Bool) ((((var_9) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_4)), ((short)-3918)))))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_5 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))) : (((/* implicit */int) var_11)));
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5197764175681886218ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) : (arr_4 [i_0] [i_0] [i_0] [i_0])))) : (1125899906842623ULL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) var_10))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        arr_20 [i_6] = ((((/* implicit */int) ((signed char) (_Bool)1))) < (((/* implicit */int) (unsigned char)247)));
        arr_21 [i_6] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_4 [i_6] [i_6] [i_6] [i_6]))));
        arr_22 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)11877))))) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_2 [i_6] [i_6]))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            arr_26 [i_6] = ((/* implicit */unsigned int) ((var_2) >= (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)730)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))));
                var_21 = ((/* implicit */unsigned char) arr_24 [i_8 + 2]);
                arr_30 [i_6] [i_7] [i_7] = arr_9 [i_8] [i_7];
            }
        }
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_9)))));
        arr_35 [i_9] = ((/* implicit */unsigned short) (short)12542);
        arr_36 [i_9] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((_Bool) (signed char)-100))) : (((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                var_22 = ((/* implicit */short) 1096193200U);
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((unsigned char) arr_37 [i_12]));
                    arr_48 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (_Bool)0)))))));
                }
                for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    arr_52 [i_10] [i_10] [i_10] [9ULL] = ((/* implicit */unsigned int) arr_49 [i_10] [i_10] [i_10]);
                    var_23 = ((arr_44 [i_10]) << (((((/* implicit */int) arr_46 [i_10] [i_11] [i_12] [i_14])) - (28466))));
                    var_24 = arr_50 [i_11] [i_11] [i_10] [i_11];
                }
                for (int i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    arr_57 [i_10] [i_10] [i_15] = ((_Bool) 540692922783558436LL);
                    arr_58 [i_10] [i_11] [i_10] [i_10] = ((((/* implicit */_Bool) arr_41 [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47664)) ? (((/* implicit */int) (_Bool)1)) : (var_2)))) : (var_8));
                }
            }
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                arr_63 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_46 [i_16] [i_11] [i_10] [i_10]))) & ((+(((/* implicit */int) (unsigned char)246))))));
                var_25 = ((/* implicit */_Bool) ((unsigned char) arr_59 [i_10] [i_10] [i_10] [i_16]));
            }
            arr_64 [i_10] = var_3;
        }
        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_18 = 0; i_18 < 24; i_18 += 1) 
            {
                arr_72 [i_10] [i_17] [i_17] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_60 [i_10] [i_17] [i_18] [i_18])))) ^ (((/* implicit */int) var_4))));
                arr_73 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) arr_45 [i_10] [i_10] [i_10] [i_17] [i_10] [i_18]))));
                arr_74 [i_10] [i_17] = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) var_6)) / (var_7)))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    for (unsigned short i_21 = 4; i_21 < 20; i_21 += 4) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) 4194302)) ? (((/* implicit */unsigned int) ((int) 18446744073709551615ULL))) : (((var_8) - (arr_81 [i_10] [i_10] [i_10]))));
                            arr_86 [i_10] [i_17] [i_19] [i_20] [i_10] [i_21 - 4] = ((/* implicit */unsigned char) arr_46 [i_10] [i_10] [i_10] [16]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    for (short i_23 = 1; i_23 < 23; i_23 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (arr_51 [i_10] [i_17] [i_19] [i_22] [i_23 - 1] [i_23]) : (((/* implicit */int) var_11)))) << (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_9)))) - (1)))));
                            var_28 = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
                arr_92 [i_10] [i_10] [i_10] = (unsigned short)47897;
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_89 [i_10] [i_17] [i_19])) ? (((/* implicit */unsigned int) 108433488)) : (var_8)));
                var_30 = ((/* implicit */unsigned int) (((~(arr_70 [i_10]))) * (((/* implicit */int) arr_84 [i_10] [i_10] [i_10] [(signed char)14] [i_19]))));
            }
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                arr_97 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (3846390731U) : (var_7)));
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 4) 
                {
                    for (long long int i_26 = 0; i_26 < 24; i_26 += 3) 
                    {
                        {
                            arr_104 [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_66 [i_26]))));
                            arr_105 [i_10] [i_10] = ((/* implicit */_Bool) arr_65 [i_10]);
                            arr_106 [i_10] [i_26] [i_24] [i_25] [i_26] [i_26] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) arr_45 [i_10] [i_10] [i_17] [18ULL] [i_10] [i_10])) : (((/* implicit */int) var_5)))) <= ((-(((/* implicit */int) var_11))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_27 = 0; i_27 < 24; i_27 += 1) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55044)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_3)) ? (-4351685989442730182LL) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_10])))))));
                            var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_83 [i_17] [i_27]))));
                            arr_112 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
            }
            arr_113 [i_10] [i_10] = ((/* implicit */unsigned short) ((-2048LL) == (-4599727021196537868LL)));
        }
        var_33 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)63))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_29 = 0; i_29 < 16; i_29 += 3) 
    {
        for (short i_30 = 2; i_30 < 15; i_30 += 2) 
        {
            {
                arr_121 [i_29] [i_29] = ((/* implicit */unsigned short) ((max((max((((/* implicit */unsigned int) arr_94 [i_29] [i_29] [i_29])), (arr_9 [i_29] [i_29]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_68 [i_30]) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_2) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_96 [i_30 - 1])))))));
                arr_122 [i_30] [i_29] = ((/* implicit */unsigned char) arr_116 [i_29]);
                arr_123 [i_29] [i_30] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_101 [i_30] [i_30 + 1] [i_29] [i_29] [i_29] [i_30]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_0)) : (arr_51 [i_30] [i_29] [i_30] [i_30 + 1] [i_30] [i_30 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_95 [i_29] [i_29] [i_29] [i_30 - 1])) ? (((/* implicit */long long int) 1521134981U)) : (arr_4 [i_29] [i_29] [i_29] [i_30 + 1])))) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-7634386368964553492LL))))))));
            }
        } 
    } 
}
