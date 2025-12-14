/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235669
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
    var_16 = ((/* implicit */_Bool) (+((~(((/* implicit */int) ((unsigned char) var_4)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((((/* implicit */long long int) -1757184951)) - (1813433454183173789LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [2LL])) ? (((/* implicit */int) arr_2 [(_Bool)0])) : (405144442)))))) : (((long long int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1])))))));
        var_18 = ((/* implicit */_Bool) (unsigned short)5574);
        var_19 = ((/* implicit */signed char) ((((unsigned int) 14229792520192774123ULL)) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0])))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_20 |= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_11)))));
                        var_21 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3377812446802718380LL)) ? (((/* implicit */int) arr_10 [i_2])) : (arr_3 [5])))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_4)) ? (1533614187U) : (((/* implicit */unsigned int) -16777216))))))));
                        arr_14 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) > ((+(var_14)))));
                    }
                    var_23 = ((/* implicit */_Bool) var_4);
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_11))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) ((signed char) ((int) 1757184951)));
                                arr_21 [(short)3] [i_2] [(signed char)3] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_12 [i_1] [i_1])))), (((/* implicit */int) (unsigned short)124)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 4; i_8 < 9; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_35 [i_1] [(unsigned char)6] [(unsigned short)4] [(unsigned short)4] [i_8] [i_1] [(unsigned short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (7936660026118849808ULL)));
                            var_26 = ((/* implicit */_Bool) ((short) 2147483645));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (unsigned short)41743))));
            /* LoopSeq 3 */
            for (short i_11 = 2; i_11 < 8; i_11 += 3) /* same iter space */
            {
                var_28 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 4294967295U))) % (((((/* implicit */_Bool) 2179594734U)) ? (1211583955) : (((/* implicit */int) arr_12 [(unsigned short)6] [(short)2]))))));
                var_29 = ((((int) -1143367920)) - (((/* implicit */int) ((short) (signed char)105))));
                var_30 = ((/* implicit */unsigned int) ((signed char) arr_36 [i_11 + 1] [i_1 + 1] [(short)9] [7]));
                var_31 = ((/* implicit */_Bool) ((unsigned short) arr_13 [i_11 + 2] [i_11 - 1] [i_11 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]));
                var_32 = ((/* implicit */unsigned long long int) (+(134217728)));
            }
            for (short i_12 = 2; i_12 < 8; i_12 += 3) /* same iter space */
            {
                var_33 |= ((/* implicit */long long int) (+(632399037)));
                /* LoopSeq 4 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_15);
                    var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (unsigned short)65213)) : ((+(((/* implicit */int) (unsigned short)63950))))));
                    arr_43 [i_1] [i_1] [4ULL] [(unsigned short)5] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_28 [(signed char)1] [i_1])))) ? (arr_26 [i_1 - 1] [0U] [0U]) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)-11)))))));
                }
                for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    arr_47 [i_14] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_20 [i_1 + 1] [i_1 + 1] [i_1] [i_14]);
                    var_35 = ((((/* implicit */int) arr_8 [i_1 + 1] [i_12 - 1] [i_1 + 1])) < (((/* implicit */int) arr_13 [i_1] [i_7] [i_12] [i_14] [(_Bool)1] [i_14])));
                    arr_48 [(unsigned short)2] [i_7] [i_7] [i_1] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [(short)1] [i_14]))) <= (8268589U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))) : (arr_37 [i_1])));
                }
                for (short i_15 = 1; i_15 < 8; i_15 += 1) 
                {
                    var_36 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_13 [i_12 - 2] [(unsigned char)2] [(_Bool)1] [i_12] [i_12 + 2] [(_Bool)1])) - (((/* implicit */int) (unsigned short)62259)))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_46 [i_1] [i_1 - 1] [i_1])) * (((/* implicit */int) arr_9 [i_12 - 1] [i_12 - 2] [i_1 - 1]))));
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) arr_36 [i_15] [(short)9] [i_7] [(signed char)3]))));
                }
                for (short i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    var_39 = ((/* implicit */signed char) ((unsigned char) arr_27 [(short)7] [i_7] [(unsigned short)8] [(short)7]));
                    arr_54 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [(signed char)1] [(_Bool)1] [(short)6] [i_16] [i_16])))));
                }
            }
            for (long long int i_17 = 1; i_17 < 9; i_17 += 2) 
            {
                arr_59 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23941))));
                arr_60 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_17 - 1] [6U] [i_17 - 1]))));
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_36 [i_17] [(unsigned char)5] [2LL] [(unsigned char)5]))))));
            }
            var_41 = ((var_9) && (((/* implicit */_Bool) arr_19 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])));
            /* LoopSeq 3 */
            for (signed char i_18 = 3; i_18 < 8; i_18 += 3) 
            {
                arr_65 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_18 - 2] [i_18 - 1] [i_18 - 2] [i_1])) ? (arr_17 [i_1 - 1] [i_18 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 + 1] [i_18 - 3] [i_18 - 1] [i_18 + 1] [i_1])))));
                var_42 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6947625804459507775ULL))));
            }
            for (int i_19 = 1; i_19 < 8; i_19 += 1) 
            {
                arr_70 [(signed char)0] [8LL] [i_1] [i_7] = ((/* implicit */unsigned short) arr_18 [i_7] [i_7] [i_7] [9] [i_1]);
                var_43 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1262371943)) ? (((/* implicit */int) arr_30 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_10 [i_1 + 1]))));
            }
            for (long long int i_20 = 0; i_20 < 10; i_20 += 1) 
            {
                var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_31 [i_1] [(unsigned char)1] [8]))));
                arr_75 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_1] [i_1 + 1] [i_1 + 1] [i_1]))) : ((((_Bool)1) ? (arr_69 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140)))))));
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        {
                            var_45 = ((/* implicit */short) ((unsigned short) arr_79 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1]));
                            arr_80 [(short)2] [(short)2] [i_1] [5LL] [i_22] = ((/* implicit */unsigned long long int) (short)7877);
                            var_46 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-126)) ? (((arr_34 [i_21] [i_7] [i_21]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8378))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)210)))))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned char) 6823938668006419686ULL);
            var_48 = ((/* implicit */int) max((var_48), (((int) arr_62 [i_1 + 1] [(short)8] [(short)8] [i_1]))));
        }
        var_49 = ((/* implicit */unsigned short) ((_Bool) min((arr_46 [i_1 - 1] [i_1 + 1] [i_1 + 1]), (arr_46 [i_1 + 1] [i_1 - 1] [i_1 - 1]))));
        arr_83 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)45)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_24 = 0; i_24 < 24; i_24 += 1) 
    {
        arr_87 [i_24] [i_24] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_84 [i_24] [i_24]))));
        arr_88 [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_86 [i_24] [i_24])) - (((/* implicit */int) (unsigned char)255))));
    }
}
