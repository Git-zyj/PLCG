/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244219
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((unsigned long long int) ((((_Bool) (unsigned short)31)) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
            arr_9 [i_0] [i_1] = ((/* implicit */_Bool) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) arr_5 [i_1]))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_13 *= ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)46)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) : (10322679068965873164ULL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            arr_12 [i_0] [i_2] = ((/* implicit */_Bool) max(((-(arr_6 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2] [i_0])) >= (((/* implicit */int) var_10)))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 18446744073709551615ULL);
                arr_16 [i_0] = ((/* implicit */unsigned int) ((((_Bool) (!((_Bool)1)))) ? (((((/* implicit */_Bool) (short)22647)) ? (((((/* implicit */int) (unsigned short)62748)) / (((/* implicit */int) (unsigned short)65489)))) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) >= (((/* implicit */int) (signed char)2))))) * (((/* implicit */int) arr_13 [i_0] [i_0] [i_3]))))));
                var_14 = ((/* implicit */short) max((var_6), (min((((/* implicit */long long int) max((arr_7 [i_0] [(signed char)11] [i_3]), (arr_14 [i_0] [i_0] [i_0])))), (arr_11 [i_0] [i_2] [i_3])))));
            }
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_19 [i_0] = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [0ULL] [i_2]))))));
                arr_20 [i_0] [i_0] [i_2] [(unsigned short)6] = ((/* implicit */unsigned int) var_1);
                arr_21 [i_4] [i_4] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-51)) + (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_18 [(signed char)10] [i_2] [i_4])) : (((/* implicit */int) arr_18 [i_0] [i_2] [(_Bool)1])))))));
                var_15 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        arr_34 [i_7] = ((/* implicit */short) arr_25 [i_6]);
                        arr_35 [i_5] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) (unsigned short)127);
                        arr_36 [i_5] [(_Bool)0] [i_7] [i_8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (-2960078247286286471LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22815))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-32659)))));
                        arr_37 [i_5] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_25 [i_5])))) * (((/* implicit */int) arr_24 [i_5]))));
                    }
                } 
            } 
        } 
        arr_38 [i_5] = ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */int) arr_27 [i_5] [i_5] [10LL])) : (((/* implicit */int) arr_24 [i_5]))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_41 [i_9] = ((short) (unsigned short)46);
        var_16 += ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_9]))) + (min((((/* implicit */long long int) arr_23 [i_9])), ((-9223372036854775807LL - 1LL)))))) + (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) >> (((((/* implicit */int) arr_33 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) - (228))))))));
    }
    for (unsigned int i_10 = 1; i_10 < 18; i_10 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) arr_42 [0U]))), ((~((~(13530815892214918826ULL))))))))));
        arr_46 [i_10] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)46)), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [(unsigned char)1] [i_10])) < (((/* implicit */int) arr_45 [i_10 - 1] [15ULL]))))), ((~(3547876644363939935ULL)))))));
        arr_47 [i_10] = ((/* implicit */unsigned char) (short)-4);
    }
    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_12)) >> (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (9223372036854775788LL)))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
    {
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) (short)24152)) << (((/* implicit */int) (_Bool)1))));
        arr_52 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_11])) + (((/* implicit */int) (unsigned short)64097))));
        arr_53 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_11] [i_11])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11] [(unsigned short)1])))));
    }
    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned char) arr_49 [i_12]);
        arr_56 [i_12] = ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_12] [i_12] [i_12]))));
        arr_57 [i_12] [i_12] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_49 [i_12]))))), (var_11))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10)))), (((((/* implicit */int) (unsigned char)165)) * (((/* implicit */int) (unsigned short)38282)))))))))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
    {
        var_22 ^= (!(((/* implicit */_Bool) arr_1 [i_13])));
        arr_61 [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_32 [i_13] [i_13] [i_13] [(_Bool)1] [(signed char)0] [(unsigned char)9]))));
        arr_62 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515))) : (-7453879795535552475LL)));
        var_23 = ((/* implicit */unsigned long long int) arr_24 [i_13]);
    }
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_15 = 3; i_15 < 21; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                {
                    arr_70 [(unsigned char)21] = ((/* implicit */unsigned char) ((((((arr_67 [11ULL]) ? (arr_68 [i_14] [(_Bool)1] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [21LL] [i_16]))))) / (4269929182U))) % (((unsigned int) arr_68 [i_14 + 1] [i_15 + 1] [i_15 - 3]))));
                    var_24 *= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_67 [(short)0])), (((((((/* implicit */_Bool) arr_65 [i_15 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))) * (((/* implicit */long long int) arr_68 [i_14] [i_15] [i_16]))))));
                    var_25 = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (((((/* implicit */_Bool) 4294967295U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) arr_69 [i_14] [i_15]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) 
        {
            arr_73 [(short)18] [i_14] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) >> (((2513468988U) - (2513468974U))))) : (((/* implicit */int) ((_Bool) max((var_6), (((/* implicit */long long int) arr_69 [18LL] [i_17]))))))));
            arr_74 [i_14] [(_Bool)0] = ((/* implicit */short) (_Bool)1);
            /* LoopSeq 2 */
            for (short i_18 = 0; i_18 < 24; i_18 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (unsigned short)1436)), (var_11)))))) * (((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) * ((-9223372036854775807LL - 1LL))))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (signed char)-73))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_84 [12U] [i_20] [i_17] [(short)2] [i_14] = ((/* implicit */short) max((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_71 [i_14])))) << (((/* implicit */int) (!(arr_77 [i_14] [i_14] [i_18]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_14 + 1]))) / (((((/* implicit */_Bool) (unsigned short)8575)) ? (arr_79 [(_Bool)0] [i_17] [i_18] [i_20] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_14])))))))));
                    arr_85 [i_14] [(signed char)13] [i_20] [i_18] [i_20] = ((/* implicit */long long int) min((((/* implicit */int) (!(((_Bool) (_Bool)1))))), ((~(((/* implicit */int) (_Bool)1))))));
                }
                arr_86 [i_18] [i_18] [23U] [i_18] = ((/* implicit */unsigned int) (+(max((((/* implicit */int) var_7)), ((~(((/* implicit */int) (_Bool)1))))))));
            }
            for (unsigned short i_21 = 2; i_21 < 21; i_21 += 1) 
            {
                arr_91 [i_17] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (min((min((((/* implicit */unsigned long long int) var_3)), (arr_88 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31)))));
                arr_92 [i_14] [i_14] [1LL] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)24158)) : (((/* implicit */int) var_1)))))), ((~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_1))))))));
            }
        }
    }
    var_28 |= ((/* implicit */unsigned short) var_3);
    var_29 = ((/* implicit */unsigned short) var_4);
}
