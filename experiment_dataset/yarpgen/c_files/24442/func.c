/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24442
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_15) : (var_15)))) || (((/* implicit */_Bool) 2408576317871371943ULL))))) % (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 += ((/* implicit */_Bool) var_14);
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (short)3))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_15)) < (67143232U)))) : (((/* implicit */int) ((short) var_3))))) : (((((/* implicit */int) (short)22230)) % (var_11))))))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    arr_10 [i_2] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-8))))) ? (var_11) : (((/* implicit */int) var_3)));
                    var_19 += ((/* implicit */_Bool) max((((var_2) & (((/* implicit */unsigned int) var_15)))), (((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22243)))))));
                    var_20 -= ((/* implicit */_Bool) max(((+(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_14))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_13 [i_2] [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) 18446744073709551609ULL)))));
                        var_21 = ((/* implicit */short) 14323362142707282902ULL);
                        var_22 = ((/* implicit */signed char) min((-1LL), (((/* implicit */long long int) var_0))));
                        var_23 ^= ((/* implicit */signed char) ((int) ((long long int) var_1)));
                        var_24 = (short)-8;
                    }
                    for (int i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        arr_16 [i_5 - 1] [i_2] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] = ((/* implicit */int) ((((/* implicit */int) ((((unsigned int) var_13)) < (((((/* implicit */unsigned int) var_11)) / (var_7)))))) != (((/* implicit */int) ((_Bool) var_0)))));
                        arr_17 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)3)) ? (max((((/* implicit */unsigned long long int) var_14)), (var_12))) : (((/* implicit */unsigned long long int) 2443030625U)))), (((unsigned long long int) 4123381931002268713ULL))));
                        var_25 = min((((/* implicit */unsigned int) ((_Bool) 14510198403373045333ULL))), (8388600U));
                        arr_18 [i_1] [i_2] = ((/* implicit */unsigned int) var_0);
                    }
                }
                var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((/* implicit */int) ((-6881830386128416753LL) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))) / (min((29360128LL), (((/* implicit */long long int) var_13))))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                {
                    var_27 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_0)) == (((/* implicit */int) (short)-32534)))));
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)12083))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                    for (short i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
                    {
                        arr_29 [i_6] [i_9] [i_7] [i_6] [5] [4LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 5218976355217451281ULL)))))));
                        arr_30 [i_0] [i_1] [i_6] [i_9] = ((/* implicit */int) var_2);
                        arr_31 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 255LL))));
                    }
                }
                for (short i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 8388579U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_6)))))) : (8388598U))));
                    arr_34 [(_Bool)1] [4ULL] [i_6] [i_10] = ((/* implicit */signed char) ((_Bool) (short)-17502));
                }
                for (short i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        arr_41 [i_0] [i_0] [i_11] [i_12] = ((/* implicit */long long int) (signed char)-7);
                        arr_42 [i_0] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                        var_31 = (!(((/* implicit */_Bool) (short)32767)));
                        var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) || (((/* implicit */_Bool) var_7))));
                    }
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
                    arr_43 [i_11] [i_6] [(short)11] [i_0] = ((/* implicit */int) ((4123381931002268704ULL) >> (((((/* implicit */int) (short)1792)) - (1791)))));
                }
                for (short i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    arr_46 [i_0] [i_1] [i_6] [i_13] = ((/* implicit */unsigned long long int) ((long long int) ((long long int) var_9)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) 3504071519U)) ? (4123381931002268700ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127)))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-1005492035) : (((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (951964725U)));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        var_36 += ((/* implicit */short) ((((/* implicit */int) (short)-19283)) ^ (((/* implicit */int) (signed char)-70))));
                        arr_54 [i_0] [i_1] [i_6] [i_15] [i_16] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) < (4123381931002268700ULL)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                        arr_55 [i_0] [i_1] [(signed char)10] [i_16] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)85))));
                    }
                    arr_56 [i_0] [(signed char)15] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_3))))) ? (((var_9) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)122))) % (5891904285404678829LL))))));
                }
                /* vectorizable */
                for (long long int i_17 = 1; i_17 < 19; i_17 += 1) 
                {
                    var_37 = ((/* implicit */unsigned long long int) var_15);
                    var_38 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) 396136436)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))) : (var_12))) : (((/* implicit */unsigned long long int) var_15))));
                    var_39 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)122)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_6))));
                }
                /* vectorizable */
                for (short i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) * (((long long int) var_1))));
                    var_41 = ((/* implicit */unsigned long long int) var_15);
                }
                var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((var_12) / (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))));
            }
        }
        var_43 += ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) % (var_5)))) ? (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-13301)))) : (((((/* implicit */int) (short)56)) / (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 3) 
        {
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 21; i_20 += 1) 
            {
                for (short i_21 = 2; i_21 < 20; i_21 += 2) 
                {
                    {
                        var_44 = ((/* implicit */signed char) var_2);
                        arr_69 [i_21 + 1] [i_21 + 1] [i_20] [16U] [i_0] [12U] = ((/* implicit */_Bool) (-((~(var_7)))));
                        var_45 = ((/* implicit */signed char) (~(max((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 3U)))), (((/* implicit */unsigned long long int) ((int) 0ULL)))))));
                    }
                } 
            } 
            arr_70 [20ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_6))))))) ? (((((((var_15) + (2147483647))) >> (((var_4) - (2177754284U))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) : (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) * (((/* implicit */int) (signed char)-13))))));
            arr_71 [i_19] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-8192)))) < ((-(((/* implicit */int) (signed char)-37))))))), (var_7)));
            arr_72 [i_0] = ((/* implicit */short) (_Bool)1);
        }
        var_46 = ((/* implicit */short) (signed char)96);
        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) (((-(var_15))) == (((int) var_10)))))));
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        var_48 = (_Bool)0;
        var_49 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)18)) / (((/* implicit */int) (unsigned char)255))))) ? ((+(3775661656U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (15187740548461298248ULL)))));
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_50 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)32759)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (var_15)))), (var_12)))));
                        var_51 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) var_13)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 4) 
                        {
                            var_52 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (var_11)))), (((long long int) var_10))));
                            var_53 = ((/* implicit */unsigned int) var_11);
                            var_54 = ((/* implicit */short) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) ((short) (+(((/* implicit */int) var_3))))))));
                            arr_86 [(short)15] [i_22] [6U] [i_22] [i_24] [i_22] [i_22] = ((/* implicit */unsigned int) var_13);
                            var_55 += ((/* implicit */signed char) ((((((/* implicit */int) var_6)) + (2147483647))) >> ((((-(((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) var_15)))))) - (14201258528865607138ULL)))));
                        }
                        var_56 += ((/* implicit */unsigned int) (signed char)-16);
                    }
                    /* vectorizable */
                    for (short i_27 = 0; i_27 < 20; i_27 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (int i_28 = 0; i_28 < 20; i_28 += 4) 
                        {
                            arr_91 [i_22] [i_23] [i_23] [i_22] [17U] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                            var_57 = ((/* implicit */int) ((17029292889361806999ULL) == (((/* implicit */unsigned long long int) -1))));
                        }
                        for (int i_29 = 0; i_29 < 20; i_29 += 3) 
                        {
                            var_58 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                            arr_96 [i_23] [i_22] [i_22] [i_23] [i_22] = ((/* implicit */_Bool) ((int) var_10));
                        }
                        for (signed char i_30 = 0; i_30 < 20; i_30 += 2) 
                        {
                            var_59 = ((/* implicit */int) (!(((/* implicit */_Bool) 9928573821028310485ULL))));
                            var_60 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) var_13))));
                        }
                        for (unsigned int i_31 = 0; i_31 < 20; i_31 += 2) 
                        {
                            var_61 = 1892174960758939518ULL;
                            var_62 = ((/* implicit */int) ((unsigned long long int) ((long long int) var_11)));
                            var_63 *= ((/* implicit */unsigned long long int) ((unsigned int) 519305640U));
                        }
                        arr_102 [i_22] = 576179277326712832ULL;
                    }
                    for (short i_32 = 0; i_32 < 20; i_32 += 2) /* same iter space */
                    {
                        arr_105 [13LL] [i_23] [i_23] [(_Bool)1] [i_32] [i_22] = ((/* implicit */long long int) ((unsigned char) var_6));
                        var_64 = ((/* implicit */short) 896);
                        var_65 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) (short)-28583))) + (2147483647))) >> (((/* implicit */int) (!((!(((/* implicit */_Bool) var_15)))))))));
                        var_66 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                    var_67 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)24))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_33 = 1; i_33 < 17; i_33 += 3) 
        {
            for (unsigned long long int i_34 = 0; i_34 < 20; i_34 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        for (signed char i_36 = 0; i_36 < 20; i_36 += 4) 
                        {
                            {
                                arr_116 [i_22] [15U] [15U] [i_35] [i_36] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))));
                                arr_117 [i_22] [i_36] = ((/* implicit */short) max((((/* implicit */unsigned int) var_11)), (((var_9) ? (((unsigned int) (unsigned char)193)) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)50)) - (773553925))))))));
                                arr_118 [i_22] [(unsigned char)0] [i_34] [i_22] [(signed char)5] [(signed char)0] = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    var_68 += ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 4065268091U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) : (951964734U))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
        {
            /* LoopNest 3 */
            for (short i_38 = 0; i_38 < 20; i_38 += 1) 
            {
                for (signed char i_39 = 3; i_39 < 19; i_39 += 2) 
                {
                    for (long long int i_40 = 0; i_40 < 20; i_40 += 4) 
                    {
                        {
                            var_69 = ((/* implicit */_Bool) (unsigned char)145);
                            arr_130 [i_22] [i_37] [i_37] [i_37] [i_22] = ((/* implicit */short) var_13);
                            var_70 = ((/* implicit */short) (((-((~(var_11))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (short)128))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_41 = 0; i_41 < 20; i_41 += 2) 
            {
                for (short i_42 = 0; i_42 < 20; i_42 += 2) 
                {
                    {
                        arr_135 [4] [i_37] [i_37] [i_37] [i_22] [i_37] = ((/* implicit */unsigned long long int) var_9);
                        var_71 = ((/* implicit */signed char) (+((~((-(3653374909946550241LL)))))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) /* same iter space */
    {
        arr_138 [i_43] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 520192))) ? (max((((/* implicit */long long int) (short)19072)), (3653374909946550241LL))) : (((/* implicit */long long int) min((var_2), (4277027794U))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) ((268435455ULL) & (((/* implicit */unsigned long long int) 442227415))))))));
        var_72 = ((/* implicit */short) min((var_72), (((/* implicit */short) (-(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) ((unsigned char) 14639724610506801348ULL))))))))));
        arr_139 [i_43] [i_43] = ((/* implicit */signed char) var_14);
        var_73 = ((/* implicit */unsigned long long int) (+(min((-7334973055386450138LL), (18014398509481983LL)))));
    }
    var_74 = ((/* implicit */_Bool) max((773553918), (((/* implicit */int) var_9))));
}
