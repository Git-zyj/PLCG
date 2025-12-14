/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207813
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((min((min((((/* implicit */unsigned long long int) var_18)), (18074292860778610910ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87)))))))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)29128))) <= (var_4))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-93))) <= (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)98))) : (9223372036854775807LL)))))));
        var_21 = ((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) >= (((arr_0 [i_0] [2U]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-101)))))));
        arr_3 [i_0] [i_0] = var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((long long int) ((var_2) || (((/* implicit */_Bool) arr_6 [i_0] [i_0])))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_6 [i_0] [i_1]))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((signed char) 9223372036854775807LL))))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) var_16);
    }
    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            arr_16 [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(arr_10 [i_3 - 1])));
            arr_17 [i_3] [i_3] = (!(((/* implicit */_Bool) arr_14 [i_3])));
        }
        var_25 |= ((/* implicit */long long int) ((arr_14 [(_Bool)1]) == ((-(min((((/* implicit */long long int) arr_13 [i_3])), (var_15)))))));
    }
    for (signed char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) (signed char)110);
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_11))))));
                        var_28 += ((/* implicit */unsigned long long int) var_4);
                        arr_29 [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)93)) / (var_7))))))));
                                arr_35 [i_5] [3] [i_5] [i_9] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_31 [i_5] [i_5 + 1] [i_5] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-101)) != (((/* implicit */int) (_Bool)0)))))) : (arr_31 [i_6] [i_6] [i_6] [i_6])));
                                var_30 = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5] [i_6] [i_9] [i_10]))) / (var_14))) * (((/* implicit */long long int) var_12))))) && (((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5]))))));
                                var_31 ^= ((/* implicit */long long int) arr_21 [i_5] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5] [(signed char)20] [i_5 + 1] [i_5]))) <= (min((arr_15 [i_5 + 1] [i_5] [i_5 + 1]), (arr_15 [i_5 + 1] [9] [i_5 + 1])))));
        arr_36 [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_24 [i_5 - 1] [i_5 + 1] [i_5])))));
        var_33 *= ((/* implicit */unsigned int) arr_33 [16LL] [(signed char)12] [i_5] [(_Bool)1] [i_5]);
    }
    for (short i_11 = 1; i_11 < 13; i_11 += 4) 
    {
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) (+(4165734599U)))) ? (((/* implicit */long long int) 2203255796U)) : (arr_24 [i_11] [i_11] [i_11]))))));
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((8522854117476343377ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -244315150))))))))), (((((/* implicit */unsigned long long int) 1582665746U)) * (12879191448368713083ULL))))))));
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (+(max((var_7), (((/* implicit */int) (_Bool)1))))))) : (var_15)));
}
