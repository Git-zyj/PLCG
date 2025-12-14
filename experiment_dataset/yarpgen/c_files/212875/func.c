/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212875
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
    var_18 = ((/* implicit */_Bool) var_8);
    var_19 ^= var_11;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_3 [(signed char)6]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) % (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (signed char)-3)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                        arr_13 [i_0] = ((/* implicit */signed char) (-(((unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_16)))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_0] [i_4] [i_0])) ? ((~(((/* implicit */int) (unsigned char)31)))) : (((/* implicit */int) arr_3 [i_1])))))));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 *= ((/* implicit */unsigned long long int) var_6);
                            var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */int) (signed char)23))))));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                        }
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_1] [i_2 + 3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_6] [i_4] [i_2 + 3] [i_1] [6LL]))));
                            arr_24 [(signed char)3] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-47))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_19 [i_2] [i_4] [i_2] [7ULL] [(signed char)11])))) << (((arr_0 [i_2 + 1] [i_2 + 1]) - (2091369464381262948LL)))));
                            var_26 ^= (-((~(((/* implicit */int) arr_5 [i_4] [i_1] [i_0])))));
                            arr_27 [(signed char)0] [i_7] [i_4] [(short)12] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_19 [i_7] [i_4] [i_0] [i_1] [i_0]);
                        }
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_27 ^= ((((((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_4] [i_8])) >= (((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [i_4] [10ULL])))) ? (15772467022753884008ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-26)) + (2147483647))) << (((((((/* implicit */int) (signed char)-7)) + (37))) - (30)))))));
                            arr_31 [i_8] [i_8] [i_4] [i_2] [i_0] [i_8] = ((/* implicit */_Bool) ((long long int) arr_25 [i_2 + 1] [(signed char)10] [i_2 + 1]));
                        }
                    }
                    var_28 ^= (~(((((/* implicit */_Bool) arr_21 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-7)))) : (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) % (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_2 + 2])))))));
                    arr_32 [i_0] [i_0] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned int) (-(arr_12 [i_0] [i_0] [i_0] [i_2 + 1])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))) - (var_4)))))));
                    var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_1] [i_0] [i_2 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_20 [i_0]))))) * (var_1)));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(((((/* implicit */int) arr_21 [i_2] [i_1] [i_1] [i_1] [i_0])) << (((/* implicit */int) (signed char)10)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_9 + 1] [i_9 - 1] [i_9 + 1] [(unsigned char)1])) ? (((/* implicit */int) arr_38 [i_9 + 1] [i_9])) : (((/* implicit */int) arr_19 [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9 + 1])))) * (((/* implicit */int) ((((/* implicit */int) arr_38 [i_9 + 1] [i_9])) != (((/* implicit */int) arr_38 [i_9 - 1] [i_9])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_11 = 1; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        arr_41 [3ULL] [i_9 + 1] [i_9] [i_11 + 2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) * (((/* implicit */int) arr_9 [i_10] [i_9 + 1] [i_0]))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)126)) > (((/* implicit */int) (unsigned char)1)))))) : (var_12))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 1; i_12 < 10; i_12 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52843)) ? (arr_30 [i_0] [i_0] [i_0] [i_10] [(unsigned char)3] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) arr_30 [i_10] [i_9 - 1] [i_10] [i_12 - 1] [i_9 + 1] [i_9])) : (4032944401125493870ULL)));
                        var_34 ^= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (arr_15 [i_0] [i_9 + 1]))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((unsigned short) arr_6 [i_12])))));
                        var_36 ^= ((/* implicit */int) ((_Bool) arr_11 [i_12 + 3] [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 3]));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (short)-5376)) : (((/* implicit */int) var_6))));
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 1; i_13 < 10; i_13 += 2) /* same iter space */
                    {
                        var_38 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((arr_38 [i_0] [i_10]) ? (arr_43 [i_13] [i_10] [i_9] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))))) : ((~(288230376151187456ULL)))));
                        var_39 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_22 [i_0] [i_9] [i_10] [i_0] [i_9 - 1])) ? (16790831394694390529ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) / (((unsigned long long int) var_8))));
                    }
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_35 [i_9] [i_9 - 1])) != (((/* implicit */int) arr_47 [i_9 + 1] [i_9 - 1] [i_9] [i_9])))))) % ((~(-223357120349803228LL)))));
                }
            } 
        } 
        arr_48 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6322358595174774017LL)) ? ((-(arr_15 [i_0] [10U]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0]))) + (-6322358595174774020LL)))))))));
    }
    /* vectorizable */
    for (signed char i_14 = 2; i_14 < 17; i_14 += 2) 
    {
        var_41 = (!(((/* implicit */_Bool) arr_52 [i_14 - 2])));
        arr_53 [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_51 [i_14 + 2]))));
    }
    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) 2274182139U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))))) : ((~(var_1)))))) ? (((/* implicit */unsigned long long int) var_11)) : (var_2)));
    var_43 = ((/* implicit */unsigned short) var_4);
}
