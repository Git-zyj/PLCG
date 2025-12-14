/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23731
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    var_11 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) 0ULL)) ? (var_2) : (var_2))), (((/* implicit */unsigned long long int) (+(1019047522)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((-(var_8))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25593)) || (((/* implicit */_Bool) 10))))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */int) 13LL);
                    var_13 = ((/* implicit */_Bool) ((long long int) min((var_9), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1 + 1])))));
                    arr_9 [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned short)39943)), (12))), (min((((/* implicit */int) (unsigned short)24263)), (max((-1543508453), (var_8)))))));
                }
            } 
        } 
        var_14 = ((/* implicit */int) arr_3 [8LL]);
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_15 = ((/* implicit */signed char) var_1);
        var_16 = ((/* implicit */short) 8191LL);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
        var_18 = ((/* implicit */_Bool) ((0ULL) - (((/* implicit */unsigned long long int) (+(-13LL))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_3))));
                        arr_25 [(unsigned short)9] [i_4] [i_6] [4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_4] [i_7] [i_6] [i_7] [i_4])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)41267)) : (((/* implicit */int) arr_17 [(_Bool)1])))) : (((((/* implicit */_Bool) arr_23 [i_4] [i_4] [(_Bool)1] [i_7] [i_7])) ? (0) : (var_8)))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15268)) ? (var_3) : (((/* implicit */int) arr_17 [i_4])))))));
                    }
                } 
            } 
            arr_26 [i_5] [i_5] [i_4] = ((short) arr_11 [i_5] [i_4]);
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 7; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 6; i_9 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_10 = 2; i_10 < 7; i_10 += 4) /* same iter space */
                        {
                            arr_33 [i_4] [i_4] [i_8] [i_8] [i_4] [i_9 + 3] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-24882))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) (unsigned short)39943)) : (1019047531)))) ? (((/* implicit */int) arr_14 [i_5] [i_10 - 2])) : (((/* implicit */int) ((signed char) var_1)))));
                        }
                        for (long long int i_11 = 2; i_11 < 7; i_11 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) ((((var_8) / (((/* implicit */int) (unsigned short)25593)))) | (((((/* implicit */int) (unsigned short)25607)) + (11)))));
                            var_23 += ((/* implicit */long long int) arr_32 [i_8 - 3] [i_9 - 1] [2LL] [i_11] [i_11] [i_11 + 2]);
                        }
                        for (long long int i_12 = 2; i_12 < 7; i_12 += 4) /* same iter space */
                        {
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (var_9) : (((/* implicit */unsigned long long int) var_0))))) ? (((unsigned long long int) var_8)) : ((-(var_2))));
                            var_25 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (signed char)0)))))));
                        }
                        var_26 = ((((((/* implicit */int) arr_17 [i_4])) % (((/* implicit */int) (unsigned short)39943)))) < (((/* implicit */int) var_1)));
                        var_27 = ((/* implicit */int) (signed char)52);
                    }
                } 
            } 
        }
        for (unsigned short i_13 = 1; i_13 < 8; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 2) 
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((-1733427241889910456LL), (((/* implicit */long long int) arr_38 [i_16] [i_13 - 1] [i_14] [i_13 - 1] [i_4])))), (((/* implicit */long long int) ((unsigned short) var_1)))))) ? ((-(((/* implicit */int) (unsigned short)21265)))) : (((((/* implicit */_Bool) arr_51 [6ULL] [i_13 + 2] [2ULL] [i_4] [i_16 + 1] [i_16 - 1] [i_16])) ? (((/* implicit */int) (unsigned short)25607)) : (((/* implicit */int) arr_51 [i_4] [i_13 + 1] [i_16] [i_4] [i_16 - 1] [i_16 - 1] [i_16]))))));
                            arr_53 [(short)4] [(short)4] [i_4] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_5);
                        }
                        for (long long int i_17 = 1; i_17 < 9; i_17 += 4) /* same iter space */
                        {
                            var_29 = var_9;
                            var_30 = ((/* implicit */_Bool) var_5);
                            var_31 = (+(((arr_7 [i_4] [i_17 + 1]) & (arr_7 [i_4] [i_17 + 1]))));
                            arr_57 [i_4] [i_4] [6] [i_4] [i_15] [9ULL] = ((((((/* implicit */_Bool) (unsigned short)37700)) ? (576179277326712832ULL) : (((/* implicit */unsigned long long int) arr_11 [i_13] [i_13])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) -7523202552264850851LL)), (((/* implicit */unsigned short) ((13ULL) <= (((/* implicit */unsigned long long int) var_7))))))))));
                            var_32 ^= ((/* implicit */short) max((((/* implicit */long long int) ((signed char) arr_51 [0ULL] [i_13 + 2] [i_13 + 2] [i_15] [(unsigned short)4] [i_14] [i_14]))), (((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_4] [i_13 + 2] [i_14] [i_14] [(unsigned short)2] [i_4] [(short)6])))))));
                        }
                        for (long long int i_18 = 1; i_18 < 9; i_18 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */long long int) ((max((arr_2 [7ULL]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_13] [i_13] [i_18]))))))) != (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)51)), ((unsigned short)31593))))));
                            var_34 = ((unsigned long long int) arr_22 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18]);
                        }
                        var_35 = ((((/* implicit */_Bool) (+((+(var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17139)) - ((-(((/* implicit */int) (signed char)-45))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_17 [i_15]))))), (((unsigned long long int) arr_30 [i_15] [i_15] [i_14] [i_4] [i_4])))));
                        var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_56 [i_4] [i_13] [i_14] [i_15] [i_4] [i_14] [i_14]) << (((var_3) - (240318855)))))) && (((/* implicit */_Bool) var_9)))) && ((!(((/* implicit */_Bool) var_7))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                for (short i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        {
                            var_37 = 11137607865763060879ULL;
                            arr_67 [i_4] = (-(max((((/* implicit */int) arr_18 [9LL] [i_4] [i_4])), (((((/* implicit */int) (unsigned short)25607)) << (((var_2) - (14482158236836018953ULL))))))));
                            var_38 = ((/* implicit */unsigned char) ((int) min((((/* implicit */long long int) max((((/* implicit */int) arr_17 [i_4])), (arr_61 [i_4] [i_19] [i_20] [i_21])))), (var_0))));
                        }
                    } 
                } 
            } 
            arr_68 [i_4] [i_4] = (-(1377115025));
        }
        for (signed char i_22 = 0; i_22 < 10; i_22 += 2) 
        {
            arr_71 [i_4] [i_4] = arr_2 [i_22];
            var_39 = ((int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_51 [i_22] [(_Bool)1] [2ULL] [i_4] [i_4] [i_4] [i_4])));
        }
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned short) max((((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_23])) && (((/* implicit */_Bool) arr_63 [i_23] [i_23] [i_23] [i_23]))))), (var_2)));
        var_41 = ((/* implicit */unsigned long long int) var_7);
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (unsigned char i_25 = 2; i_25 < 8; i_25 += 1) 
            {
                {
                    arr_81 [i_23] [i_24] = ((/* implicit */short) var_0);
                    var_42 = ((/* implicit */unsigned long long int) arr_75 [i_24] [i_23]);
                    /* LoopSeq 1 */
                    for (signed char i_26 = 0; i_26 < 10; i_26 += 4) 
                    {
                        var_43 = ((/* implicit */_Bool) (((!(arr_35 [i_25] [i_25 - 2] [i_25 + 1] [i_25] [i_23]))) ? (((/* implicit */int) (unsigned short)33955)) : (((int) (!(((/* implicit */_Bool) var_4)))))));
                        var_44 &= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_40 [i_25 + 2] [i_26] [i_25 - 1] [i_26] [i_25 - 1])) / (var_7))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(12)))))))));
                        var_45 = ((/* implicit */_Bool) min((((int) var_2)), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)24))))));
                        /* LoopSeq 2 */
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            arr_88 [i_25] [i_25] [i_25] [i_23] = ((/* implicit */int) (signed char)64);
                            var_46 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39923)) ? (max((((/* implicit */int) arr_76 [i_26])), (((((/* implicit */int) (_Bool)1)) - (35))))) : (((/* implicit */int) min((arr_55 [i_25 + 1] [i_25 + 2] [i_25 - 1] [i_26] [i_25 + 2]), (((/* implicit */short) arr_18 [i_25 + 2] [i_26] [i_25 - 1])))))));
                        }
                        for (unsigned long long int i_28 = 2; i_28 < 8; i_28 += 4) 
                        {
                            var_47 = ((/* implicit */signed char) var_3);
                            var_48 = ((/* implicit */unsigned long long int) var_1);
                            var_49 = ((/* implicit */unsigned long long int) ((int) arr_61 [i_23] [i_25] [i_26] [i_28 + 1]));
                        }
                    }
                    var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) (short)14963)) : (2147483647))) >> (((((long long int) 14378254461805556056ULL)) + (4068489611903995574LL))))))));
                    var_51 = 929861357;
                }
            } 
        } 
        var_52 = -128495625;
    }
}
