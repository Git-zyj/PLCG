/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28731
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
    var_17 ^= ((/* implicit */unsigned short) (~((~(var_8)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((-7515093638631243142LL) > (((/* implicit */long long int) -4)))))) < ((+(var_13))))) ? ((-((~(var_8))))) : (((/* implicit */int) var_15))));
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1810596267U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32737))) : (3ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
        /* LoopSeq 4 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) arr_6 [i_1] [i_2] [i_2 - 1]);
            var_21 = ((/* implicit */long long int) arr_6 [i_1] [(unsigned char)6] [i_1]);
            var_22 = ((/* implicit */long long int) var_15);
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 1557471230)) | (arr_9 [i_1])));
            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) var_16)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_25 = ((/* implicit */int) var_3);
            arr_15 [i_1] [i_4] = ((/* implicit */unsigned short) (((+(var_4))) == (var_10)));
            /* LoopNest 3 */
            for (long long int i_5 = 3; i_5 < 11; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) (+((+(17179803648LL)))));
                            var_27 += ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 - 3]))) | (-3331160392065982027LL));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_11))));
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+(((/* implicit */int) var_16)))))));
                        }
                        for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */int) arr_13 [i_4] [i_8]);
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_11)) >= (((18446744073709551612ULL) << (((((/* implicit */int) (unsigned char)156)) - (151)))))));
                            arr_32 [i_1] [i_4] [i_8] &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                            var_33 = ((/* implicit */long long int) (-(arr_4 [i_1])));
                        }
                        var_34 = ((/* implicit */_Bool) ((arr_9 [i_9]) << (((arr_13 [i_9] [i_8]) - (8621623430688723117LL)))));
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 2; i_12 < 12; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                for (long long int i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) (((_Bool)0) ? (2484371029U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1793)))))))))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_13])) - (((/* implicit */int) arr_31 [i_1] [i_12 - 1] [i_12] [i_13] [i_13] [3]))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_36 [i_13]) : (((/* implicit */int) (unsigned char)214)))) : (((/* implicit */int) (signed char)-64))));
                        }
                    } 
                } 
            } 
            arr_44 [(signed char)7] [i_12] [i_12] = ((/* implicit */_Bool) var_10);
        }
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            for (long long int i_17 = 4; i_17 < 10; i_17 += 2) 
            {
                {
                    arr_50 [i_16] [i_16] [i_16] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2113709135)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */int) arr_24 [i_1])))))) : (-7515093638631243123LL)));
                    var_37 |= ((/* implicit */int) ((((51701577824224604LL) >> (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_16] [i_17 + 2] [i_17 - 1])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned char i_19 = 0; i_19 < 13; i_19 += 4) 
            {
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    {
                        var_38 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_20] [i_20] [i_20 + 1] [i_20] [i_20 + 1])) ? (((/* implicit */int) arr_29 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20])) : (((/* implicit */int) arr_29 [0LL] [0LL] [i_20 + 1] [0LL] [i_20]))));
                        arr_58 [i_1] [1] [11LL] [i_18] [(signed char)3] [i_1] = ((/* implicit */signed char) (unsigned char)60);
                        /* LoopSeq 2 */
                        for (signed char i_21 = 0; i_21 < 13; i_21 += 4) 
                        {
                            arr_62 [i_1] [(_Bool)1] [i_19] = ((/* implicit */short) arr_30 [6ULL] [i_20 + 1] [(unsigned char)12] [i_21] [(unsigned char)12]);
                            var_39 ^= ((/* implicit */unsigned int) (+(8996464029023823259LL)));
                        }
                        for (unsigned long long int i_22 = 2; i_22 < 11; i_22 += 2) 
                        {
                            var_40 += ((/* implicit */long long int) 8811270637109916562ULL);
                            var_41 = ((/* implicit */long long int) arr_7 [i_1] [i_1]);
                            var_42 = ((/* implicit */short) ((arr_17 [i_18] [i_20 + 1]) >= (((/* implicit */int) var_5))));
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_23 = 0; i_23 < 13; i_23 += 2) 
                        {
                            var_44 *= (unsigned char)3;
                            var_45 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 4113393105U)) ? (((/* implicit */int) arr_11 [i_1] [i_18] [i_23])) : (((/* implicit */int) (unsigned char)173)))) : (((/* implicit */int) var_14)))))));
                            var_47 = var_8;
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_24 = 0; i_24 < 19; i_24 += 4) 
    {
        arr_71 [i_24] = ((/* implicit */_Bool) (-(arr_69 [i_24])));
        var_48 = ((/* implicit */unsigned char) (+(var_4)));
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 19; i_25 += 2) 
        {
            for (unsigned long long int i_26 = 1; i_26 < 17; i_26 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_27 = 0; i_27 < 19; i_27 += 4) 
                    {
                        for (unsigned long long int i_28 = 2; i_28 < 15; i_28 += 4) 
                        {
                            {
                                var_49 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_82 [i_24] [i_24] [i_24] [i_28 - 2] [i_28]))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_13)))));
                                var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_73 [i_28] [i_24] [i_24]))))), ((+(-2308206879889093925LL)))))) ? (((((/* implicit */_Bool) arr_77 [i_25] [i_25] [i_27])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (arr_72 [(unsigned char)18] [(_Bool)1] [i_26]))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_69 [(unsigned short)11])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) + (arr_68 [i_26 + 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_29 = 0; i_29 < 19; i_29 += 2) 
                    {
                        for (long long int i_30 = 0; i_30 < 19; i_30 += 3) 
                        {
                            {
                                var_51 &= ((/* implicit */unsigned char) (((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_78 [(short)10] [(short)10] [i_26]))) - (var_13))))) - ((-((+(var_13)))))));
                                var_52 -= ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4)) && (((/* implicit */_Bool) -1LL))))) < (var_8))) ? ((-(var_10))) : (((/* implicit */int) (short)15872))));
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_83 [i_24] [i_24] [8] [i_24] [i_24] [i_24] [13])) ? (((/* implicit */int) var_0)) : (var_10)));
                }
            } 
        } 
    }
}
