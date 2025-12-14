/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216671
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
    var_11 = ((/* implicit */signed char) var_1);
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((unsigned long long int) (_Bool)1))))) ? (18446744073709551615ULL) : (((((/* implicit */_Bool) 18446744073709551604ULL)) ? ((-(6ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) 22ULL))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(18446744073709551615ULL))))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1ULL))))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (2530284767716967760ULL) : (18446744073709551610ULL)));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [(unsigned char)16])) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(signed char)4] [(signed char)4] [i_3])))))));
        arr_14 [16ULL] |= ((/* implicit */unsigned int) arr_3 [8]);
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) != (arr_2 [1ULL] [i_3])))), (((signed char) 18446744073709551610ULL))))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) 625123679U)) : (1ULL))))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_17 &= ((/* implicit */signed char) arr_3 [(signed char)2]);
        var_18 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 24ULL))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        var_19 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) 182752348)) ? (arr_19 [i_5] [i_5]) : (((/* implicit */unsigned long long int) 701841552)))))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_7 = 2; i_7 < 17; i_7 += 1) 
            {
                for (long long int i_8 = 4; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        {
                            arr_29 [i_5] [i_9] [i_9] [i_5] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) 27LL)) : (18446744073709551615ULL))))) : (((/* implicit */int) (signed char)-77))));
                            var_20 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -701841556))))), (max(((+(1ULL))), (((/* implicit */unsigned long long int) arr_18 [i_8]))))));
                            arr_30 [(unsigned char)8] [(short)8] [i_5] [17ULL] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-63)), (4294967295U)))) : (((long long int) (+(arr_28 [i_5] [6U] [i_6] [i_6] [i_7 + 2] [i_5] [15U]))))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] [i_9] &= ((/* implicit */signed char) min((max((min((var_6), (arr_23 [i_5] [i_6] [i_7] [i_8]))), (((arr_23 [i_9] [i_6] [i_7 + 2] [i_6]) - (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((40ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned char)10] [i_6] [i_7] [i_9] [i_9])))))), (arr_26 [i_8] [i_5 - 1] [i_7] [i_8]))))));
                        }
                    } 
                } 
            } 
            arr_32 [i_5] [i_5] = ((/* implicit */short) ((_Bool) min((27LL), (((/* implicit */long long int) (_Bool)1)))));
            arr_33 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((unsigned long long int) 1ULL)), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))))))));
            var_21 &= ((/* implicit */unsigned long long int) ((short) ((signed char) var_2)));
            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((long long int) arr_28 [2ULL] [(unsigned char)13] [i_6] [i_6] [i_6] [i_5] [i_6]))) : (max((var_1), (((/* implicit */unsigned long long int) -28LL)))))))));
        }
        for (int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            var_23 = ((/* implicit */int) max((var_23), (1)));
            var_24 = ((/* implicit */unsigned char) arr_23 [9LL] [i_10] [i_5] [i_5]);
        }
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551588ULL)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) : (max((((/* implicit */long long int) var_9)), (2551578239381287763LL)))))) ? (max((((/* implicit */unsigned long long int) ((long long int) (_Bool)0))), (((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_5 + 1] [(_Bool)1] [i_5] [(_Bool)1] [i_5 - 1])) && (((/* implicit */_Bool) arr_27 [i_5 + 1] [(short)0] [16U] [(short)0] [i_5 + 1]))))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        arr_38 [(unsigned char)8] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16142422409466964146ULL))));
        arr_39 [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
        /* LoopNest 3 */
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_15 = 1; i_15 < 10; i_15 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 701841556))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_12 [(_Bool)1]))))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            arr_53 [i_11] [i_12] [i_12] [i_13] [6LL] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_14] [i_12] [i_13]))));
                            arr_54 [i_11] [i_12] [i_11] [i_11] = ((/* implicit */signed char) (unsigned char)4);
                            arr_55 [i_12] = ((/* implicit */unsigned int) ((arr_13 [i_12] [i_12]) > (arr_2 [i_11] [(short)14])));
                        }
                        for (long long int i_17 = 2; i_17 < 12; i_17 += 2) 
                        {
                            arr_58 [i_17] [i_14] [i_17] [i_17] [i_17] &= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)4))));
                            var_28 ^= ((/* implicit */unsigned char) ((short) var_9));
                            var_29 = ((/* implicit */short) ((((/* implicit */long long int) 4294967295U)) - (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) -701841580)) : (-8878673172818333322LL)))));
                        }
                        var_30 = ((/* implicit */unsigned int) (+(((int) arr_11 [i_12]))));
                    }
                } 
            } 
        } 
        var_31 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_42 [i_11] [i_11]))));
        arr_59 [i_11] |= ((/* implicit */unsigned int) 701841552);
    }
    for (unsigned short i_18 = 1; i_18 < 24; i_18 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_19 = 4; i_19 < 24; i_19 += 3) 
        {
            for (unsigned long long int i_20 = 1; i_20 < 21; i_20 += 1) 
            {
                {
                    arr_68 [i_19] [i_20] [i_19] = ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)24)));
                    var_32 ^= ((/* implicit */unsigned long long int) arr_66 [8LL] [i_19] [i_19]);
                    arr_69 [i_18] [i_19] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_21 = 0; i_21 < 25; i_21 += 4) 
        {
            for (unsigned char i_22 = 1; i_22 < 23; i_22 += 4) 
            {
                for (int i_23 = 0; i_23 < 25; i_23 += 1) 
                {
                    {
                        arr_79 [i_23] [1ULL] [i_22] [i_21] [i_23] = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned int) arr_73 [i_18 + 1] [i_18 + 1] [i_18 - 1] [2ULL])), (((unsigned int) arr_71 [i_18] [i_18] [i_18])))));
                        var_33 = ((/* implicit */unsigned int) var_6);
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_71 [i_22 + 1] [i_22 - 1] [i_18 - 1])) : (((/* implicit */int) arr_71 [i_22 - 1] [i_22 - 1] [i_18 - 1]))))) ? (((/* implicit */int) arr_71 [i_22 + 2] [i_22 - 1] [i_18 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))));
                        var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) || (((/* implicit */_Bool) arr_65 [i_18] [i_21])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_61 [i_18 + 1] [i_18 + 1])))))) : (((/* implicit */int) arr_76 [i_23] [i_21] [i_23] [(short)8]))));
                        var_36 = ((/* implicit */int) 333463475U);
                    }
                } 
            } 
        } 
    }
}
