/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242398
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
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
        arr_4 [i_0] = (short)13950;
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                arr_14 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_2 - 1] [i_3 - 1]))));
                var_13 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (+(16123187934976196070ULL))))));
                var_14 = ((/* implicit */short) (-(var_8)));
            }
            for (long long int i_4 = 2; i_4 < 16; i_4 += 1) 
            {
                arr_17 [i_2] [i_4] = ((/* implicit */short) 16123187934976196070ULL);
                var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2323556138733355545ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_16 [i_1] [i_1]))))));
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
            }
            var_17 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)216)) % (((/* implicit */int) (unsigned short)47065))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-23840))))) ^ (((/* implicit */int) arr_12 [i_2 - 2] [i_2] [i_2]))));
            arr_18 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_11 [i_2 - 2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)124)))))));
        }
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-66)) >= (((/* implicit */int) (signed char)19))))) : ((+(1880172170)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 1880172168))) >> (((var_2) - (2348203729U)))));
        var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 1846475473)) >= (var_2)))))))), (((((/* implicit */_Bool) (unsigned char)193)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))))));
        /* LoopSeq 3 */
        for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_6]))));
            /* LoopSeq 4 */
            for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_23 = ((/* implicit */long long int) ((unsigned long long int) ((int) arr_24 [i_5] [i_6] [i_7])));
                    /* LoopSeq 3 */
                    for (long long int i_9 = 1; i_9 < 22; i_9 += 2) 
                    {
                        arr_33 [i_5] [i_6] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned short) (+(-1880172171)));
                        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 234323745)) >= (124476466U)));
                        var_25 = ((/* implicit */short) var_5);
                        arr_34 [i_5] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_8] [i_9 + 1] [i_9] [i_7] [i_9])) || (((/* implicit */_Bool) arr_19 [i_6] [i_6]))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10125939006097851566ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)5)) || (((/* implicit */_Bool) (short)-23847))))) : (1880172158)));
                    }
                    for (int i_10 = 3; i_10 < 23; i_10 += 3) 
                    {
                        arr_38 [i_7] = ((/* implicit */signed char) ((var_10) ? (arr_22 [i_8] [i_6] [i_7 + 1]) : (arr_22 [i_5] [i_8] [i_7 + 1])));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)640)))))));
                    }
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 124476472U)) ? (((/* implicit */int) (unsigned short)25237)) : (((/* implicit */int) (signed char)-124))));
                        arr_41 [i_7] [i_7] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)25246))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_5] [i_6] [i_7] [i_8] [i_8])) < (((/* implicit */int) (unsigned short)40299))));
                }
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    for (unsigned int i_13 = 1; i_13 < 22; i_13 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) var_1);
                            var_31 = ((/* implicit */unsigned short) max((4170490829U), (((/* implicit */unsigned int) (signed char)-124))));
                            var_32 = ((/* implicit */unsigned long long int) ((short) min((arr_31 [i_13] [i_13] [i_13 + 1] [i_7 + 1] [i_6 + 1]), (arr_31 [i_13] [i_13] [i_13 - 1] [i_7 - 1] [i_6 - 1]))));
                            arr_47 [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6 + 1] [i_6]))) : (arr_28 [i_6 - 1] [i_6] [i_6] [i_7 + 1] [i_13 - 1]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) 1880172170)) : (var_1)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_3))))))))));
                            arr_48 [i_5] [i_5] [i_7] [i_12] [i_13] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (unsigned short)40294)), (arr_44 [i_5] [i_7] [i_7] [i_12] [i_6])))))) * (((unsigned long long int) (signed char)119))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_14 = 2; i_14 < 22; i_14 += 4) 
                {
                    var_33 = ((/* implicit */unsigned short) (signed char)-124);
                    var_34 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_28 [i_5] [i_6 + 1] [i_7] [i_7] [i_7 + 1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_5] [i_6] [i_7 - 1] [i_7]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        arr_54 [i_7] = ((/* implicit */signed char) (((-(1302125168U))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                        var_35 += ((/* implicit */signed char) (+(((((/* implicit */int) var_0)) & (((/* implicit */int) arr_20 [i_14 - 1] [i_14]))))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        arr_58 [i_5] [i_6] [i_7] [i_14] [i_7] = ((/* implicit */signed char) min((max((-5461106081822134122LL), (-7459395048095701718LL))), (((/* implicit */long long int) ((short) arr_19 [i_5] [i_5])))));
                        var_36 = ((/* implicit */long long int) max((((/* implicit */unsigned int) 1880172173)), (max((((/* implicit */unsigned int) (signed char)104)), (3694796077U)))));
                    }
                    /* vectorizable */
                    for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        var_37 = var_5;
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-23847)) ^ (((((/* implicit */_Bool) arr_44 [i_17] [i_14] [i_7] [i_6] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
                        var_39 = ((/* implicit */long long int) (-(1931120832)));
                        var_40 = ((/* implicit */signed char) (+(3574868480276008407LL)));
                        var_41 = ((((/* implicit */_Bool) 6587890484704661423LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4642))) : (2602170528685881058LL));
                    }
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_42 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 4104071722U)), (min((((arr_19 [i_18] [i_6]) ^ (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */short) arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
                    var_43 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 5461106081822134122LL)) ? ((+(124476466U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                }
                var_44 = ((/* implicit */unsigned short) min(((+(((arr_42 [i_7] [i_5] [i_5] [i_6] [i_7] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) (short)16916))) : (var_8))))), (max(((~(5461106081822134127LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2))))))));
            }
            for (unsigned char i_19 = 1; i_19 < 21; i_19 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_20 = 0; i_20 < 24; i_20 += 3) 
                {
                    arr_71 [i_5] [i_6] [i_19] [i_19] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_40 [i_20] [i_6]))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-98)))))));
                    var_45 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_8)))));
                }
                for (short i_21 = 0; i_21 < 24; i_21 += 2) 
                {
                    var_46 = (((_Bool)0) ? (-5461106081822134130LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 4; i_22 < 22; i_22 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned short) arr_60 [i_6] [i_6] [i_19]);
                        var_48 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))));
                    }
                    arr_78 [i_19] [i_6] [i_19] [i_21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                }
                var_49 = ((/* implicit */unsigned short) var_6);
                var_50 = ((/* implicit */short) var_9);
            }
            for (unsigned int i_23 = 1; i_23 < 23; i_23 += 4) 
            {
                arr_81 [i_23] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) arr_79 [i_23] [i_6] [i_23]);
                var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) min((-5461106081822134125LL), (((/* implicit */long long int) arr_65 [i_23] [i_6] [i_23] [i_6] [i_6 + 1] [i_6])))))));
            }
            for (short i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                arr_86 [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((3727805316364653211ULL), (((/* implicit */unsigned long long int) -5461106081822134123LL)))), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)117))))) ? ((+(((/* implicit */int) (signed char)116)))) : (((/* implicit */int) var_6))))) : (max((var_5), (((/* implicit */long long int) arr_51 [i_24] [i_24] [i_24] [i_5]))))));
                var_52 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-16916))))) ^ (((unsigned long long int) arr_29 [i_5] [i_6] [i_5] [i_5]))));
                var_53 = ((/* implicit */unsigned int) arr_30 [i_24] [i_24] [i_6] [i_6] [i_5]);
            }
        }
        /* vectorizable */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) arr_70 [i_5] [i_5] [i_5] [i_5]))));
            var_55 = ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (6215770368327854585LL) : (15728640LL)));
            var_56 = ((/* implicit */unsigned char) ((arr_59 [i_5] [i_5] [i_5] [i_25] [i_25]) >> (((var_5) + (5758888801688702023LL)))));
        }
        /* vectorizable */
        for (short i_26 = 0; i_26 < 24; i_26 += 2) 
        {
            arr_92 [i_5] [i_26] = ((/* implicit */unsigned int) var_5);
            var_57 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)15))));
            var_58 = ((/* implicit */signed char) (unsigned short)25216);
        }
    }
    for (signed char i_27 = 0; i_27 < 19; i_27 += 2) 
    {
        var_59 = ((/* implicit */short) arr_22 [i_27] [i_27] [i_27]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_28 = 0; i_28 < 19; i_28 += 4) 
        {
            var_60 = ((/* implicit */unsigned int) min((var_60), (((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_28] [i_28] [i_27] [i_28] [i_27] [i_27])) >> (((((/* implicit */int) arr_11 [i_27] [i_28])) - (101))))))));
            var_61 = ((/* implicit */unsigned short) ((arr_85 [i_27] [i_27] [i_27] [i_28]) >> (((arr_85 [i_28] [i_28] [i_27] [i_27]) - (5412534156761870386LL)))));
            var_62 = (short)-1859;
            var_63 = ((/* implicit */int) arr_27 [i_27] [i_27] [i_28] [i_28]);
            var_64 = ((/* implicit */unsigned short) (+(-673887006)));
        }
    }
    var_65 = ((/* implicit */unsigned short) min((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)97))))) % (((/* implicit */int) ((short) (unsigned short)13075))))), (min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_3))))));
    var_66 = ((/* implicit */signed char) var_9);
    var_67 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) : (var_7)));
}
