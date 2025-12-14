/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22268
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) * (((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_5))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [11LL] [i_1 + 2] [i_1])) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (unsigned char)192))))) : (((arr_5 [i_3 - 1] [i_4]) - (arr_5 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_1]), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_2] [i_1 - 2] [(short)4] [15ULL] [(_Bool)1] [1LL] [4LL])), (arr_11 [i_0] [i_0] [i_2] [i_3] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_5) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))))))) : (max((arr_3 [i_3] [i_3 - 2] [2ULL]), (((/* implicit */unsigned long long int) max((arr_5 [i_4] [i_0 - 1]), (((/* implicit */long long int) (unsigned char)0)))))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-8)), (arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 2])))) ? ((~(arr_10 [i_3 + 1] [i_3] [i_3 - 1] [i_2]))) : (((((/* implicit */_Bool) (short)-12097)) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_12 [i_2] [i_3] [i_3 - 1] [i_3 - 1] [12] [i_3] [i_3 - 1]))))));
                                var_14 = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3 + 1] [i_4 - 1] [i_0] = ((/* implicit */signed char) ((((_Bool) ((var_2) != (((/* implicit */int) arr_8 [i_4] [(signed char)14] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [(_Bool)1] [i_3] [i_0] [i_0])), (arr_1 [i_3 - 2])))) : ((+(arr_3 [i_3 + 1] [i_1] [i_0 - 1])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0])) || (((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_1] [i_1 + 1] [i_5] [i_5] [i_6]))))) & (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0 - 1])) ? (var_3) : (((/* implicit */int) var_1))))))) ? (max((arr_4 [i_6 - 4]), (((/* implicit */unsigned long long int) var_4)))) : (arr_6 [i_1 + 1] [i_1 + 1])));
                            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_17 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) max(((signed char)7), (((/* implicit */signed char) (_Bool)1)))))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-29)) / (((/* implicit */int) arr_11 [i_6 + 3] [i_1 + 1] [(_Bool)1] [i_1] [i_0 - 1])))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_7 = 2; i_7 < 12; i_7 += 2) 
                {
                    arr_22 [i_7] [i_7] [(short)7] [6LL] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)11316)) ? (((/* implicit */int) (unsigned short)62666)) : (((/* implicit */int) (signed char)107))))));
                    arr_23 [i_0] [i_1] [i_7] = ((/* implicit */signed char) ((((arr_6 [i_7 + 3] [i_7 - 1]) - (arr_0 [i_0 - 1]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((-5501483287847466894LL), (((/* implicit */long long int) var_4)))))))));
                    var_17 -= ((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */short) ((signed char) arr_8 [i_0] [i_0 - 1] [i_1] [i_7 - 2])))));
                    var_18 = ((/* implicit */int) (+(min((((/* implicit */long long int) max((((/* implicit */int) arr_16 [i_0] [i_0] [i_0])), (arr_10 [12ULL] [i_0] [i_1] [i_7])))), (((arr_5 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned short)4] [i_0] [i_0] [i_0])))))))));
                }
                /* vectorizable */
                for (signed char i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    var_19 -= ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) var_3)))));
                    var_20 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (var_6))) == (((/* implicit */unsigned long long int) arr_21 [i_0 - 1] [i_0 - 1] [i_1 + 1]))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 3; i_9 < 15; i_9 += 2) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_8] [i_0] = ((/* implicit */signed char) ((short) ((unsigned short) var_3)));
                        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_0 - 1])) ? (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_19 [i_0 - 1] [i_0] [i_0 - 1])));
                    }
                    for (signed char i_10 = 3; i_10 < 15; i_10 += 2) /* same iter space */
                    {
                        arr_34 [i_8] = ((/* implicit */unsigned char) arr_33 [i_8] [i_10]);
                        var_22 = ((/* implicit */unsigned short) arr_1 [i_10 + 1]);
                    }
                }
                for (unsigned short i_11 = 2; i_11 < 12; i_11 += 2) 
                {
                    var_23 = ((/* implicit */int) arr_14 [2LL] [2LL]);
                    arr_37 [i_0] [i_0] [i_11] [(signed char)9] = ((/* implicit */long long int) arr_14 [7U] [i_11]);
                    /* LoopNest 2 */
                    for (signed char i_12 = 3; i_12 < 14; i_12 += 2) 
                    {
                        for (signed char i_13 = 1; i_13 < 15; i_13 += 4) 
                        {
                            {
                                arr_42 [i_0] [13ULL] [i_1 - 1] [i_11] [i_12] [i_12] [i_13] = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) (short)9483)))));
                                arr_43 [i_0] [i_0] [i_12] [i_12] [i_13] = ((/* implicit */signed char) (-(((((arr_17 [i_0 - 1] [i_1 + 2] [i_12 + 1] [(short)1]) + (9223372036854775807LL))) << (((((arr_17 [i_0 - 1] [i_1 + 2] [i_12 - 3] [i_12 - 3]) + (2958441591750216390LL))) - (29LL)))))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((unsigned long long int) (signed char)5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((_Bool) (signed char)28)), (((((/* implicit */int) (_Bool)1)) >= (arr_10 [i_1 + 2] [i_1 + 2] [i_12] [i_12]))))))) : (((unsigned long long int) arr_7 [i_12 + 1]))));
                            }
                        } 
                    } 
                }
                arr_44 [i_1 + 1] = ((/* implicit */long long int) arr_27 [i_0 - 1] [i_1]);
                arr_45 [i_1] = ((/* implicit */_Bool) (-(((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) * (var_4))))));
            }
        } 
    } 
}
