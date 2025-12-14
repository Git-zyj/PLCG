/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32289
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
    var_20 -= ((/* implicit */_Bool) var_18);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1] [i_0]))));
                    var_22 = ((/* implicit */_Bool) ((unsigned short) arr_3 [i_0 + 1]));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (_Bool)1))));
    }
    for (short i_3 = 3; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_9 [(_Bool)0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_3]))));
        var_24 = ((/* implicit */_Bool) (-(((((_Bool) arr_2 [9LL] [3U])) ? (((((/* implicit */_Bool) 2898237456322274470LL)) ? (((/* implicit */int) arr_1 [i_3] [1LL])) : (((/* implicit */int) (signed char)0)))) : ((-(((/* implicit */int) (_Bool)1))))))));
        var_25 &= ((/* implicit */_Bool) 0LL);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (short i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) arr_13 [i_4] [i_4] [i_4]);
                        var_27 *= ((/* implicit */unsigned int) ((arr_5 [i_5 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7])))));
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) (-(arr_12 [i_5] [i_5 - 1])));
            var_29 = (-(((/* implicit */int) arr_6 [i_5])));
            var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [(unsigned short)19] [(short)15])) << (((((/* implicit */int) arr_6 [i_5])) - (34255))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_12 [i_4] [i_5]))))));
            var_31 = ((/* implicit */unsigned int) ((unsigned short) arr_3 [i_4]));
        }
        var_32 = ((/* implicit */int) arr_19 [i_4]);
    }
    for (short i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        var_33 *= ((/* implicit */unsigned int) arr_1 [i_8] [i_8]);
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                var_34 = (+(((/* implicit */int) (signed char)-116)));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        {
                            var_35 &= ((/* implicit */long long int) arr_27 [i_12] [i_11] [i_9] [i_8]);
                            arr_36 [i_10] [i_11] [i_11] [i_10] [i_9] [i_10] [i_10] |= ((/* implicit */long long int) ((min((min((arr_7 [i_12]), (((/* implicit */unsigned long long int) arr_1 [i_10] [i_10])))), (((/* implicit */unsigned long long int) arr_3 [i_8])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)0)))))));
                            var_36 = ((((((17254289551288762916ULL) << (((-18) + (75))))) * (((/* implicit */unsigned long long int) (-(795735412)))))) == (((/* implicit */unsigned long long int) -757001568)));
                            var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_9] [i_9])) || (((/* implicit */_Bool) arr_2 [i_9] [i_12])))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_22 [(short)3] [i_11])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9] [i_9])) && (((/* implicit */_Bool) arr_23 [i_11] [i_12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)14))))))))));
                            var_38 += ((/* implicit */short) (+(((((/* implicit */unsigned long long int) (~(arr_20 [i_11])))) / (((((/* implicit */_Bool) 7954153324805762282LL)) ? (1192454522420788726ULL) : (((/* implicit */unsigned long long int) 1179863889U))))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned int) arr_4 [i_8] [i_9]);
            }
            for (short i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) arr_27 [i_8] [17ULL] [i_13] [(_Bool)1]);
                        var_41 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_20 [i_9])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8] [i_9] [i_8]))) / (arr_35 [i_15] [i_15]))) : (((/* implicit */unsigned long long int) (-(9223372036854775789LL)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_23 [i_8] [5U])) ? (arr_27 [i_15] [i_9] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_14]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
                    {
                        var_42 = (((+(((/* implicit */int) arr_34 [i_14] [i_14] [i_13] [i_16])))) + (((/* implicit */int) arr_8 [i_16])));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_29 [i_8] [i_8] [i_14] [i_14]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9] [i_9])))))) && (((/* implicit */_Bool) arr_30 [i_8] [i_8] [i_13] [i_14] [(short)7]))));
                        var_44 = ((/* implicit */short) arr_21 [i_9] [i_14]);
                        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9]))) - (4294967291U)))) && ((((_Bool)1) && (((/* implicit */_Bool) arr_4 [i_14] [17U]))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 4) /* same iter space */
                    {
                        var_46 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_46 [i_8] [i_8] [i_8])), (min((-25LL), (((/* implicit */long long int) arr_45 [12] [4ULL] [i_13] [12] [1] [i_8]))))))) + (max((arr_5 [i_9]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_13] [i_8])))))))));
                        arr_50 [i_9] [(_Bool)1] [i_13] [i_13] [15U] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [(short)2] [(short)2] [i_13] [i_14] [i_9]))) <= (((((/* implicit */_Bool) 4294967295U)) ? (arr_21 [7LL] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                        var_47 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34145)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-38)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
                    {
                        var_48 -= ((/* implicit */unsigned long long int) (~(arr_26 [i_8] [i_9] [i_18])));
                        var_49 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8] [(_Bool)1] [i_13] [(_Bool)1] [i_8])) ? (((/* implicit */int) arr_42 [i_8] [i_8] [i_14])) : (((/* implicit */int) arr_42 [i_8] [i_9] [i_18]))));
                    }
                    var_50 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_52 [i_8] [1ULL] [i_13] [i_9] [i_9])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_14] [(short)0] [i_8] [i_8]))) + (16822383754820826807ULL))) : (((((/* implicit */_Bool) arr_45 [i_8] [i_9] [i_9] [i_13] [i_8] [i_9])) ? (arr_44 [i_8] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_14] [i_9] [i_9] [i_8]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_13]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) / (arr_47 [i_8] [i_8] [i_8] [(short)15] [i_8])))));
                    var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)37)) | (((/* implicit */int) (signed char)-4))))) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_8] [i_8] [i_13]))))) / (min((arr_22 [(short)3] [i_9]), (((/* implicit */unsigned int) arr_41 [i_9] [i_14])))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_9] [i_8])))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) 
                    {
                        var_52 += ((/* implicit */long long int) (short)19795);
                        var_53 = ((/* implicit */short) (~(((/* implicit */int) (short)32764))));
                        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_27 [18U] [18U] [i_13] [(_Bool)1]))))));
                        var_55 = ((/* implicit */int) (+(max((((((/* implicit */_Bool) arr_6 [i_9])) ? (arr_31 [i_19] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9] [i_13] [i_19]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-65)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        var_56 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_9]))));
                        var_57 = ((/* implicit */unsigned short) (short)32767);
                        var_58 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9]))) < (arr_44 [i_9] [i_14]));
                    }
                    /* vectorizable */
                    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        arr_66 [i_9] = (i_9 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_9])) >> (((((/* implicit */int) (short)29228)) - (29211)))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_9])) + (2147483647))) >> (((((/* implicit */int) (short)29228)) - (29211))))));
                        arr_67 [(_Bool)1] [i_9] [i_13] [i_14] [i_9] [i_13] = ((_Bool) arr_63 [i_8] [(short)20] [i_13] [i_14] [i_21]);
                        var_59 = (+(((((/* implicit */_Bool) 17073713097110426988ULL)) ? (arr_61 [i_21] [9LL] [i_9] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_13] [(_Bool)1]))))));
                    }
                    for (unsigned int i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        var_60 = (i_9 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_8] [i_14] [i_9])) << (((((/* implicit */int) arr_42 [i_9] [i_13] [i_9])) - (13)))))) && (((/* implicit */_Bool) arr_35 [i_9] [i_9]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_8] [i_14] [i_9])) << (((((((/* implicit */int) arr_42 [i_9] [i_13] [i_9])) - (13))) - (64)))))) && (((/* implicit */_Bool) arr_35 [i_9] [i_9])))));
                        arr_70 [18LL] [i_8] [i_9] [i_13] [i_13] [16U] [i_9] = (((~(((/* implicit */int) (signed char)68)))) | (((((((/* implicit */int) arr_51 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned short)15] [i_9])) & (((/* implicit */int) arr_2 [i_8] [i_8])))) | (((/* implicit */int) arr_32 [i_8] [i_9] [i_8] [i_14] [i_9])))));
                        arr_71 [i_9] [i_9] [i_13] [i_14] [i_22] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)30904)) : (((/* implicit */int) arr_48 [i_8] [i_9] [i_13] [i_14] [i_22])))));
                        arr_72 [i_9] [i_9] [i_13] [i_13] [(signed char)1] = ((/* implicit */short) (-(arr_33 [i_8] [(_Bool)1] [i_9] [(unsigned short)12] [i_9] [(_Bool)1])));
                    }
                }
                var_61 = ((/* implicit */int) max((var_61), (((/* implicit */int) arr_44 [i_8] [i_8]))));
            }
            arr_73 [i_9] [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (short)-32758)) & (((/* implicit */int) (short)0))));
            arr_74 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_37 [i_8] [i_8] [i_9]))) ? (((arr_37 [i_8] [i_9] [i_9]) / (arr_37 [i_8] [i_8] [i_9]))) : ((((_Bool)1) ? (arr_37 [i_8] [i_9] [i_9]) : (((/* implicit */int) (_Bool)0))))));
        }
    }
}
