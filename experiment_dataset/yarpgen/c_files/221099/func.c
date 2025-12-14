/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221099
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(unsigned char)9]))))) ? (((/* implicit */int) var_8)) : ((+(74239663)))))) ? (arr_2 [i_0] [17]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) == (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [1U])))))))))));
        arr_3 [i_0] |= arr_0 [i_0];
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((_Bool) 74239677));
        arr_6 [i_1] = ((/* implicit */long long int) ((int) 1125899898454016ULL));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) 1210411747)) : (var_9)))) ? (-74239665) : (((/* implicit */int) ((signed char) var_4)))));
            var_14 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))) : (3964953441316100034LL)));
            /* LoopSeq 3 */
            for (signed char i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                var_15 = ((/* implicit */int) ((((/* implicit */int) var_0)) > (471461974)));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (unsigned short)2789))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_2] [i_1]))))))));
                    arr_16 [(unsigned char)4] [i_2] [i_2] [i_1] = (!(((/* implicit */_Bool) arr_2 [i_2] [(unsigned short)13])));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned long long int) arr_7 [10ULL] [i_2] [i_3 + 1]);
                        arr_19 [i_1] [8ULL] [i_3] [10ULL] [i_4] [10ULL] [i_3] = ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) var_6))));
                        arr_20 [5ULL] [i_1] [5ULL] [i_3] [i_4] [5ULL] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) -49331590))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : (((((/* implicit */_Bool) (signed char)-82)) ? (arr_12 [i_1] [i_1] [i_3] [i_5]) : (((/* implicit */unsigned int) arr_9 [i_2] [i_1])))));
                    }
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        arr_25 [i_1] [i_2] [i_1] [i_2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_24 [i_6] [i_6] [i_1] [i_4] [i_1] [(_Bool)1] [i_1]);
                        var_19 = ((/* implicit */unsigned char) (+(var_9)));
                    }
                    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned char)7] [i_3] [i_2] [i_1] [i_1]))) >= (var_11))))));
                }
            }
            for (signed char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) (unsigned short)61904);
                arr_29 [i_1] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_24 [i_1] [(short)9] [i_1] [i_7] [i_7] [(unsigned char)1] [i_7])) : (((/* implicit */int) (signed char)49)))) | ((~(-74239673)))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_7] [i_2])) ? (((/* implicit */int) arr_27 [i_1] [i_7])) : (((/* implicit */int) arr_27 [i_1] [i_7]))));
            }
            for (signed char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
            {
                arr_33 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [i_1] [i_2] [i_1]))));
                var_23 = ((((/* implicit */_Bool) 74239674)) ? (((/* implicit */int) (_Bool)1)) : (-593240681));
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    var_24 ^= ((/* implicit */unsigned long long int) arr_27 [i_2] [i_9]);
                    arr_38 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */long long int) var_4);
                    /* LoopSeq 4 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        arr_41 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) ? ((+(11450783395501577047ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_1] [(unsigned char)10]))));
                        var_25 = ((/* implicit */unsigned long long int) var_11);
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_44 [9] [i_1] [i_9] [i_8] [i_1] [9ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(274877906943ULL)))) ? (((/* implicit */int) (short)20935)) : (((/* implicit */int) var_8))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (signed char)-10)))))));
                    }
                    for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_1] [i_2] [i_2] [i_9])) ? (((/* implicit */int) arr_30 [i_1] [i_2] [i_8] [i_12])) : (((/* implicit */int) arr_30 [i_1] [i_8] [i_9] [i_12]))));
                        arr_47 [(_Bool)1] [i_9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_11);
                        arr_48 [i_1] [(_Bool)0] [(_Bool)0] [i_1] [i_1] = ((/* implicit */short) (signed char)-94);
                        arr_49 [(unsigned short)8] [i_2] [i_1] [i_8] [(_Bool)1] [i_12] = ((/* implicit */int) (short)21290);
                        arr_50 [i_1] [(short)8] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -31)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) : (var_10)))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) : (5865085623005347274ULL)))));
                    }
                    for (signed char i_13 = 3; i_13 < 10; i_13 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_34 [i_13 - 3] [i_13] [i_13 - 3] [(unsigned char)3] [9])) : (var_1)));
                        arr_54 [i_1] [9] [i_8] [i_9] [i_1] = ((/* implicit */long long int) var_5);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12581658450704204341ULL))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) (short)-3181)) : (((/* implicit */int) var_2))))));
                        var_30 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (1801824597104578079LL)));
                    }
                }
                for (long long int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                {
                    var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_1] [8ULL])) ? (-153466055) : (((((/* implicit */_Bool) var_6)) ? (771738442) : (((/* implicit */int) var_6))))));
                    var_32 = var_6;
                    var_33 = ((/* implicit */unsigned int) arr_5 [i_1]);
                }
                for (unsigned int i_15 = 2; i_15 < 9; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_34 -= ((/* implicit */long long int) arr_31 [i_15] [i_15] [i_15]);
                        arr_61 [i_1] [i_1] = (+(((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-21027)))));
                        var_35 = ((unsigned char) arr_14 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 2] [i_16]);
                        arr_62 [i_1] [i_1] = ((/* implicit */signed char) arr_35 [i_15 - 2] [i_15 - 2] [i_1] [i_15 - 2]);
                    }
                    var_36 = ((/* implicit */unsigned short) -8088675182476391499LL);
                    var_37 -= ((/* implicit */signed char) var_5);
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 2; i_17 < 10; i_17 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_15 + 1] [i_15 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [(signed char)1] [i_8])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((((/* implicit */int) (short)-32764)) - (((/* implicit */int) (signed char)-13))))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_23 [i_1] [7ULL] [i_8] [i_8] [i_17]))))) > (var_4)));
                        arr_65 [(unsigned short)5] [i_8] [i_15 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_2] [9U] [i_1] [(signed char)6])) ? (((/* implicit */int) arr_42 [i_1] [i_2] [i_1] [i_2] [i_15 + 1] [i_1] [7])) : (((/* implicit */int) arr_55 [i_1] [i_2] [i_1] [i_15]))));
                        var_41 = ((/* implicit */signed char) (~((-(((/* implicit */int) (short)-32557))))));
                    }
                }
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_1] [i_8])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))));
            }
        }
        for (int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_19 = 2; i_19 < 10; i_19 += 2) 
            {
                var_43 = var_4;
                var_44 = ((/* implicit */unsigned int) 1801824597104578102LL);
                arr_70 [i_1] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12713)) != (((/* implicit */int) (short)-3168))));
                var_45 ^= ((/* implicit */int) 7658792096111409128LL);
            }
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_18] [i_20])) ? (((/* implicit */int) arr_55 [6U] [i_20 - 1] [i_1] [i_20])) : (((((/* implicit */_Bool) arr_72 [i_1] [i_1] [(unsigned char)10] [i_1])) ? (var_1) : (((/* implicit */int) arr_8 [i_1] [i_1]))))));
                var_47 = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_1] [i_1]))));
                arr_73 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1])) && (((/* implicit */_Bool) var_5))));
                arr_74 [i_1] [i_18] [i_1] [i_20] = ((/* implicit */unsigned short) var_3);
            }
            arr_75 [i_1] [(unsigned short)8] = ((/* implicit */unsigned char) ((((arr_58 [i_1] [i_18] [i_18] [i_1]) & (var_3))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_36 [(_Bool)1] [(unsigned short)5] [i_18] [i_18])) > (((/* implicit */int) var_5))))))));
        }
    }
    var_48 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) % (var_3))) >= ((((_Bool)1) ? (((/* implicit */unsigned int) -224118056)) : (608156002U))))))));
    var_49 = ((/* implicit */short) (-(((max((var_4), (((/* implicit */unsigned long long int) (short)25773)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
    /* LoopSeq 1 */
    for (long long int i_21 = 2; i_21 < 18; i_21 += 3) 
    {
        var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-74239664) + (2147483647))) >> (((((/* implicit */int) (unsigned short)7957)) - (7942)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((+(min((2147483647), (((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 1 */
        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) 
        {
            arr_82 [i_21] = (short)-8880;
            arr_83 [i_21] = ((/* implicit */signed char) var_7);
        }
    }
}
