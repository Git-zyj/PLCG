/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42263
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
    var_12 = var_1;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */signed char) ((max((((/* implicit */long long int) var_1)), ((~(arr_1 [(unsigned short)2] [i_0]))))) % ((((-(arr_1 [10U] [i_0]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) var_11)))))))));
        var_14 ^= (+(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_0 [i_0])))))));
        var_15 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)255)))) + (var_0)))), (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) 1437836617U)) : (arr_1 [i_0] [i_0])))) : (max((var_10), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((unsigned int) arr_4 [i_1] [7]));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_1] [i_2])))))))));
                }
            } 
        } 
        var_18 &= ((/* implicit */unsigned short) ((unsigned long long int) 2857130678U));
        var_19 = ((/* implicit */unsigned int) (-((+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_4 [i_1] [i_1]))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_3 [(unsigned short)4] [(unsigned short)4]))));
        var_21 = ((/* implicit */int) max((((long long int) (_Bool)1)), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (2857130678U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))))));
    }
    var_22 = ((/* implicit */short) var_2);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_23 = ((((/* implicit */_Bool) (~(var_10)))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (unsigned char)157))));
        var_25 = ((/* implicit */_Bool) arr_9 [(_Bool)1] [i_4] [19] [(unsigned char)3]);
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */int) var_8);
        var_27 = ((/* implicit */int) var_10);
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) -9201482398616003299LL))))))));
        var_29 = ((/* implicit */unsigned long long int) var_1);
    }
    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) (unsigned char)159);
        var_31 = var_5;
        var_32 = ((/* implicit */unsigned short) ((signed char) (signed char)49));
        var_33 = ((/* implicit */unsigned char) arr_18 [i_6]);
    }
    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        var_34 = ((/* implicit */signed char) var_10);
        var_35 ^= var_3;
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                {
                    var_36 = ((((/* implicit */_Bool) arr_10 [(short)7] [i_9] [i_9])) ? ((~(arr_10 [i_8 + 1] [i_9] [i_8 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)121)) ? (arr_11 [i_9] [i_9]) : (((/* implicit */long long int) arr_18 [i_8 + 3]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        var_37 = ((/* implicit */int) arr_10 [16U] [i_9] [16U]);
                        var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_10 - 1])))))));
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_11] [i_11])) ? (((/* implicit */int) arr_25 [i_8] [i_8 + 2])) : (arr_30 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 2])));
                    }
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_10 + 1] [i_8 + 1])) && (((/* implicit */_Bool) arr_14 [i_10 + 1] [i_8 - 1]))));
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_12] [i_10 + 1] [i_8 + 2])) <= (((/* implicit */int) arr_6 [i_8 - 2] [i_9] [i_10 - 1])))))));
                        var_42 = (+(arr_15 [i_8 + 2] [i_9]));
                        var_43 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_12] [i_9] [(unsigned char)19])))))));
                        var_44 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_10 + 1]))))) ? (9201482398616003287LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8])))));
                    }
                    var_45 -= ((/* implicit */short) (-((-(((/* implicit */int) var_1))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        var_46 = ((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)134)) : (1027625140)))) / (((((/* implicit */_Bool) arr_0 [i_13])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        var_47 ^= ((/* implicit */unsigned short) 2028874489);
                        var_48 = ((/* implicit */unsigned int) ((unsigned short) 9223372036854775784LL));
                    }
                    for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((short) ((unsigned int) var_1))))));
                        var_50 = ((/* implicit */unsigned int) ((var_10) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_14])))))));
                        var_51 = ((((((/* implicit */_Bool) arr_0 [i_8])) ? (-9201482398616003299LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2330))))) != (-9201482398616003318LL));
                    }
                    var_52 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2857130694U)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned char)35)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                {
                    var_53 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_16]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 2; i_18 < 12; i_18 += 1) 
                        {
                            {
                                var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_17]))));
                                var_55 = ((/* implicit */long long int) ((unsigned char) arr_24 [i_8 - 2]));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
        {
            var_56 = ((/* implicit */unsigned int) 541972590);
            var_57 = ((/* implicit */int) arr_45 [i_8 + 1] [i_19] [i_19] [i_8 + 1]);
            var_58 = ((/* implicit */int) ((-1794927434869911796LL) & (7469638265513721563LL)));
            /* LoopNest 3 */
            for (unsigned short i_20 = 0; i_20 < 13; i_20 += 2) 
            {
                for (unsigned int i_21 = 0; i_21 < 13; i_21 += 1) 
                {
                    for (unsigned short i_22 = 0; i_22 < 13; i_22 += 3) 
                    {
                        {
                            var_59 = (_Bool)1;
                            var_60 &= ((/* implicit */long long int) arr_30 [i_8 + 3] [i_8 + 2] [i_8] [i_8 + 1]);
                            var_61 = ((/* implicit */short) ((_Bool) arr_24 [i_21]));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_23 = 0; i_23 < 13; i_23 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_24 = 2; i_24 < 11; i_24 += 1) 
            {
                var_62 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                var_63 = ((/* implicit */long long int) (-(((int) var_0))));
            }
            for (unsigned int i_25 = 0; i_25 < 13; i_25 += 1) /* same iter space */
            {
                var_64 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [(unsigned char)4]))));
                var_65 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) < (((/* implicit */int) arr_48 [i_8] [i_8 + 3] [(short)8] [i_8 + 1] [10ULL] [i_8] [(short)6]))));
            }
            for (unsigned int i_26 = 0; i_26 < 13; i_26 += 1) /* same iter space */
            {
                var_66 = arr_51 [i_8] [i_23] [(_Bool)1];
                var_67 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1502230063U))));
            }
            var_68 = ((/* implicit */unsigned short) arr_45 [i_8] [i_8 - 1] [(unsigned char)0] [6ULL]);
            var_69 = ((/* implicit */int) arr_63 [(signed char)1] [i_23] [4]);
        }
        for (long long int i_27 = 0; i_27 < 13; i_27 += 3) /* same iter space */
        {
            var_70 -= ((/* implicit */unsigned short) arr_51 [i_8] [i_8] [i_27]);
            var_71 ^= ((/* implicit */short) arr_26 [i_27]);
        }
        for (unsigned short i_28 = 0; i_28 < 13; i_28 += 1) 
        {
            var_72 = ((/* implicit */unsigned short) (~(arr_7 [(short)2] [(short)2])));
            /* LoopSeq 3 */
            for (unsigned int i_29 = 0; i_29 < 13; i_29 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_30 = 0; i_30 < 13; i_30 += 4) 
                {
                    var_73 = (~(((/* implicit */int) var_8)));
                    var_74 = ((/* implicit */unsigned short) (-(arr_27 [i_8 + 1] [i_8 + 1] [i_8 - 2])));
                    var_75 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_61 [i_8 + 3] [i_8 + 1])) & (((((/* implicit */_Bool) (unsigned short)15)) ? (var_0) : (((/* implicit */long long int) arr_56 [i_30] [i_30] [i_29] [i_28] [i_28] [i_8]))))));
                    var_76 = ((/* implicit */int) (~(arr_65 [(signed char)7] [i_8 - 2])));
                }
                for (unsigned int i_31 = 0; i_31 < 13; i_31 += 3) /* same iter space */
                {
                    var_77 *= ((/* implicit */unsigned int) (~(var_3)));
                    var_78 = (((_Bool)1) ? (((/* implicit */int) var_4)) : (-1614707915));
                    var_79 &= ((/* implicit */unsigned int) (((+(var_3))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_8 - 2] [i_28])))));
                    var_80 = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (arr_61 [i_8] [i_8])))) << ((((+(((/* implicit */int) arr_48 [i_31] [10ULL] [i_28] [i_28] [i_28] [i_8] [i_8 + 1])))) - (35316))));
                }
                for (unsigned int i_32 = 0; i_32 < 13; i_32 += 3) /* same iter space */
                {
                    var_81 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_8] [i_8] [i_8 + 1]))));
                    var_82 = ((/* implicit */_Bool) var_3);
                }
                var_83 = ((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_8 - 1] [i_8] [i_8] [i_8] [i_28] [2ULL] [i_29])) / (((1614707914) - (((/* implicit */int) (signed char)-84))))));
            }
            for (int i_33 = 0; i_33 < 13; i_33 += 2) 
            {
                var_84 -= ((/* implicit */unsigned int) (-(-2013733792259641704LL)));
                var_85 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_33] [i_8 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) var_8)) : (arr_18 [3])))) : ((~(var_5)))));
                /* LoopSeq 1 */
                for (unsigned char i_34 = 0; i_34 < 13; i_34 += 2) 
                {
                    var_86 = -1614707931;
                    var_87 = ((/* implicit */unsigned int) min((var_87), (1437836617U)));
                }
                var_88 = ((/* implicit */short) arr_4 [i_33] [i_33]);
            }
            for (unsigned short i_35 = 0; i_35 < 13; i_35 += 3) 
            {
                var_89 = ((/* implicit */int) max((var_89), (((/* implicit */int) (_Bool)1))));
                var_90 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_28] [i_35])) ? (((/* implicit */int) (short)32500)) : ((~(((/* implicit */int) var_8))))));
            }
            var_91 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 9201482398616003318LL))))) * (627922875)));
        }
        var_92 = ((/* implicit */unsigned long long int) (-(arr_36 [2LL] [i_8 - 2] [2LL])));
    }
    for (unsigned long long int i_36 = 2; i_36 < 10; i_36 += 1) /* same iter space */
    {
        var_93 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(arr_16 [i_36]))))))));
        var_94 = ((/* implicit */int) 18106931627814122592ULL);
    }
}
