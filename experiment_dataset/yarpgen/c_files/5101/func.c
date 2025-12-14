/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5101
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [1])) & (((/* implicit */int) arr_1 [i_0]))))), (((arr_0 [i_0]) << (((arr_0 [i_0]) - (10482301787635812553ULL))))))))));
        var_19 = ((/* implicit */unsigned char) (!((_Bool)1)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_12)))));
                        arr_13 [i_3] [i_1] [i_1] [(_Bool)0] [i_1] [(_Bool)0] = ((/* implicit */unsigned long long int) arr_2 [i_2]);
                        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))))) ^ (((/* implicit */int) arr_2 [i_0]))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)124))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_4] [i_4] [i_4]))));
        arr_18 [i_4] = ((/* implicit */unsigned long long int) var_11);
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((0LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_23 &= ((/* implicit */int) var_13);
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_24 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (arr_11 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 - 1] [i_5])));
        arr_24 [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [16ULL] [16ULL] [i_5] [i_5] [16ULL])))))) ? ((+(((/* implicit */int) arr_1 [7])))) : (((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_29 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5]))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        for (signed char i_9 = 3; i_9 < 17; i_9 += 2) 
                        {
                            {
                                arr_36 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(unsigned short)14] [i_6] [i_6] [i_6 + 2]))) + (var_6))) : (((/* implicit */unsigned long long int) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                                arr_37 [i_5 - 1] [i_6] [i_7] [i_8 + 1] [i_8 + 1] [i_7] = ((((/* implicit */_Bool) arr_8 [i_5] [i_5 + 1] [i_5 + 2])) ? (((/* implicit */int) arr_10 [i_7] [i_6 - 1] [i_7] [i_8 - 2] [8U])) : (((/* implicit */int) arr_10 [i_7] [16] [i_7] [i_8 - 2] [i_7])));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) << (((/* implicit */int) ((arr_12 [15ULL] [15ULL] [i_7] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5]))))))));
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        var_26 &= ((((/* implicit */int) var_17)) / (((/* implicit */int) arr_25 [i_5 - 1] [(signed char)0] [i_6 + 3])));
                        arr_40 [i_7] = ((((/* implicit */int) (!(var_17)))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (arr_21 [i_5])))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) arr_38 [i_6] [i_6 - 2] [i_6] [i_7]);
                        /* LoopSeq 4 */
                        for (int i_12 = 1; i_12 < 17; i_12 += 3) 
                        {
                            arr_46 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [(signed char)7] [(signed char)7] [i_7] [i_5 - 1] [i_7] [i_7] [i_11])) < (((/* implicit */int) arr_33 [i_11] [14LL] [i_7] [i_5 - 1] [i_7] [i_7] [i_11]))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_26 [i_11]))));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_33 [i_5 - 1] [i_5] [i_6] [i_7] [i_11] [i_11] [i_12]))));
                        }
                        for (int i_13 = 2; i_13 < 16; i_13 += 4) /* same iter space */
                        {
                            arr_49 [i_5] [i_5] [(_Bool)1] [i_5] [i_7] = ((((/* implicit */_Bool) arr_10 [i_7] [i_11] [i_7] [i_11] [i_13 + 1])) ? (((/* implicit */int) arr_10 [i_7] [i_7] [i_11] [i_13 + 1] [i_13 + 2])) : (((/* implicit */int) arr_10 [i_7] [i_7] [i_13] [8ULL] [i_13 - 2])));
                            var_30 ^= ((/* implicit */int) arr_3 [i_13 + 1]);
                        }
                        for (int i_14 = 2; i_14 < 16; i_14 += 4) /* same iter space */
                        {
                            arr_52 [i_7] [4] [i_7] [i_11] [15LL] = ((/* implicit */signed char) arr_42 [i_5] [i_7] [13LL] [i_5 - 1] [i_7]);
                            arr_53 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_22 [i_14 + 2]))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [(short)10] [i_6 + 1] [i_14] [(short)10]))))) : (((/* implicit */int) var_1))));
                            var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_4)))));
                        }
                        for (unsigned short i_15 = 1; i_15 < 18; i_15 += 2) 
                        {
                            var_33 = ((/* implicit */int) arr_0 [i_6]);
                            var_34 = ((/* implicit */signed char) (~(((/* implicit */int) arr_56 [i_5 - 1] [i_6] [i_7] [i_6] [i_15 - 1]))));
                            arr_57 [i_5] [i_7] [i_7] = ((/* implicit */signed char) (_Bool)1);
                        }
                    }
                    for (unsigned long long int i_16 = 4; i_16 < 16; i_16 += 4) 
                    {
                        var_35 = ((/* implicit */long long int) ((((var_17) ? (arr_11 [i_16 - 3] [i_16 + 3] [i_7] [i_6] [i_6 + 1] [i_5]) : (((/* implicit */unsigned long long int) -6406909920773423888LL)))) << (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (unsigned char)255)))))));
                        /* LoopSeq 4 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_42 [i_5] [i_7] [i_5 - 1] [i_5] [i_5])) + (-7013746)))));
                            arr_62 [i_5] [i_6] [(_Bool)1] [i_17] &= 9223372036854775807LL;
                            var_37 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */long long int) arr_30 [i_5] [i_6] [i_5] [i_16 + 2] [18U]))))) ? (((/* implicit */int) ((arr_44 [i_5]) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_16] [i_16] [10LL] [18LL])))))) : (((/* implicit */int) var_10))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_31 [i_5 - 1] [(_Bool)1] [i_16 + 3] [i_16 - 2]))))));
                            var_39 = ((((/* implicit */_Bool) arr_35 [i_7])) ? (((/* implicit */int) arr_66 [i_16 + 1] [i_16] [i_16 + 1] [i_7] [i_6] [(unsigned char)14] [i_5])) : (arr_30 [i_5] [i_5 + 1] [i_5] [i_5] [i_5]));
                            var_40 = ((((/* implicit */int) arr_66 [i_5 + 2] [2ULL] [i_5 + 2] [i_5] [i_5] [i_5] [i_5 + 2])) | ((-(((/* implicit */int) arr_22 [i_18])))));
                            arr_67 [6ULL] [i_16] [i_18] [6ULL] [i_18] [i_18] &= ((/* implicit */long long int) (~(arr_39 [i_16 - 2] [i_7] [i_16] [i_16] [16LL] [i_18])));
                        }
                        for (long long int i_19 = 2; i_19 < 16; i_19 += 3) 
                        {
                            arr_70 [18LL] [i_7] [i_19] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (1214846988U)))) != (((((/* implicit */_Bool) 18446744073709551597ULL)) ? (18446744073709551615ULL) : (arr_28 [i_5] [9LL] [i_5])))));
                            arr_71 [i_5] [i_7] [i_6] [i_7] [i_19] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_66 [i_5] [i_5] [i_7] [i_7] [i_16] [i_7] [i_19])))));
                            var_41 = ((/* implicit */long long int) ((((/* implicit */int) var_17)) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) < (((/* implicit */int) (unsigned short)0)))))));
                            var_42 = ((/* implicit */_Bool) 0ULL);
                        }
                        for (long long int i_20 = 0; i_20 < 19; i_20 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_43 [i_5 + 1] [18] [i_7] [i_5 + 1] [i_5 + 1])))) || ((!(((/* implicit */_Bool) var_4))))));
                            var_44 = ((/* implicit */_Bool) arr_12 [i_5] [i_5] [11] [i_5 + 1]);
                            var_45 = arr_26 [i_5];
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_51 [i_5 + 1] [i_7]))));
                        }
                    }
                }
            } 
        } 
    }
    var_47 += ((/* implicit */long long int) ((((((/* implicit */int) var_11)) * (((/* implicit */int) ((var_16) > (((/* implicit */int) (unsigned char)253))))))) > (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2)))) > (((/* implicit */int) ((((/* implicit */int) var_14)) >= (var_16)))))))));
}
