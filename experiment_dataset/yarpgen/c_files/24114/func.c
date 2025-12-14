/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24114
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_3 [i_0]))))) : (arr_9 [i_0] [19LL]))) << (((((/* implicit */int) arr_7 [i_2] [i_1])) | (((/* implicit */int) (!(arr_1 [(_Bool)1]))))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_2 [i_0]) < (arr_2 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_2] [i_2])))) : ((-(var_11)))))) ? (((/* implicit */int) var_0)) : (((((((/* implicit */int) var_10)) >> (((625448025U) - (625447996U))))) + (((/* implicit */int) ((signed char) var_8)))))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_2 [i_0])) ^ (arr_9 [(unsigned short)0] [i_1])));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        arr_15 [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_6)))))));
                        var_14 = ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_12))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : ((-(min((var_2), (((/* implicit */unsigned long long int) (unsigned char)76)))))));
                    }
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */int) arr_9 [i_1] [17ULL]);
                        var_16 -= ((/* implicit */signed char) var_0);
                        arr_18 [i_0] [i_0] [1] [i_2] [i_4 + 1] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [22U])) != (((/* implicit */int) var_9)))))))));
                        var_17 = ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_2)));
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_5 [i_5] [i_1])))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            var_19 |= ((/* implicit */long long int) max((max((((arr_9 [i_6] [i_6]) / (((/* implicit */unsigned long long int) arr_6 [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)94)) / (((/* implicit */int) var_5))))))), (min((13119037930011921182ULL), (((/* implicit */unsigned long long int) arr_19 [i_1] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1]))))));
                            var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (arr_19 [i_5] [i_5] [i_5] [7LL] [(signed char)9] [i_5])))) : (var_12)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_7 [i_2] [0U]))))) : (arr_9 [i_0] [i_6])));
                            var_21 = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6 - 1])) : (((/* implicit */int) var_8)))) ^ (((/* implicit */int) ((unsigned short) arr_5 [i_6] [i_6]))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((-324711047), (((/* implicit */int) arr_14 [(_Bool)1] [i_5] [i_2] [i_0] [i_0])))) >> ((((+(arr_17 [4] [i_5] [i_2] [i_0]))) - (11164505583105469821ULL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)143)), (var_10)))) ? (((((/* implicit */_Bool) (signed char)-40)) ? (arr_9 [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (signed char)7)))))))) : (((((arr_9 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) arr_22 [4U] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) % (((/* implicit */unsigned long long int) arr_2 [i_6 - 1]))))));
                        }
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) var_12);
    }
    var_24 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (signed char i_7 = 2; i_7 < 16; i_7 += 4) 
    {
        for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            {
                arr_30 [i_7] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_7])) % (((/* implicit */int) (signed char)21))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_7 - 2] [i_7 + 1]))))));
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_33 [i_9] [4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((var_5), (arr_28 [i_7 - 2] [i_7 - 1] [i_7 - 2]))))) >= (arr_23 [i_9])));
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 17; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((arr_9 [i_9] [(_Bool)1]) - (15083128959546667750ULL))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) ((signed char) arr_28 [i_7] [i_8] [i_9]))) : (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))))) : (((max((((/* implicit */unsigned long long int) arr_32 [i_8] [i_11])), (var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                                var_26 = ((/* implicit */_Bool) 2053524165);
                                var_27 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) arr_19 [i_11] [i_10 - 1] [i_9] [i_8] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_25 [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_11)))))), (((arr_25 [i_9]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) arr_21 [i_8] [i_8] [(signed char)13] [i_9] [(signed char)13]);
                    arr_41 [i_7] [i_8] [i_7] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))))), (min((arr_32 [(unsigned short)6] [i_7]), (arr_32 [i_7] [i_7 + 2])))));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_40 [i_7 - 2] [i_7 - 1])) >= (((/* implicit */int) arr_40 [i_7 + 2] [i_7 - 2]))));
                    /* LoopNest 2 */
                    for (short i_13 = 2; i_13 < 17; i_13 += 4) 
                    {
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            {
                                var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)51)) >= (((((/* implicit */int) (unsigned char)198)) ^ (arr_49 [i_7] [i_7] [(signed char)13] [i_7] [(signed char)13] [i_7])))));
                                var_31 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) >> (((((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_4)) - (7913))))) - (274)))));
                                var_32 *= ((/* implicit */signed char) arr_1 [i_14]);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */int) ((arr_27 [i_7 + 1]) * (arr_27 [i_7 + 1])));
                }
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    var_34 = ((/* implicit */signed char) (_Bool)1);
                    /* LoopNest 2 */
                    for (signed char i_16 = 2; i_16 < 17; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_5)) - (95))))) + (arr_24 [i_8] [(unsigned short)14])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_8] [i_17]))))) : (3116928423U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_37 [i_8] [9]))) ? (min((arr_49 [i_7] [i_7] [i_8] [i_15] [(_Bool)1] [i_17]), (((/* implicit */int) arr_50 [i_7] [i_8] [(unsigned short)5] [(_Bool)1] [i_17])))) : (((var_1) ? (arr_34 [i_15] [i_15] [i_7] [i_15] [i_16 - 2] [i_17]) : (((/* implicit */int) var_10))))))))))));
                                var_36 ^= ((/* implicit */unsigned char) ((_Bool) ((max((var_2), (((/* implicit */unsigned long long int) var_6)))) << (((((((/* implicit */int) arr_20 [i_17] [i_17] [i_16] [i_15] [(_Bool)1] [i_16])) ^ (((/* implicit */int) var_6)))) - (64))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
