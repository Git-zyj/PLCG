/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222156
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                arr_9 [i_2] [(unsigned char)7] [i_0] [i_0] = ((signed char) (!(((/* implicit */_Bool) 0LL))));
                arr_10 [7LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2])) && (((/* implicit */_Bool) arr_8 [i_1] [i_1 - 1] [i_2 - 3] [i_2 - 2]))));
            }
            var_18 = ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1)))))));
            arr_11 [i_0] [(signed char)18] [(short)17] = max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [15LL] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_1] [i_0])) : (((var_10) % (((/* implicit */int) arr_2 [i_0])))))), (((/* implicit */int) ((max((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])), (-1062654318))) > (((/* implicit */int) arr_2 [i_0]))))));
        }
        for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) (-(((int) arr_15 [i_0] [i_0] [i_0]))));
            arr_16 [i_3] = ((/* implicit */unsigned char) -1062654318);
            arr_17 [4U] [i_0] [i_0] = ((unsigned int) ((((/* implicit */_Bool) ((arr_15 [i_0] [i_3] [i_0]) - (var_15)))) && (((/* implicit */_Bool) (-(arr_13 [i_3]))))));
        }
        arr_18 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) ((short) arr_12 [i_0] [i_0] [i_0]))) - (215)))))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_7 [i_0] [(unsigned char)20] [i_0] [i_0])))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [19LL]))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (signed char i_6 = 3; i_6 < 20; i_6 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (+(min((0LL), (((/* implicit */long long int) (unsigned char)213))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_1)), (max((arr_5 [i_6]), (-1062654318)))))))))));
                    arr_28 [i_6] [i_6] [i_4] [i_4] = ((/* implicit */signed char) (-(max(((+(var_3))), (((/* implicit */int) (!((_Bool)1))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 19; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((arr_31 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1]) > (arr_31 [i_4] [i_9 - 1] [i_10] [i_10])));
                        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-6948))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (+(arr_31 [i_7] [i_9 - 1] [i_8] [i_8]))))));
                        var_25 = ((/* implicit */unsigned char) ((int) arr_34 [i_9 - 1]));
                        var_26 = ((/* implicit */unsigned char) arr_20 [i_4]);
                        arr_39 [i_9] = (!(((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_8])));
                        var_27 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1]))));
                    }
                    arr_40 [i_4] [i_7] [i_7] [i_7] &= min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_9] [i_8] [i_7] [i_4])))))) > (min((((/* implicit */long long int) (unsigned short)65535)), (var_8)))))), (min((((/* implicit */unsigned long long int) min((arr_4 [i_4]), (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9] [i_9] [i_9 - 1] [i_9]))) / (arr_36 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9])))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_29 *= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_33 [i_12] [i_7] [i_7] [i_12 - 1]))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_13 = 1; i_13 < 18; i_13 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1410651247624066869LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) arr_13 [i_13 + 1])) : (max((((/* implicit */unsigned long long int) arr_46 [i_4] [i_7] [i_8] [i_12] [13ULL])), (var_14)))))) ? (((/* implicit */int) ((unsigned short) ((unsigned short) var_5)))) : ((+(min((((/* implicit */int) arr_29 [i_4] [4] [4])), (arr_6 [i_4] [9] [11LL])))))));
                        var_31 = min((((/* implicit */int) arr_38 [i_7] [i_8] [(unsigned short)7] [2U] [i_12] [i_12 - 1] [i_12])), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                        arr_47 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_13])) ? ((+((~(var_2))))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (unsigned short)65535)), (1437675860))))))));
                        var_32 *= ((/* implicit */short) 3732084233U);
                        arr_48 [i_4] [(signed char)16] [(unsigned short)5] [i_12 - 1] [i_12] [i_4] [i_8] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_31 [i_8] [i_12 - 1] [i_12 - 1] [i_13]), (((/* implicit */unsigned int) min(((unsigned short)3), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 1; i_14 < 18; i_14 += 4) /* same iter space */
                    {
                        arr_52 [i_4] [i_4] [i_4] [(_Bool)1] [i_4] [i_4] |= ((/* implicit */int) ((long long int) (signed char)74));
                        arr_53 [i_4] [i_7] [i_7] [i_12] [i_12] [(signed char)14] [i_14] = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)27671)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (4294967295U)))));
                        var_33 = (!(((/* implicit */_Bool) var_13)));
                        var_34 = ((/* implicit */unsigned int) arr_35 [i_4] [i_7] [i_4] [i_12] [i_12] [i_12] [i_7]);
                    }
                    /* vectorizable */
                    for (unsigned char i_15 = 1; i_15 < 18; i_15 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (_Bool)1))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) << (((/* implicit */int) (!((_Bool)1))))));
                        var_37 = ((/* implicit */signed char) ((unsigned long long int) arr_27 [i_15] [13U] [i_7] [i_4]));
                        arr_56 [i_4] [i_7] [2LL] [i_4] [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) arr_44 [i_4] [i_7] [i_8] [i_12] [i_15])) < (arr_20 [i_7]))))));
                    }
                    for (unsigned char i_16 = 1; i_16 < 18; i_16 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((unsigned int) arr_0 [i_7])))));
                        var_39 &= ((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) arr_45 [i_4] [i_12 - 1] [i_12] [i_16 + 1] [i_16] [i_7] [i_12 - 1]))), ((unsigned short)23863)));
                    }
                    arr_59 [i_12] = ((/* implicit */short) min((((/* implicit */long long int) (((_Bool)1) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25400)))))), ((+(((long long int) var_11))))));
                }
                var_40 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) > (((/* implicit */int) (unsigned char)5))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_49 [i_8] [i_7] [i_4] [i_4]) : (((/* implicit */int) var_4))))))));
            }
            for (short i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_18 = 1; i_18 < 20; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        {
                            var_41 *= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32761))) : (min((((/* implicit */long long int) arr_31 [i_4] [(_Bool)1] [i_7] [i_4])), (9223372036854775794LL)))));
                            arr_67 [i_19] [i_17] [i_18] [i_17] [i_17] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / ((~(((/* implicit */int) arr_32 [i_7] [i_7] [i_7]))))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) arr_36 [i_4] [i_18] [i_18 + 1] [7U] [i_17])))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_4] [i_7] [i_4] [i_4])))))));
                arr_68 [i_4] [i_7] [i_17] = ((/* implicit */int) (+(-9223372036854775796LL)));
            }
            var_43 = ((/* implicit */unsigned long long int) arr_60 [4LL] [4LL] [i_7] [i_7]);
            var_44 |= ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)101)))))));
            var_45 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> ((((((-2147483647 - 1)) - (-2147483641))) + (23)))))), (min(((+(arr_25 [i_4] [i_7]))), (((/* implicit */unsigned int) (-(0))))))));
        }
        arr_69 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_55 [i_4] [i_4])) == (((/* implicit */int) (_Bool)1))))))) - ((+(((arr_37 [i_4] [i_4] [i_4]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_4] [i_4] [i_4])))))))));
    }
    var_46 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) var_13)), (max((((/* implicit */long long int) var_12)), (-1LL)))))));
    var_47 = ((/* implicit */short) -1062654302);
}
