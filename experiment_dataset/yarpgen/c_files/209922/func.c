/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209922
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
    var_10 = ((/* implicit */unsigned char) ((int) var_4));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((signed char) var_1)))));
        var_12 ^= ((/* implicit */int) arr_0 [i_0] [8U]);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) 42610011));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_13 = ((/* implicit */int) var_5);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) max((var_14), (var_6)));
                        arr_14 [i_1] [i_3] [10ULL] [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_4])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_10 [i_1] [i_3] [i_3]))))));
                    }
                } 
            } 
            var_15 |= ((/* implicit */long long int) arr_12 [i_1]);
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_10 [i_1] [6] [i_1]))));
                var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? ((-(-1099511627776LL))) : (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) - (3674781633457319798LL)))));
            }
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)8344)) - (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) (unsigned short)53896)) : ((-((~(((/* implicit */int) var_0))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_19 [i_1] [i_6] [(signed char)8] = ((/* implicit */long long int) (~((~(1552851395990101689ULL)))));
            arr_20 [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((-(((/* implicit */int) var_4)))) + (2147483647))) >> ((((~(((/* implicit */int) arr_13 [i_1] [i_1] [(signed char)9] [i_1])))) + (89)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_6))))) : (min((((/* implicit */long long int) var_7)), (var_9)))));
            arr_21 [i_1] = ((/* implicit */unsigned long long int) (~(((arr_17 [(signed char)3] [i_6] [i_6]) ^ (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_1] [i_1]))))));
            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_6]))) / (var_8))) < (((/* implicit */unsigned int) ((/* implicit */int) max((arr_16 [i_1] [i_6]), (arr_16 [i_1] [i_1])))))));
        }
        var_20 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_1] [6] [i_1])), (arr_1 [i_1])))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
        arr_22 [8ULL] = ((/* implicit */unsigned short) arr_11 [(signed char)10] [i_1] [(signed char)10]);
    }
    /* LoopNest 2 */
    for (long long int i_7 = 3; i_7 < 11; i_7 += 3) 
    {
        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) arr_10 [i_7 - 3] [i_8] [i_7])))));
                    var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 3141761641264514071LL)) ? (max((((/* implicit */long long int) var_1)), (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)-4))))))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_18 [i_7]))) ^ (((/* implicit */int) (unsigned short)35470)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        var_23 -= ((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_8 + 3])) ? (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)44)) && (((/* implicit */_Bool) (unsigned short)30065))))))) : (((int) arr_18 [i_8])));
                        arr_34 [i_7] [i_8] [i_10] = ((/* implicit */signed char) var_2);
                        arr_35 [i_8] [i_9] = ((/* implicit */signed char) arr_7 [i_10 + 1]);
                        var_24 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_24 [i_8 + 2] [i_10 - 1])), (var_8)))) ? (((/* implicit */int) arr_5 [1ULL] [4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7 - 3]))))));
                    }
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                {
                    var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8 + 3] [(unsigned short)8]))) : (var_8)))) ? (((/* implicit */int) arr_36 [(_Bool)1] [i_8])) : (((/* implicit */int) var_3))));
                    arr_39 [i_8] [i_8 + 3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (var_1) : (((/* implicit */int) (unsigned short)30054))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_1)) >= (var_8)));
                }
                /* LoopNest 2 */
                for (unsigned int i_12 = 3; i_12 < 12; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) 
                            {
                                var_27 = ((/* implicit */signed char) ((unsigned long long int) arr_7 [i_12 - 3]));
                                var_28 = ((/* implicit */unsigned short) var_4);
                                arr_47 [i_7 + 1] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned short) var_3);
                                var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)125))));
                            }
                            for (long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                            {
                                var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)175)))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) var_4)))) & (((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)30054)))) | (((/* implicit */int) (signed char)-55))))));
                                arr_52 [i_7] [i_8] = ((/* implicit */long long int) (_Bool)0);
                                var_31 = ((/* implicit */short) min((arr_27 [(short)3] [i_8]), (((/* implicit */int) arr_26 [i_7]))));
                                arr_53 [0] [i_8] [0] [i_13] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_2)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (180))) - (52)))))))) : (((((/* implicit */_Bool) arr_50 [i_7 - 2] [i_8] [i_12 + 1] [i_13] [i_8])) ? (((/* implicit */int) arr_24 [i_7 - 3] [(unsigned short)0])) : (var_1)))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
                            {
                                arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] = (+(max((((/* implicit */long long int) min(((unsigned short)30065), (((/* implicit */unsigned short) (_Bool)1))))), (var_9))));
                                var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) arr_43 [i_7] [(unsigned char)1] [i_8] [9] [6LL] [(unsigned char)1])) : (max(((-(((/* implicit */int) (unsigned short)35470)))), (((/* implicit */int) arr_6 [i_7 + 2]))))));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8 - 2] [i_12 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8 - 2] [i_12 - 1]))) : (var_9)))) ? (((arr_12 [i_8 - 3]) << (((/* implicit */int) arr_28 [i_16])))) : (((/* implicit */unsigned long long int) arr_18 [i_7]))));
                                var_34 = arr_25 [i_12 - 3];
                            }
                        }
                    } 
                } 
                var_35 = (signed char)(-127 - 1);
                /* LoopNest 3 */
                for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    for (unsigned char i_18 = 1; i_18 < 10; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            {
                                var_36 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_7] [6LL] [i_17])) | (((/* implicit */int) arr_59 [0LL] [i_8] [i_8 + 1] [(_Bool)1]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_18] [i_18]))));
                                arr_67 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_8] = ((/* implicit */int) (-(arr_11 [i_18] [11ULL] [i_18 + 3])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
