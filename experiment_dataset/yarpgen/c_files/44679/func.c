/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44679
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
    var_13 = var_7;
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] &= ((/* implicit */unsigned int) ((_Bool) arr_1 [3LL] [i_0 + 1]));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_5 [i_1] [i_0 + 1] [(_Bool)1] &= ((arr_1 [i_0 + 1] [i_0 - 1]) && (arr_1 [i_0 - 1] [i_0 + 1]));
            var_14 = ((/* implicit */unsigned char) var_6);
            var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511))) : (((var_7) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((/* implicit */int) var_5)))))));
            var_17 = ((/* implicit */unsigned int) var_12);
        }
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned long long int) var_6);
            arr_13 [5U] [1ULL] [i_0] = ((/* implicit */unsigned char) var_9);
        }
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65527)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : ((~(4294967295U))))))));
        arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))) : (arr_9 [(_Bool)1] [(unsigned short)0])));
    }
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_0))));
        arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6076424560963540586ULL)) ? (-1001968868550086823LL) : (-1633726732099559078LL)));
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(-1866562407464444414LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 3; i_7 < 15; i_7 += 4) /* same iter space */
            {
                arr_28 [i_5] = ((/* implicit */signed char) var_8);
                var_20 = ((/* implicit */unsigned char) arr_15 [i_6] [i_7]);
                arr_29 [i_7] [i_7] [(unsigned short)8] [i_5] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-10)))) / (((/* implicit */int) ((((/* implicit */_Bool) 1756777284U)) || (((/* implicit */_Bool) (signed char)-1)))))));
                /* LoopSeq 4 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                {
                    var_21 -= var_5;
                    arr_32 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))));
                }
                for (long long int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    var_22 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)58))));
                    /* LoopSeq 4 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_23 += ((/* implicit */unsigned int) var_4);
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((long long int) (unsigned char)94)))));
                        var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1105805945U)) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) (unsigned short)65535))));
                        arr_37 [i_10] = arr_33 [(unsigned short)13] [(_Bool)1];
                    }
                    for (short i_11 = 2; i_11 < 14; i_11 += 2) 
                    {
                        var_26 += ((/* implicit */unsigned long long int) arr_15 [i_6] [i_9]);
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)13888)) : (((/* implicit */int) var_5))))));
                        var_28 += ((/* implicit */unsigned int) ((long long int) arr_19 [i_7 - 2]));
                        arr_40 [i_11] [i_11 + 2] [9ULL] [(unsigned short)9] [(_Bool)1] [(unsigned char)8] = ((/* implicit */signed char) var_5);
                    }
                    for (int i_12 = 1; i_12 < 15; i_12 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        arr_43 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (-9161629385005034690LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)18)))));
                        arr_44 [i_5] [i_5] [i_7] [i_5] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)55892))));
                        arr_45 [i_12 + 1] [(signed char)14] [(signed char)14] = ((/* implicit */unsigned char) ((unsigned long long int) var_11));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        arr_48 [i_5] [i_5] [i_5] [(unsigned short)15] [i_9] [i_13] = ((/* implicit */unsigned char) var_7);
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)24962))))) ? (((((/* implicit */_Bool) (short)-17923)) ? (((/* implicit */int) (unsigned short)65525)) : (-1283321821))) : (((/* implicit */int) (signed char)-106))));
                    }
                }
                for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    var_31 = ((/* implicit */long long int) var_8);
                    var_32 *= ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) arr_38 [i_5] [i_6] [(unsigned short)5] [i_5] [i_14] [i_14]))));
                    arr_51 [(signed char)3] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_14] [i_7 - 1] [i_7 - 3] [(_Bool)1])) ? (((/* implicit */int) arr_26 [i_7 - 3])) : ((~(((/* implicit */int) arr_16 [i_7]))))));
                }
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    arr_54 [14ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (arr_41 [i_5] [i_7 - 1] [11ULL] [i_5]) : (((/* implicit */unsigned long long int) (~(var_4))))));
                    var_34 &= ((/* implicit */int) arr_33 [i_6] [i_15]);
                    arr_55 [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) ((var_7) || (((/* implicit */_Bool) ((unsigned short) arr_33 [(_Bool)1] [i_5])))));
                }
            }
            for (long long int i_16 = 3; i_16 < 15; i_16 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) arr_36 [i_16] [(_Bool)1] [11] [(unsigned short)2] [(_Bool)1]))));
                /* LoopSeq 3 */
                for (unsigned int i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    var_36 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_50 [i_16 - 2] [i_17] [i_16] [i_17] [i_17]))));
                    /* LoopSeq 2 */
                    for (short i_18 = 0; i_18 < 16; i_18 += 4) 
                    {
                        var_37 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_5]))));
                        arr_65 [8U] [i_17] [12LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [3LL] [(unsigned short)8] [i_16 - 2] [3LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_31 [(signed char)4] [(signed char)4] [i_16 - 3] [i_16 - 3])));
                    }
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 1) 
                    {
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_31 [i_5] [i_6] [i_16 - 1] [i_17]) : (arr_31 [i_17] [i_6] [i_16] [i_5])));
                        arr_69 [i_5] [i_5] [i_16] = ((/* implicit */signed char) arr_41 [i_19] [12U] [i_16] [i_6]);
                    }
                }
                for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_21 = 1; i_21 < 15; i_21 += 4) 
                    {
                        arr_74 [i_21] [i_20] [i_16] [(unsigned short)11] [(unsigned short)11] = ((/* implicit */short) arr_57 [i_16] [i_16] [i_6]);
                        var_39 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned char i_22 = 1; i_22 < 15; i_22 += 3) 
                    {
                        var_40 = arr_46 [i_22] [5] [5] [i_6] [i_5];
                        arr_77 [i_5] [i_20] = ((/* implicit */_Bool) var_2);
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (~((+(var_10))))))));
                        arr_81 [(unsigned char)0] [8U] [8U] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_73 [i_16] [i_16] [i_20] [i_16] [i_16 + 1] [i_20] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (arr_41 [i_5] [13LL] [(_Bool)1] [i_23]))))) : (((((/* implicit */_Bool) arr_73 [i_5] [i_5] [i_6] [(unsigned char)4] [9U] [i_23] [(unsigned char)4])) ? (arr_38 [i_5] [i_6] [i_16 - 3] [i_20] [i_23] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_24 = 0; i_24 < 16; i_24 += 1) 
                    {
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (~(((/* implicit */int) var_3)))))));
                        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                        arr_86 [5U] [i_20] [i_16] [i_16 - 3] [(signed char)14] [(signed char)14] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_16 - 2])) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24979)))))));
                    }
                    for (unsigned int i_25 = 0; i_25 < 16; i_25 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                        var_45 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(10649198961629525705ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6915)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10))))));
                        arr_91 [i_5] [i_25] [i_16 + 1] [i_25] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_10)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        var_46 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) 1043156230U)) < (var_4))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_16 - 2] [(_Bool)1] [i_16 - 1])))));
                        var_47 = ((/* implicit */unsigned short) (+(var_11)));
                    }
                    for (unsigned char i_26 = 3; i_26 < 13; i_26 += 1) 
                    {
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_16 - 3])) || (((/* implicit */_Bool) arr_16 [i_16 - 1]))));
                        arr_94 [i_5] [i_6] [i_16] [i_20] [i_5] = (!(((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(unsigned char)3])))))));
                    }
                }
                for (long long int i_27 = 0; i_27 < 16; i_27 += 4) 
                {
                    var_49 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6])) || ((_Bool)1)));
                    arr_98 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_12);
                    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) arr_24 [i_5] [i_5])) ^ (1458331447))) : (((((/* implicit */_Bool) (short)-21757)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)252))))));
                    var_51 += ((/* implicit */unsigned short) arr_73 [i_16 - 3] [(_Bool)1] [i_16] [i_16 - 3] [10U] [i_16] [i_16 - 3]);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_28 = 1; i_28 < 13; i_28 += 1) 
                {
                    var_52 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                    var_53 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                }
                for (unsigned short i_29 = 3; i_29 < 14; i_29 += 4) 
                {
                    var_54 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > ((+(var_4)))));
                    var_55 = ((/* implicit */unsigned short) max((var_55), (var_5)));
                }
            }
            /* LoopSeq 1 */
            for (unsigned int i_30 = 0; i_30 < 16; i_30 += 3) 
            {
                var_56 = ((((/* implicit */_Bool) (unsigned char)141)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21771))));
                arr_109 [i_5] [(short)4] [(short)4] [(short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_97 [i_5] [i_5] [i_6] [i_6] [i_6] [i_30]))) || (((/* implicit */_Bool) var_2))));
            }
        }
        var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) (+((+(max((17144643579779447243ULL), (((/* implicit */unsigned long long int) var_10)))))))))));
    }
    for (unsigned short i_31 = 0; i_31 < 16; i_31 += 1) /* same iter space */
    {
        var_58 *= ((/* implicit */unsigned char) ((((arr_84 [i_31] [3ULL] [i_31] [i_31]) ? (var_6) : (((/* implicit */int) arr_84 [i_31] [15ULL] [i_31] [i_31])))) + (((/* implicit */int) max((arr_84 [(unsigned short)10] [i_31] [i_31] [i_31]), (arr_84 [i_31] [i_31] [i_31] [i_31]))))));
        arr_114 [(unsigned short)3] = ((/* implicit */unsigned short) var_10);
        var_59 -= ((/* implicit */short) var_1);
    }
}
