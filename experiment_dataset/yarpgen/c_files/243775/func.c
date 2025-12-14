/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243775
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
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) min((var_2), (((/* implicit */short) var_13)))))))) >> (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_4))))));
    var_19 = ((/* implicit */int) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) ((long long int) (~(((((/* implicit */int) var_4)) % (arr_11 [i_3] [(unsigned short)21] [i_1] [10U]))))));
                        var_21 -= ((((/* implicit */_Bool) min(((unsigned short)37942), (((/* implicit */unsigned short) min(((signed char)4), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [(_Bool)1])) : (min((((((/* implicit */_Bool) var_16)) ? (arr_7 [i_3] [i_3] [i_3]) : (var_6))), (((/* implicit */unsigned long long int) ((0LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-27875)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(signed char)13] [i_0] [i_0])) != (arr_11 [i_1] [i_1] [i_1] [i_4]))))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_4] [i_1])) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_1])))))))));
                        var_24 = ((/* implicit */signed char) arr_4 [i_2] [i_2]);
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        var_26 = ((/* implicit */_Bool) ((((arr_10 [i_0] [i_1] [i_2] [i_2]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2])) - (49247)))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_27 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_1] [19ULL] [6] [i_6] [i_0]))) | (((-7741631658439602486LL) ^ (((/* implicit */long long int) var_8))))))), (((arr_3 [16]) ? (min((((/* implicit */unsigned long long int) var_7)), (arr_4 [i_0] [i_1]))) : ((~(var_9)))))));
                            var_28 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] [i_0]) : (((/* implicit */int) var_12))))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */short) ((unsigned char) arr_10 [i_0] [i_0] [i_0] [i_7 - 1]));
                            var_30 ^= ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_5 [i_0])) != (arr_11 [(_Bool)1] [i_2] [5ULL] [(_Bool)1]))) ? (var_9) : (((unsigned long long int) var_14))))));
                        }
                        var_31 = ((/* implicit */unsigned short) min((arr_6 [17] [2U] [i_5]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
                        var_32 = ((/* implicit */short) min((((/* implicit */long long int) arr_9 [i_1] [i_2] [i_5])), (arr_8 [i_5] [(unsigned short)7] [(unsigned short)3] [(_Bool)1])));
                    }
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_33 = (+(((/* implicit */int) min((arr_20 [i_0] [i_0] [i_8] [21U] [i_2] [i_1] [i_8]), (var_1)))));
                        var_34 = min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)31)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), ((+(arr_22 [i_0] [i_1] [i_2] [i_8] [i_8]))));
                        var_35 = ((/* implicit */unsigned short) ((arr_1 [i_0]) ? (arr_11 [i_0] [(_Bool)1] [i_2] [(_Bool)1]) : (((/* implicit */int) var_7))));
                        var_36 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(unsigned short)13] [10ULL] [10ULL])) || (((/* implicit */_Bool) var_8))))) << ((((+(var_5))) - (2329535234132363054ULL)))))) < (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), (var_15)))));
                    }
                    var_37 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_11 [i_0] [i_1] [i_2] [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_38 = ((/* implicit */int) ((var_16) << (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (arr_17 [i_0] [i_1] [4LL] [i_9] [i_1])))))) ^ (((((/* implicit */_Bool) ((((var_11) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_5 [i_0])) - (67)))))) ? (arr_22 [i_0] [i_1] [i_2] [i_1] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2])))))))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((min((((/* implicit */unsigned long long int) var_2)), (var_5))), (arr_6 [i_0] [i_1] [(short)9]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_20 [i_0] [i_0] [(signed char)9] [i_1] [i_1] [i_2] [(signed char)9]))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 4; i_10 < 22; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((arr_0 [i_10] [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [15] [i_1] [(unsigned short)15] [15]))))) ? (((/* implicit */unsigned long long int) min((3146263559U), (var_3)))) : (6842864317026641211ULL))))))));
                                var_42 = ((/* implicit */int) (_Bool)1);
                                var_43 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / ((-(((/* implicit */int) var_14))))))), ((-(var_5)))));
                            }
                        } 
                    } 
                    var_44 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0]))))), (var_16)))));
                }
            } 
        } 
    } 
}
