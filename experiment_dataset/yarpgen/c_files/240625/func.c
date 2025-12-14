/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240625
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_13 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (var_6) : (((((/* implicit */int) arr_4 [i_2] [(short)9] [i_1] [i_0])) + (arr_3 [i_0] [(signed char)7]))))) - (((/* implicit */int) var_3)));
                    var_14 *= ((/* implicit */short) ((max((arr_1 [i_1 + 2]), (arr_1 [i_1 - 1]))) ^ ((+(arr_1 [i_1 - 2])))));
                    var_15 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_5 [(short)12] [i_1] [i_2]))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((2093699274) >= (1913547260))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_3] [i_3]) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) || (((/* implicit */_Bool) arr_10 [(short)7] [i_3])))))))) ? (0LL) : (((/* implicit */long long int) (+(var_4))))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_22 [i_6] [i_6] [i_6] [i_3] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_6] [i_3]))))), (((long long int) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */unsigned int) arr_13 [(short)8])) : (var_2))))));
                                var_18 += ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_11 [i_6 + 1] [i_6 + 2]))))));
                                var_19 = ((/* implicit */short) ((unsigned short) (((~(var_2))) != (((/* implicit */unsigned int) min((-1430381727), (((/* implicit */int) (short)4463))))))));
                                var_20 -= (((!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) arr_18 [6LL] [i_4] [i_4] [i_4]))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
                                var_21 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))) : (var_9))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_4] [i_6] [(short)1] [i_6] [i_7])))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_3] [i_4] [(signed char)7] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))));
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            arr_29 [i_3] [0U] [i_3] [8LL] [i_3] [(unsigned short)0] = max((arr_15 [i_3]), (((((/* implicit */unsigned int) ((arr_9 [i_4] [i_3]) / (((/* implicit */int) arr_10 [11LL] [11LL]))))) * (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            var_22 = ((/* implicit */short) min((((/* implicit */unsigned short) arr_8 [i_3])), (var_12)));
                            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (int i_12 = 4; i_12 < 12; i_12 += 2) 
                        {
                            {
                                arr_36 [i_3] [8] [i_3] [i_11] [i_12 - 3] [i_3] = ((/* implicit */unsigned short) ((((max((arr_25 [i_3] [i_3]), (((/* implicit */long long int) -1430381727)))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3] [i_3])))))))) ? (((/* implicit */int) max((arr_17 [i_10] [i_3] [i_10 + 1] [i_12 - 2] [i_12] [i_12]), (arr_17 [i_4] [(unsigned short)12] [i_10 + 1] [i_12 + 1] [(short)6] [0U])))) : (arr_18 [i_10 - 2] [i_10 - 2] [i_4] [4U])));
                                arr_37 [i_3] [(signed char)2] [i_3] [i_3] = min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_10 - 2] [(short)0])) != (((/* implicit */int) arr_11 [i_10 + 1] [i_10]))))), (min((((/* implicit */long long int) ((unsigned short) -1913547261))), (arr_7 [i_3]))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) > (max((var_8), (((/* implicit */unsigned int) var_12)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        for (int i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            for (unsigned short i_15 = 1; i_15 < 18; i_15 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        for (short i_17 = 1; i_17 < 18; i_17 += 4) 
                        {
                            {
                                var_25 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_17 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_13] [i_13] [i_13] [i_13])) || (((/* implicit */_Bool) arr_38 [i_14]))))) : (max((((/* implicit */int) arr_40 [i_13])), (var_4)))))) ^ ((~(arr_49 [i_17] [12U] [i_17 + 1] [i_17 - 1] [i_17 - 1] [(signed char)3] [(short)3])))));
                                arr_51 [8U] [i_15] = (i_15 % 2 == 0) ? (((((/* implicit */int) min((arr_45 [i_15] [i_15 - 1]), (arr_45 [i_15] [i_15 + 1])))) << (((((/* implicit */int) arr_45 [i_15] [i_15 - 1])) >> (((((/* implicit */int) arr_45 [i_15] [i_15 - 1])) - (85))))))) : (((((/* implicit */int) min((arr_45 [i_15] [i_15 - 1]), (arr_45 [i_15] [i_15 + 1])))) << (((((/* implicit */int) arr_45 [i_15] [i_15 - 1])) >> (((((((/* implicit */int) arr_45 [i_15] [i_15 - 1])) - (85))) - (18)))))));
                                arr_52 [i_15] [i_16] [i_15] [i_15] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) arr_38 [i_13]))), ((+(var_5)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 1; i_18 < 18; i_18 += 1) 
                    {
                        for (short i_19 = 2; i_19 < 17; i_19 += 2) 
                        {
                            {
                                arr_58 [i_13] [i_15] [i_15] = ((/* implicit */short) ((min((((/* implicit */long long int) ((unsigned int) arr_41 [2LL] [i_19 - 1]))), (arr_44 [i_13] [(signed char)18] [i_15] [i_15]))) + ((~(((((/* implicit */_Bool) (signed char)-74)) ? (arr_44 [i_13] [i_14] [i_15] [i_15]) : (((/* implicit */long long int) arr_57 [i_19] [i_15] [i_19 + 1] [(unsigned short)0] [i_19]))))))));
                                arr_59 [i_15] = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((2093699274), (((/* implicit */int) var_10))))), (max((((/* implicit */unsigned int) var_6)), (((unsigned int) arr_47 [5] [(short)13] [i_15 + 1]))))));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) arr_46 [i_15 + 1] [i_15 - 1])) >= (arr_49 [i_19 + 1] [i_19 + 1] [i_19] [i_19] [i_19 - 2] [i_19 + 2] [i_19]))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_41 [i_18 - 1] [i_18]) != (((/* implicit */long long int) arr_49 [i_19] [i_19] [i_19] [i_19] [12U] [i_19 + 2] [i_19])))))) : (max((var_7), (((/* implicit */long long int) var_3)))))))));
                                var_27 = ((/* implicit */long long int) ((min((2093699274), (((/* implicit */int) (short)29580)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_50 [i_15] [i_14] [i_15]))) >= (arr_49 [(signed char)11] [i_19] [4] [i_15 + 1] [i_14] [11LL] [i_13]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
