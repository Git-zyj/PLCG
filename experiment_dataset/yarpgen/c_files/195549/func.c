/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195549
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
        arr_3 [i_0 - 2] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 4; i_1 < 12; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_11 += ((/* implicit */short) (+(arr_9 [i_1] [i_2] [i_2] [i_2])));
                                var_12 = ((/* implicit */short) min((2325746934U), (((/* implicit */unsigned int) (unsigned char)221))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        arr_18 [i_1] [i_6] = ((((arr_11 [i_1] [i_1] [i_2 - 2] [i_6]) != (arr_11 [i_1] [i_2] [i_2 - 2] [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (unsigned char)128)))))) : (((arr_11 [i_1] [i_2] [i_2 + 1] [i_6]) * (arr_11 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_3]))));
                        arr_19 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */signed char) arr_8 [i_3 + 1] [i_2 + 2] [i_1]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_1] = ((/* implicit */short) 7130849680187808655ULL);
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)191)))))));
                            arr_23 [i_1] [i_1] [(short)7] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)45)) ? (15863394751219184389ULL) : (13359525641146259878ULL)));
                            arr_24 [i_1] [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_6)) : (var_7)))) || (((/* implicit */_Bool) 18198406076565031778ULL))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_8] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) arr_12 [i_1] [i_1 + 2] [i_1] [i_3] [i_6] [i_8 + 1]);
                            var_14 = ((/* implicit */short) 2548423446U);
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                        {
                            var_15 &= max((((unsigned long long int) arr_7 [i_6])), (max((((/* implicit */unsigned long long int) var_8)), (arr_7 [i_6]))));
                            var_16 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42))) | (arr_13 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1])))))));
                            arr_33 [i_1] [i_1] [i_3] [i_1] [i_6 - 2] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(4622947713663849062ULL)))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)249)) && (((/* implicit */_Bool) 1746543868U))))))) : (((/* implicit */int) ((unsigned char) arr_17 [i_1] [i_1 - 1] [i_9 + 1] [i_9])))));
                            var_17 = ((/* implicit */long long int) var_3);
                        }
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            arr_36 [i_1 - 1] [i_2 + 2] [i_3] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 2548423465U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)34))));
                            var_18 = ((/* implicit */short) ((((arr_10 [i_2 - 2] [i_3 - 1]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) (~(-2939228701105964534LL))))));
                        }
                        arr_37 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(var_6)))) && (((/* implicit */_Bool) 498651521462945750ULL)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        arr_41 [i_1] [i_2 + 1] [i_3 - 1] [(signed char)12] &= ((((/* implicit */_Bool) ((arr_6 [i_1] [i_2] [(unsigned short)8]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))) : (((((/* implicit */_Bool) 11330023113280301690ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))) : (arr_13 [6U]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 2; i_12 < 13; i_12 += 4) 
                        {
                            arr_46 [i_12 + 1] [i_12 + 1] [i_1] [i_1] [i_2] [(signed char)8] = ((/* implicit */unsigned int) ((2243909323203709496LL) & (((/* implicit */long long int) ((/* implicit */int) (short)16237)))));
                            var_19 |= ((/* implicit */unsigned long long int) ((arr_26 [i_1] [i_1] [i_2 - 2] [i_3] [i_11 + 2] [i_12]) != (4622947713663849056ULL)));
                        }
                        arr_47 [i_1] [i_2 - 2] [i_1] = ((/* implicit */unsigned long long int) var_1);
                        arr_48 [2ULL] [i_1] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)32))));
                    }
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)144)))))) | (((((/* implicit */_Bool) 4622947713663849076ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)10]))) : (var_7)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_15 [0LL] [(signed char)0] [(signed char)0] [i_2] [(signed char)0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)8] [i_1 - 2] [i_2] [i_3] [i_3] [i_3]))))))))) : (((((/* implicit */_Bool) 10228716887361484464ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (3170985066U)))));
                }
            } 
        } 
    } 
}
