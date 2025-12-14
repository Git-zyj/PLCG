/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223321
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
    var_18 = var_7;
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (min((-2101263554), (((((/* implicit */_Bool) 3208040423689508040ULL)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (_Bool)1)))))) : (-2101263554)));
                    arr_10 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0 + 2])) >= (var_15))))) : (((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (2337012035067137236ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0 + 1]))) : (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11)))));
                    var_19 = ((/* implicit */long long int) min(((+(var_7))), (min((((/* implicit */unsigned int) arr_4 [i_0 + 1] [i_0 + 1])), (min((var_14), (((/* implicit */unsigned int) var_8))))))));
                    arr_11 [3U] [3U] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0])) : (2101263554)))));
                        arr_21 [i_0 + 2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) arr_3 [i_5 + 1]);
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0]))));
                        var_22 = ((/* implicit */_Bool) arr_6 [i_0 - 1] [i_6 - 2] [i_6]);
                        arr_26 [i_3] [i_4] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)10109)) ? (-2101263556) : (((/* implicit */int) (signed char)82)))) | (((/* implicit */int) arr_19 [i_0] [i_4 - 1]))));
                        arr_27 [i_0] [(unsigned short)11] [i_0 - 1] [i_4] = ((/* implicit */unsigned short) 18446744073709551615ULL);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)0), (arr_2 [i_4 + 4])))) | (((/* implicit */int) ((signed char) var_4)))));
                        arr_30 [i_0] [i_3] [i_4] [i_7] = ((/* implicit */short) min((((int) arr_17 [i_0] [i_4 - 1] [i_4 - 1] [i_7] [i_7] [i_4])), (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_10))))));
                        var_24 = ((/* implicit */int) max((var_6), (var_3)));
                        arr_31 [i_4] [i_7] [i_4] [i_7] = ((/* implicit */signed char) (-((+(((0ULL) * (((/* implicit */unsigned long long int) var_17))))))));
                        var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))))), (max((((/* implicit */unsigned long long int) arr_28 [i_0 + 1] [i_4 + 4] [i_7] [i_7])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (15238703650020043575ULL)))))));
                    }
                    var_26 = ((arr_12 [2ULL] [i_3] [i_4]) | (min((((/* implicit */unsigned long long int) ((-4016980744133705733LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18816)))))), (min((((/* implicit */unsigned long long int) 2705534550503253017LL)), (var_9))))));
                    var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) arr_29 [i_0 + 2] [i_3] [i_4]))) ? ((-(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) (_Bool)0)))) / ((((-(((/* implicit */int) (signed char)61)))) + (arr_1 [i_4 + 1])))));
                    arr_32 [i_0 + 1] [i_3] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_3])) ? (((/* implicit */unsigned int) arr_28 [i_0] [i_3] [i_0] [i_3])) : (var_2)))))));
                }
            } 
        } 
        arr_33 [i_0 - 1] = ((/* implicit */int) (-(9272401257287535961ULL)));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        var_28 = (-(((((/* implicit */_Bool) 2225967691U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_34 [i_8] [(signed char)21])))));
        var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) % (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29)))))));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
                {
                    {
                        arr_42 [i_11 + 2] [i_11] [i_11 + 2] [i_11 + 2] = ((/* implicit */long long int) var_14);
                        var_30 ^= ((/* implicit */signed char) arr_37 [i_11 + 2] [i_11 + 2]);
                        var_31 = ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_9] [i_9]))) : (var_9)))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_11 + 1] [i_11 - 1] [(signed char)9] [i_11])))));
                    }
                } 
            } 
        } 
    }
}
