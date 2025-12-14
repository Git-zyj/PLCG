/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54797
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) (~((+(104913884U)))));
        var_21 |= ((/* implicit */short) ((unsigned char) arr_1 [i_0] [i_0]));
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1705850043)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (short)5277)))))));
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) <= (-6224355818410713937LL)))), (0ULL)))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1 - 2] [i_4 + 1] [i_4 + 2]))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1 + 2] [i_4 + 1] [i_4 - 1])))));
                        arr_14 [i_1] [i_3] = ((/* implicit */long long int) min(((+(((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_1 - 2] [i_1])) > (((/* implicit */int) arr_12 [i_1] [i_1] [i_4]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4 - 1])))))));
                        arr_15 [i_1] [i_3] [i_1 + 1] [i_1] = (-(arr_8 [i_1] [i_1] [i_1 + 1] [i_1]));
                    }
                    var_25 = ((/* implicit */int) arr_6 [i_1] [6LL] [6LL]);
                }
            } 
        } 
        var_26 *= ((/* implicit */short) (+((+(arr_8 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 2])))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_9 [i_5 - 1] [i_5] [i_5])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 1; i_6 < 13; i_6 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_19 [i_6]))));
            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_5 + 1]))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 2; i_7 < 13; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            {
                var_30 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_7 - 1] [i_7]))));
                /* LoopNest 3 */
                for (unsigned short i_9 = 1; i_9 < 12; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            {
                                var_31 = (unsigned char)72;
                                arr_36 [i_7] [i_7 + 1] [i_7 + 1] [10LL] [i_7] [i_7 + 1] = ((/* implicit */unsigned long long int) 2704564628U);
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_24 [i_9 + 2]))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_9 [i_8] [i_9 + 3] [i_9 + 3]))))))) : (0ULL)));
                            }
                        } 
                    } 
                } 
                arr_37 [i_7] [i_8] = ((/* implicit */int) (+(((((/* implicit */long long int) arr_10 [i_8] [i_8] [(short)3] [i_8])) | (var_1)))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_33 = ((/* implicit */unsigned char) (!(arr_25 [i_12] [i_12] [i_12])));
        var_34 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_12])) & (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) arr_28 [i_12] [i_12] [i_12])) - (arr_10 [i_12] [i_12] [i_12] [i_12])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_13] [i_13])) ? (arr_32 [i_13] [i_13]) : (arr_32 [i_13] [i_13])));
        arr_42 [i_13] [i_13] = ((/* implicit */signed char) arr_30 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
        var_36 ^= ((/* implicit */unsigned short) (short)-15678);
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) arr_12 [i_13] [i_13] [i_13]))));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_45 [i_14] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_38 = 9223372036854775807LL;
        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) 1994024874U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32587))) : (5101282808954361896ULL)));
        arr_46 [i_14] = ((/* implicit */int) 4149069539U);
    }
    for (unsigned char i_15 = 2; i_15 < 9; i_15 += 3) 
    {
        var_40 = (+(((/* implicit */int) (!(arr_5 [i_15 + 1])))));
        /* LoopSeq 3 */
        for (unsigned short i_16 = 2; i_16 < 7; i_16 += 4) 
        {
            var_41 = ((/* implicit */long long int) (unsigned short)60140);
            var_42 = ((/* implicit */signed char) ((short) arr_31 [2] [i_16 + 2] [2] [(signed char)8] [2]));
            /* LoopSeq 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_54 [(_Bool)0] [i_16] [i_16] [i_16] |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)253))));
                var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)118))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_15])))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (int i_19 = 3; i_19 < 7; i_19 += 4) /* same iter space */
                {
                    var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) -15LL))));
                }
                /* vectorizable */
                for (int i_20 = 3; i_20 < 7; i_20 += 4) /* same iter space */
                {
                    var_46 |= ((/* implicit */unsigned char) (-(arr_61 [i_16])));
                    arr_63 [i_15 + 1] [i_15] [i_15] [i_20] [(short)3] [(unsigned short)6] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_29 [i_15 - 1] [i_16]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_15] [i_15] [i_15 + 1]))) & (var_18)))));
                    var_47 = ((/* implicit */unsigned int) (+(arr_30 [i_15 + 1] [i_15 + 1] [i_16 + 1] [i_20] [i_20] [i_20 + 3])));
                    /* LoopSeq 3 */
                    for (unsigned short i_21 = 0; i_21 < 10; i_21 += 4) 
                    {
                        var_48 = (-(((/* implicit */int) (unsigned short)58485)));
                        var_49 = ((/* implicit */signed char) ((int) (unsigned short)64824));
                        var_50 = ((/* implicit */long long int) ((unsigned short) arr_0 [i_20 - 1] [i_16 - 1]));
                        arr_66 [i_16] [i_15] [i_16] [i_16] [i_16] [i_16 + 2] [i_16] = ((/* implicit */unsigned long long int) (((-(arr_62 [i_18]))) >= (((/* implicit */long long int) (+(var_10))))));
                    }
                    for (unsigned long long int i_22 = 3; i_22 < 8; i_22 += 1) 
                    {
                        var_51 = ((/* implicit */_Bool) ((arr_43 [i_15 + 1]) + (arr_43 [i_15 + 1])));
                        var_52 = ((/* implicit */int) (-(118228495U)));
                        arr_69 [i_15] [i_20] [i_18] [i_20] [i_22 - 3] = ((/* implicit */unsigned int) ((arr_26 [i_16 - 2] [i_18]) >> (((arr_26 [i_15 - 1] [i_18]) - (1759939342)))));
                        var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)58)))))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 3) 
                    {
                        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_15 - 2])) || (((/* implicit */_Bool) var_11))));
                        var_55 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_15]))));
                    }
                }
                for (int i_24 = 3; i_24 < 7; i_24 += 4) /* same iter space */
                {
                    var_56 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_51 [i_15] [i_16 + 3] [i_24 - 3])))));
                    var_57 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-14481))))) ? ((~(-2147483647))) : ((-(((/* implicit */int) (unsigned char)157))))));
                }
                for (int i_25 = 3; i_25 < 7; i_25 += 4) /* same iter space */
                {
                    var_58 = ((/* implicit */short) ((long long int) ((_Bool) arr_6 [i_16 + 2] [i_16] [i_16 + 1])));
                    var_59 = ((/* implicit */signed char) max((-2011136074), (((/* implicit */int) (_Bool)1))));
                    var_60 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(13775624)))) ? (((/* implicit */int) arr_41 [i_18])) : (((/* implicit */int) max((arr_55 [i_15 - 2] [i_16 + 3] [i_25 + 3] [i_25 + 3]), (arr_55 [i_15 - 2] [i_16 + 3] [i_25 + 2] [i_25 - 3]))))));
                    var_61 = arr_11 [i_15] [i_16 + 1] [i_18] [i_15];
                }
                var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) (((-(((/* implicit */int) ((unsigned short) var_5))))) - (((((((((/* implicit */int) arr_12 [i_15] [i_15] [i_18])) + (2147483647))) << (((arr_44 [i_15]) - (886740130))))) - (arr_17 [i_15 - 1]))))))));
                var_63 |= ((/* implicit */signed char) ((int) ((arr_58 [i_15 - 2] [i_16] [i_18] [i_16 + 1] [i_15] [i_18]) + (arr_58 [i_15 - 1] [i_16] [i_18] [i_16 + 3] [i_18] [i_16 + 1]))));
                var_64 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
            }
            for (signed char i_26 = 0; i_26 < 10; i_26 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    for (int i_28 = 3; i_28 < 8; i_28 += 4) 
                    {
                        {
                            var_65 = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
                            arr_83 [i_15] [i_15] [i_15] [i_15 + 1] [i_15] = ((/* implicit */unsigned int) var_1);
                            var_66 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)140))));
                            var_67 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-22466)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_15] [i_15] [i_26] [i_27])))))) : (max((arr_34 [i_16] [i_27] [i_28] [i_28 + 1] [i_28] [i_28]), (((/* implicit */unsigned int) ((int) arr_74 [i_16] [i_16] [i_16])))))));
                            var_68 += ((/* implicit */unsigned long long int) var_19);
                        }
                    } 
                } 
                var_69 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */long long int) ((unsigned short) (unsigned char)243))), (var_0))));
            }
            arr_84 [i_15] [i_16] = ((/* implicit */unsigned short) arr_50 [i_15]);
            var_70 += ((/* implicit */unsigned int) ((((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)171))))))) <= (arr_62 [i_16])));
        }
        for (signed char i_29 = 3; i_29 < 8; i_29 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_30 = 0; i_30 < 10; i_30 += 4) 
            {
                var_71 = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
                /* LoopNest 2 */
                for (unsigned int i_31 = 0; i_31 < 10; i_31 += 3) 
                {
                    for (int i_32 = 0; i_32 < 10; i_32 += 4) 
                    {
                        {
                            arr_97 [i_15] [i_29] [i_29] [i_31] [i_32] = ((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_15 + 1] [i_29 - 2] [i_30] [i_15 + 1] [i_30]))));
                            var_72 = ((/* implicit */short) ((int) arr_4 [i_15 + 1]));
                            var_73 = arr_4 [i_29 - 1];
                        }
                    } 
                } 
            }
            var_74 = ((/* implicit */int) (~((-(arr_3 [i_29 - 3])))));
        }
        for (unsigned long long int i_33 = 0; i_33 < 10; i_33 += 3) 
        {
            var_75 = ((/* implicit */unsigned short) ((((long long int) arr_72 [i_15 - 1] [i_15 - 2] [i_15 + 1] [i_15 - 1])) - ((+(arr_99 [i_15] [i_33])))));
            /* LoopNest 2 */
            for (unsigned char i_34 = 0; i_34 < 10; i_34 += 3) 
            {
                for (signed char i_35 = 0; i_35 < 10; i_35 += 1) 
                {
                    {
                        var_76 = ((/* implicit */long long int) arr_28 [i_33] [i_34] [i_35]);
                        var_77 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_103 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15])))))));
                    }
                } 
            } 
        }
        var_78 = ((/* implicit */unsigned short) ((short) min((4190053421U), (((/* implicit */unsigned int) (short)-28427)))));
        var_79 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0))));
    }
    var_80 = var_18;
}
