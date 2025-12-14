/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50154
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
    var_14 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7414267403757396181LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (var_4) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))) ? (((/* implicit */long long int) 4294967291U)) : (max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2]))))))));
        var_16 = ((/* implicit */_Bool) (~((+((-(1085735750279894712ULL)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32547))) : (var_0)))))));
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)15))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                arr_11 [(signed char)1] [i_2] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (arr_7 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_0 [i_1 + 1])))), (((((/* implicit */unsigned long long int) arr_0 [i_1 + 1])) ^ (arr_7 [i_1 + 1] [i_1 + 1])))));
                arr_12 [2ULL] [2ULL] [i_3] [i_3] = (+((~(arr_7 [(unsigned char)8] [i_1 + 1]))));
                arr_13 [i_3] [i_2] [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_9 [i_2] [i_1 + 1])))) >= ((~(((/* implicit */int) arr_8 [i_3]))))));
            }
            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))) | (max((var_7), (((/* implicit */long long int) arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))));
            arr_14 [i_1] [i_2] [i_2] = ((long long int) max((((((/* implicit */int) (unsigned short)16398)) >> (((arr_7 [i_1] [i_2]) - (5087683967358502052ULL))))), ((~(((/* implicit */int) (_Bool)1))))));
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) var_11);
            var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1]))) ^ (arr_0 [i_1])))) ? (((((/* implicit */int) (short)11070)) / (var_1))) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1] [i_1]))))));
            arr_17 [i_4] [i_4] = ((/* implicit */short) 6LL);
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                {
                    for (unsigned int i_7 = 4; i_7 < 9; i_7 += 3) 
                    {
                        {
                            arr_26 [i_4] [i_4] [(short)1] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) arr_18 [i_4] [i_4] [i_4] [i_5]);
                            var_21 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_5] [i_5])))))));
                            var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_5 [i_7] [i_7 - 1])) ? (arr_5 [i_7] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_4)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_38 [i_8] [(unsigned short)7] [i_8] [3LL] [i_8] = ((/* implicit */signed char) var_7);
                            var_23 = ((/* implicit */unsigned long long int) (unsigned char)93);
                            arr_39 [i_10] [i_8 + 1] [i_1 + 1] = ((/* implicit */unsigned long long int) max((arr_35 [i_1] [i_8] [i_9] [i_8 + 1] [i_9] [9ULL]), (((/* implicit */short) ((((/* implicit */int) var_11)) < (2147483647))))));
                            arr_40 [i_9] [i_8] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))) % (17838472542015038813ULL))), (((/* implicit */unsigned long long int) var_3))));
                        }
                    } 
                } 
                var_24 -= ((/* implicit */signed char) 7777286950928837101ULL);
                var_25 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_8] [(signed char)6] [i_8] [i_8])) || (((/* implicit */_Bool) arr_21 [i_1] [i_8] [i_8] [i_8]))))) << (((max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (arr_21 [i_1] [i_8] [i_9] [i_9]))) - (18446744073709551482ULL)))));
                arr_41 [i_9] [i_8 - 1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [(short)7] [i_8 - 1] [i_1])) ? (((/* implicit */long long int) 210131045)) : (max((arr_33 [i_9] [i_8 - 2] [i_8 - 2] [i_8 - 2]), (((/* implicit */long long int) arr_34 [i_9] [i_9] [i_9] [i_8] [i_8 - 1] [i_1]))))));
                arr_42 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_2)))) ? ((+(arr_3 [i_1 + 1]))) : (((arr_3 [i_1 + 1]) ^ (0ULL)))));
            }
            var_26 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (arr_36 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 2] [2LL] [i_8] [i_1]))))));
            var_27 = ((/* implicit */signed char) ((unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)61925)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 2; i_12 < 7; i_12 += 3) 
            {
                arr_46 [i_12] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) (unsigned short)13687)))), (((/* implicit */int) arr_4 [(_Bool)1]))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) (-(-1LL)));
                            var_29 = ((/* implicit */signed char) arr_30 [i_1 + 1] [i_12 + 1]);
                            var_30 = ((/* implicit */signed char) max((((/* implicit */long long int) var_9)), (max((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) 3544802832U)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [2LL])))))))));
                            arr_51 [i_12] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_12 + 2] [i_12] [i_1 + 1]))))) ? (((/* implicit */int) arr_45 [i_12 + 1] [i_12] [i_1 + 1])) : ((~(((/* implicit */int) arr_45 [i_12 - 1] [i_12] [i_1 + 1]))))));
                        }
                    } 
                } 
                arr_52 [i_12] = ((/* implicit */_Bool) 6884808098371916770LL);
            }
        }
    }
    for (signed char i_15 = 4; i_15 < 17; i_15 += 3) 
    {
        var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (signed char)18)))));
        arr_55 [4ULL] = ((/* implicit */short) (~(max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (3ULL))), (((/* implicit */unsigned long long int) max((arr_0 [i_15]), (((/* implicit */long long int) -1588450836)))))))));
    }
    var_32 = ((/* implicit */unsigned int) var_3);
    var_33 = ((/* implicit */unsigned int) var_3);
}
