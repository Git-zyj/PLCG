/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240164
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_9)))) > ((-(var_5)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_0] [i_2] [i_2] [9LL]))))));
                        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) arr_0 [i_2 - 1]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1]))) : (arr_13 [i_0] [i_2 + 1] [i_0] [i_2 + 1])));
                        var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4])))))));
                        var_15 = (~((~(((/* implicit */int) arr_1 [i_0])))));
                        var_16 = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) var_4)))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                        var_18 = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) arr_14 [i_2] [i_2] [i_5 - 1] [i_5 + 1] [2LL])))));
                    }
                    for (unsigned char i_6 = 4; i_6 < 11; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((((((((/* implicit */_Bool) var_4)) ? (arr_13 [i_0] [i_1] [i_1] [i_6 + 2]) : (((/* implicit */long long int) var_9)))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) var_1))) - (42948))))))))));
                        var_20 *= ((/* implicit */signed char) max((max((((/* implicit */long long int) var_4)), (arr_8 [i_2 - 1] [i_2 + 1] [i_6 - 2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [i_6 - 2])))))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0]));
                        arr_21 [i_1] [i_0] [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_0 [i_2 - 1])))));
                        arr_22 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */unsigned int) var_8);
                    }
                    var_21 -= ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) arr_2 [i_2 - 1]))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [9ULL] [12U] [12U] [i_0] [i_1] [(unsigned short)2])))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        arr_26 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_9 [i_0] [(unsigned short)8] [i_0] [i_0] [i_7] [i_7])))));
                        arr_27 [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1])) ? (var_1) : (((/* implicit */int) var_0))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_8] = ((/* implicit */unsigned long long int) ((signed char) (+(var_7))));
                            arr_31 [i_0] [i_0] [i_2] [i_2 - 1] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_5)));
                            arr_32 [(unsigned char)9] [i_1] [i_1] [i_0] [i_8 - 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_8 + 4] [i_8 + 4] [i_8 + 4]))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                        {
                            var_22 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_9))))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))));
                            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) var_1));
                        }
                        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_17 [i_2] [i_0] [i_2] [i_2 + 1]) : (((/* implicit */int) arr_14 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
                            var_24 = (!(((/* implicit */_Bool) var_1)));
                        }
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_41 [i_0] [i_11] [i_11] [i_11] [i_0] [(unsigned char)5] = ((/* implicit */signed char) (-((-(15142560358900688947ULL)))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((unsigned short) max((arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)11] [(signed char)11]), ((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                    arr_42 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)95))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        arr_45 [i_0] = ((((/* implicit */int) var_2)) & (arr_34 [i_0] [i_1] [i_2] [i_2 + 1] [i_1] [i_2 - 1] [i_2]));
                        arr_46 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_2 - 1]) % (arr_0 [i_2 - 1])));
                        var_26 *= (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_2]))) : (arr_40 [(_Bool)1] [i_1] [(_Bool)1] [i_1]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_27 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                        var_28 -= ((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_2 - 1] [i_0]);
                    }
                }
            } 
        } 
        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) arr_5 [i_0]))))) ? (((((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_17 [i_0] [6] [i_0] [i_0])))) ? (max((((/* implicit */unsigned int) arr_44 [i_0] [i_0] [(signed char)6] [i_0] [i_0])), (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((-2147483647) + (((/* implicit */int) (unsigned char)252)))) < (((/* implicit */int) var_3))))))));
        var_30 ^= ((/* implicit */_Bool) ((unsigned long long int) max((max((((/* implicit */long long int) var_8)), (var_5))), (((/* implicit */long long int) arr_16 [i_0] [i_0] [(signed char)2] [i_0])))));
        arr_50 [i_0] = ((/* implicit */unsigned int) (+(((long long int) ((long long int) var_6)))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13; i_14 += 4) 
    {
        arr_54 [i_14] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_14] [i_14] [i_14])))))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) + (var_7)))) / (arr_47 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])));
    }
    for (long long int i_15 = 0; i_15 < 13; i_15 += 4) 
    {
        var_32 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((-788387999) + (2147483647))) << (((((/* implicit */int) (unsigned char)24)) - (24)))))) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (unsigned short)29754)))));
        var_33 = ((/* implicit */long long int) (+((((!(((/* implicit */_Bool) var_3)))) ? (((unsigned long long int) arr_34 [i_15] [i_15] [i_15] [i_15] [i_15] [7] [i_15])) : (((/* implicit */unsigned long long int) ((int) arr_39 [i_15] [i_15] [i_15] [i_15])))))));
        var_34 = ((/* implicit */int) min((((unsigned char) 788388016)), (((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) arr_24 [i_15] [i_15] [7ULL] [i_15] [i_15] [i_15]))))))));
        arr_59 [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_56 [i_15]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_15] [i_15] [i_15] [i_15] [i_15]))))))))));
    }
    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) || (((/* implicit */_Bool) (~(((/* implicit */int) max((var_2), (var_2))))))))))));
    var_36 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) var_8))))), (var_4)));
    var_37 = ((/* implicit */int) (-((-(var_5)))));
    var_38 = ((/* implicit */signed char) (+(((((unsigned long long int) var_2)) >> ((((~(((/* implicit */int) var_3)))) + (58631)))))));
}
