/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215408
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) : (min((var_17), (((/* implicit */unsigned int) (short)19033)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)19))))) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) (short)13953)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-9056)))))) : (var_5)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [13U]);
        arr_3 [i_0] [i_0] = var_6;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_1 [i_0])));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))))))));
            var_21 = ((/* implicit */_Bool) (short)20842);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                arr_9 [i_0] [i_0] [(_Bool)1] [(short)17] = ((/* implicit */unsigned char) var_3);
                arr_10 [i_1] = arr_8 [13ULL] [i_0] [i_0];
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_5] [10U] [i_0])) ? (((/* implicit */int) (short)9055)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_7 [i_4] [i_3] [7LL] [7LL])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                            arr_18 [(unsigned char)3] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_6 [(short)1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_11))) : (arr_16 [i_5] [i_4] [i_3] [i_1] [(unsigned short)3])));
                        }
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3] [i_4])) ? (arr_1 [(_Bool)1]) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) ((signed char) (unsigned short)0))) : (arr_0 [i_3])));
                            arr_23 [(unsigned char)12] [i_1] = ((/* implicit */short) (unsigned short)12);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [4] [(_Bool)1] [i_1] [i_3] [i_7] [i_7] = ((/* implicit */short) var_7);
                            var_24 ^= ((/* implicit */int) var_3);
                        }
                        /* LoopSeq 4 */
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_30 [i_3] [i_0] = ((/* implicit */unsigned long long int) (-(arr_20 [(short)3] [i_1] [(unsigned char)12] [i_8] [i_8] [i_1] [i_1])));
                            var_25 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)9061)) : (((/* implicit */int) (short)-20)))));
                            var_26 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_28 [i_0] [i_0] [(unsigned short)10] [i_0] [i_0] [i_1]))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_3])) ? (((/* implicit */int) (short)-9056)) : (((arr_15 [i_0] [i_1] [i_3] [i_4] [5]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65518))))));
                            var_28 = ((_Bool) ((short) var_1));
                        }
                        for (short i_9 = 2; i_9 < 16; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -88035609)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_33 [i_0] [i_1] [16LL] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                            arr_34 [16U] [6LL] [10ULL] = ((/* implicit */long long int) 0U);
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65523)))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_31 = ((((/* implicit */_Bool) (unsigned short)65518)) ? ((((_Bool)1) ? (((/* implicit */int) (short)-27)) : (-123229660))) : (((/* implicit */int) (signed char)-88)));
                            arr_38 [6ULL] [i_1] [i_0] [i_10] [i_10] [i_3] = ((/* implicit */int) var_0);
                        }
                        for (unsigned char i_11 = 3; i_11 < 16; i_11 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (~(((((/* implicit */long long int) 4294967295U)) / (var_3))))))));
                            arr_43 [i_11] [i_3] [i_1] [i_11] = var_13;
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1809581575U)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14)))))))));
                        }
                        arr_44 [i_0] [i_3] [(unsigned short)5] = ((/* implicit */unsigned char) ((159934079) <= (((/* implicit */int) arr_41 [(unsigned short)2] [i_4] [i_4] [i_4] [(unsigned short)1]))));
                    }
                } 
            } 
        }
        arr_45 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0]))));
    }
    for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 2) /* same iter space */
    {
        arr_48 [i_12 + 3] [i_12 - 2] = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) (signed char)-75)), ((short)18))))));
        arr_49 [i_12 - 1] = ((/* implicit */_Bool) var_2);
        var_34 *= ((/* implicit */short) var_5);
    }
    for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 4) 
        {
            arr_54 [i_13] [i_13] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_51 [i_13 + 4])) ? (((((/* implicit */int) (unsigned short)37198)) | (((/* implicit */int) var_14)))) : (((/* implicit */int) var_9))))));
            var_35 = ((/* implicit */short) max((var_35), ((short)1769)));
            /* LoopNest 3 */
            for (int i_15 = 3; i_15 < 17; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    for (unsigned int i_17 = 3; i_17 < 18; i_17 += 2) 
                    {
                        {
                            arr_62 [i_13 + 3] [i_15] [i_13] [i_17 + 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_50 [(short)8] [i_14])) ? (arr_50 [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_14] [i_15] [i_16]))))))) < (min((min((2103028099), (((/* implicit */int) var_7)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)10826))))))));
                            arr_63 [i_13] &= ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            arr_67 [i_13] [i_18] |= ((((/* implicit */_Bool) 5909470872739461573LL)) ? (min((8796093022207LL), (((/* implicit */long long int) (short)0)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_51 [i_13 + 1])), (4294967295U)))));
            arr_68 [i_13] [i_18] [i_18] = ((/* implicit */_Bool) 7840900046701520382ULL);
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_20 = 3; i_20 < 18; i_20 += 1) 
            {
                for (unsigned char i_21 = 0; i_21 < 20; i_21 += 1) 
                {
                    {
                        arr_79 [i_13 + 3] [i_20] [i_20 + 1] [i_21] [i_20 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 8683523373111937731ULL)) ? (((/* implicit */int) (unsigned short)65524)) : (min((((/* implicit */int) (unsigned short)57147)), (var_5))))) - (((/* implicit */int) ((127) >= (((/* implicit */int) arr_47 [i_13])))))));
                        arr_80 [i_13] [i_20] [18LL] [i_21] [i_20] = ((/* implicit */_Bool) (signed char)103);
                        arr_81 [i_21] &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (((/* implicit */long long int) arr_73 [i_13] [i_13]))));
                    }
                } 
            } 
            arr_82 [i_13 + 3] [i_19] [(short)10] = ((/* implicit */unsigned int) arr_77 [0U] [(unsigned short)2] [i_13 + 4] [i_13] [i_13] [(short)19]);
            arr_83 [i_13] [i_19] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) ((signed char) (unsigned short)50657))) ? (((/* implicit */int) (unsigned short)8)) : ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) == (5U))))));
            arr_84 [i_13] &= ((/* implicit */long long int) var_17);
            /* LoopSeq 2 */
            for (int i_22 = 2; i_22 < 18; i_22 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 20; i_23 += 2) 
                {
                    for (int i_24 = 1; i_24 < 17; i_24 += 1) 
                    {
                        {
                            arr_92 [i_24] [i_23] [i_19] [i_19] [i_24] = ((/* implicit */long long int) ((unsigned char) arr_53 [18ULL]));
                            arr_93 [i_24] [i_23] [i_22] [i_24] [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                            var_36 *= ((/* implicit */short) 9746278898530350343ULL);
                            var_37 = ((/* implicit */unsigned int) arr_64 [i_24] [(unsigned short)4] [i_24]);
                        }
                    } 
                } 
                arr_94 [i_13] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) (short)24923))));
            }
            /* vectorizable */
            for (int i_25 = 2; i_25 < 18; i_25 += 2) /* same iter space */
            {
                arr_99 [i_13] [14U] = ((((/* implicit */_Bool) arr_77 [i_25 + 1] [i_13] [10LL] [i_13] [i_13] [i_13])) ? (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) 5634407800179840052LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_9)))))));
                /* LoopNest 2 */
                for (long long int i_26 = 4; i_26 < 17; i_26 += 3) 
                {
                    for (signed char i_27 = 0; i_27 < 20; i_27 += 1) 
                    {
                        {
                            arr_106 [i_27] [i_26] [i_25] [i_19] [(unsigned char)17] [i_13 + 1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_27])) ? (((/* implicit */int) arr_102 [i_13 - 2])) : (((/* implicit */int) var_9))))) || ((_Bool)1)));
                            arr_107 [i_19] [i_19] [i_19] [9LL] = ((/* implicit */signed char) ((((/* implicit */int) (short)13961)) - (((/* implicit */int) arr_102 [i_13 + 1]))));
                            arr_108 [i_25] [i_25] [(unsigned char)0] [i_25] [i_25 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [i_25 - 2] [i_25 + 1] [i_13 - 1] [i_13 - 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (long long int i_29 = 0; i_29 < 20; i_29 += 1) 
                    {
                        {
                            var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) : (var_2)))) ? (((long long int) (unsigned short)65535)) : (((((/* implicit */_Bool) var_10)) ? (-1LL) : (((/* implicit */long long int) var_5))))));
                            var_39 *= ((/* implicit */unsigned short) ((signed char) arr_105 [i_13 - 1] [(short)0] [1LL] [i_25 - 2] [i_29]));
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)85))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32763))) - (arr_70 [i_28] [i_13]))))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-9))))) : (4643037727395198184LL))))));
            }
        }
        arr_114 [(unsigned short)7] [5U] |= ((/* implicit */int) (-((((!((_Bool)1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)87)) ? (var_5) : (var_5)))) : (min((1849010564U), (((/* implicit */unsigned int) arr_89 [i_13] [1U] [0U] [i_13]))))))));
        var_42 = ((/* implicit */long long int) var_10);
    }
    for (short i_30 = 1; i_30 < 18; i_30 += 3) 
    {
        var_43 |= ((/* implicit */signed char) max((((((/* implicit */int) (signed char)57)) | (((/* implicit */int) arr_56 [(unsigned short)0])))), (arr_118 [i_30])));
        arr_119 [i_30 + 2] [i_30] = ((/* implicit */short) min(((+(((/* implicit */int) arr_47 [i_30 - 1])))), (((/* implicit */int) (signed char)53))));
    }
    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) var_0))));
    var_45 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (signed char)88))))) ? (var_8) : (((/* implicit */int) max((var_13), ((unsigned char)241))))))) : (((((/* implicit */_Bool) (signed char)-91)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2))))))));
}
