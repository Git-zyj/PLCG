/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21982
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [(unsigned char)16] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_12 ^= ((/* implicit */long long int) ((unsigned long long int) (unsigned short)50090));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) ((signed char) arr_1 [i_0]))));
            arr_5 [i_1] [i_1] [13ULL] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) 1638632993538194512LL))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = (signed char)113;
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 4; i_3 < 18; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) arr_7 [i_0] [i_0] [i_0]))))));
                    var_16 = arr_8 [i_2];
                }
                /* LoopSeq 3 */
                for (unsigned short i_5 = 4; i_5 < 17; i_5 += 1) 
                {
                    arr_18 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_13 [(signed char)7] [i_3 - 4] [i_3 - 4] [18] [i_0])))));
                    var_17 *= ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
                }
                for (signed char i_6 = 3; i_6 < 17; i_6 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) 4202082352066286034LL);
                    arr_21 [i_2] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) (unsigned short)11000)));
                    var_19 = ((unsigned short) (signed char)31);
                    arr_22 [i_2] [i_2] = ((/* implicit */short) (_Bool)1);
                    arr_23 [(unsigned short)7] [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) arr_19 [(unsigned short)16] [i_2] [i_3])));
                }
                for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((_Bool)1))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((unsigned long long int) arr_19 [i_0] [i_0] [(unsigned short)4]))));
                }
            }
            /* LoopSeq 2 */
            for (unsigned int i_8 = 2; i_8 < 17; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    var_22 *= ((/* implicit */unsigned int) arr_13 [i_0] [i_2] [i_0] [i_8] [i_9]);
                    var_23 = ((signed char) (+(((/* implicit */int) ((_Bool) arr_20 [(signed char)1] [i_8])))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((unsigned int) arr_11 [i_9])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        var_25 ^= ((/* implicit */unsigned int) (signed char)98);
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) arr_24 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])));
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_27 *= ((/* implicit */unsigned int) ((unsigned char) arr_16 [i_0] [i_0] [i_0] [i_9] [i_0]));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((unsigned char) (signed char)-122)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) 5LL);
                        arr_39 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((signed char) (+(((unsigned long long int) arr_10 [i_2])))));
                        var_30 = ((/* implicit */_Bool) ((unsigned short) ((signed char) ((int) arr_30 [i_2] [i_2] [11LL] [i_12]))));
                    }
                    for (unsigned int i_13 = 2; i_13 < 18; i_13 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)61))));
                        var_32 = (!(((/* implicit */_Bool) (signed char)69)));
                        arr_43 [i_0] [i_2] [i_0] [i_0] [i_0] [12ULL] = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                        var_33 += ((unsigned long long int) (+((+(((/* implicit */int) (signed char)-118))))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 1; i_15 < 17; i_15 += 1) 
                    {
                        var_34 |= ((long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0])))))));
                        var_35 = (_Bool)1;
                        var_36 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                    }
                    var_37 = ((/* implicit */unsigned short) ((signed char) arr_30 [i_2] [i_2] [i_8] [(signed char)15]));
                    var_38 = ((/* implicit */long long int) arr_45 [i_0] [i_0] [4ULL] [4ULL]);
                }
                arr_50 [12U] [i_2] [i_2] = arr_17 [i_0] [i_2] [i_0] [i_2];
            }
            for (unsigned int i_16 = 4; i_16 < 16; i_16 += 3) 
            {
                /* LoopSeq 3 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_39 = ((/* implicit */unsigned char) arr_1 [i_17]);
                    var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) ((_Bool) arr_10 [i_0])))))));
                }
                for (signed char i_18 = 3; i_18 < 17; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 1) 
                    {
                        var_41 = ((signed char) arr_17 [i_0] [i_2] [i_2] [i_18]);
                        arr_64 [i_0] [i_2] [i_16] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned short) (signed char)107));
                        var_42 = (signed char)69;
                        var_43 = ((/* implicit */unsigned int) ((unsigned char) ((signed char) arr_56 [i_0] [i_2])));
                    }
                    arr_65 [i_0] [(unsigned char)2] [i_2] [i_0] [(unsigned short)0] [(unsigned char)8] = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) arr_53 [i_0] [i_2] [11ULL] [i_2])))));
                }
                /* vectorizable */
                for (unsigned int i_20 = 1; i_20 < 16; i_20 += 3) 
                {
                    var_44 = ((/* implicit */unsigned int) ((unsigned long long int) (!((_Bool)1))));
                    arr_68 [i_0] [i_0] [i_16] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) arr_59 [i_0] [i_0] [i_2])));
                }
                var_45 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)239));
                var_46 ^= ((/* implicit */unsigned int) ((unsigned long long int) arr_3 [i_0]));
            }
        }
        for (signed char i_21 = 2; i_21 < 17; i_21 += 3) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) 3887517581U)))));
            var_48 = ((/* implicit */unsigned int) max((var_48), (((unsigned int) (_Bool)0))));
            var_49 = ((/* implicit */_Bool) arr_24 [i_0] [(unsigned char)17] [(unsigned char)17] [(unsigned char)17] [(unsigned char)17]);
        }
        for (signed char i_22 = 2; i_22 < 17; i_22 += 3) /* same iter space */
        {
            arr_74 [i_22] [i_22] = ((/* implicit */signed char) (unsigned char)163);
            arr_75 [i_0] [i_0] |= ((signed char) ((unsigned long long int) (_Bool)1));
            var_50 = ((/* implicit */unsigned long long int) 67108860U);
        }
        var_51 = ((/* implicit */unsigned int) arr_26 [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_24 = 4; i_24 < 15; i_24 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_25 = 0; i_25 < 16; i_25 += 4) 
            {
                for (unsigned short i_26 = 2; i_26 < 13; i_26 += 2) 
                {
                    {
                        var_52 ^= ((/* implicit */_Bool) 182199307U);
                        var_53 *= ((_Bool) ((unsigned int) (signed char)-35));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_27 = 0; i_27 < 16; i_27 += 4) 
            {
                var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_38 [i_23] [7U] [i_23] [i_27] [i_27])))));
                var_55 = ((/* implicit */long long int) (_Bool)1);
            }
            var_56 = ((/* implicit */int) ((unsigned char) 2594154534U));
        }
        arr_87 [i_23] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)93));
    }
    var_57 = ((/* implicit */unsigned int) var_1);
    var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) ((short) (+(((long long int) var_6))))))));
    /* LoopSeq 4 */
    for (signed char i_28 = 2; i_28 < 17; i_28 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_29 = 4; i_29 < 17; i_29 += 4) 
        {
            arr_95 [i_29] |= ((/* implicit */unsigned short) (unsigned char)185);
            var_59 = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) (+(((/* implicit */int) arr_91 [i_28] [(signed char)2]))))));
            arr_96 [i_29] [(signed char)11] [(signed char)11] = ((/* implicit */long long int) arr_91 [i_28] [i_28]);
        }
        var_60 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_93 [(unsigned short)13] [i_28] [i_28])))));
    }
    for (signed char i_30 = 0; i_30 < 11; i_30 += 3) 
    {
        arr_99 [i_30] = ((/* implicit */_Bool) arr_69 [i_30] [i_30]);
        var_61 = ((/* implicit */long long int) ((unsigned long long int) arr_32 [i_30]));
    }
    for (unsigned short i_31 = 2; i_31 < 12; i_31 += 1) /* same iter space */
    {
        arr_103 [6ULL] |= ((/* implicit */long long int) ((_Bool) (signed char)-24));
        arr_104 [i_31] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_41 [i_31] [i_31]))))))));
    }
    for (unsigned short i_32 = 2; i_32 < 12; i_32 += 1) /* same iter space */
    {
        arr_108 [i_32] = ((/* implicit */short) arr_60 [(unsigned char)11] [i_32] [i_32] [(signed char)16] [(short)0] [(signed char)16]);
        /* LoopSeq 1 */
        for (unsigned short i_33 = 4; i_33 < 14; i_33 += 4) 
        {
            var_62 ^= ((unsigned short) arr_86 [i_33] [(signed char)2] [i_33] [i_33]);
            var_63 = ((/* implicit */unsigned char) (_Bool)0);
            var_64 |= ((/* implicit */unsigned int) ((long long int) arr_19 [i_33] [i_33] [i_33]));
            var_65 ^= ((/* implicit */int) 12ULL);
        }
        arr_111 [i_32] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_32 + 2])))))))));
    }
}
