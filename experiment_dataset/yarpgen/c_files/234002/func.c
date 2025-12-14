/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234002
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (short)32767);
                    arr_10 [i_0] [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (short)16320)) : (((/* implicit */int) var_10))))) <= (arr_4 [i_1 - 1] [i_1 - 1] [i_2 + 1])))), (((((/* implicit */_Bool) ((int) (signed char)-65))) ? (1152921504606846976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [(signed char)2] [i_2 - 1] [i_3] [i_4] [i_3] [i_1 - 2] = ((/* implicit */int) arr_9 [i_0] [i_1]);
                                arr_18 [i_4] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) 17293822569102704653ULL)))));
                                var_12 *= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_2 - 1] [i_1] [i_1]))) != (var_2))))));
                                var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)54191))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */int) (short)10619)) >> (((143552238122434560ULL) - (143552238122434531ULL)))));
    var_15 ^= (~(((/* implicit */int) var_6)));
    var_16 |= ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_4))));
        var_18 += min((((/* implicit */int) ((1668465619U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5])))))), ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)52683)) >= (((/* implicit */int) var_6))))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 4; i_9 < 7; i_9 += 2) /* same iter space */
                        {
                            arr_33 [(unsigned short)1] [i_6] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_6] [i_7] [i_8]))) & (arr_14 [i_9] [i_9 + 3] [i_9 - 3] [i_9 - 1] [i_9 - 1]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)21)) / (((/* implicit */int) (signed char)57)))))))));
                            var_19 -= ((/* implicit */_Bool) arr_15 [i_9] [(unsigned char)12] [i_7] [14ULL] [i_5]);
                            arr_34 [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (1668465619U)));
                            arr_35 [i_5] [i_5] [i_7] [i_8] [i_9] [i_5] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5]))) + (max((((/* implicit */long long int) arr_27 [i_9 - 1] [i_8] [i_5] [i_5])), (((long long int) var_2))))));
                            var_20 = ((/* implicit */unsigned short) 17293822569102704653ULL);
                        }
                        for (unsigned short i_10 = 4; i_10 < 7; i_10 += 2) /* same iter space */
                        {
                            arr_39 [i_7] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((+(var_2)))))) ? (min((arr_38 [i_10 - 1] [i_10 + 1] [i_10 - 3] [i_10 - 4] [i_10] [i_10] [i_10 + 2]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)10619)) > (1935329842)))))));
                            arr_40 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */short) ((((((/* implicit */int) (short)-14634)) + (((/* implicit */int) arr_15 [i_10 - 2] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 4])))) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_10 - 3])) == (((/* implicit */int) (short)8757)))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((17293822569102704653ULL), (((/* implicit */unsigned long long int) var_1))))) ? (arr_4 [i_10] [i_7] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)10619)))))), (((/* implicit */unsigned long long int) var_9)))))));
                            arr_41 [(_Bool)1] [i_6] [(short)1] [i_6] [i_6] [9ULL] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_3), (((/* implicit */long long int) var_6))))))) && (((/* implicit */_Bool) (unsigned short)2388))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) var_8);
                            arr_45 [i_5] [i_6] [i_5] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) 239130616381537981ULL));
                            arr_46 [i_5] [i_6] [i_7] [(signed char)8] [i_11] [i_11] = ((/* implicit */signed char) ((arr_13 [i_5]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                        }
                        var_23 = min((((/* implicit */short) ((((((/* implicit */_Bool) arr_36 [i_5] [i_6] [i_6] [i_7] [i_8])) ? (15568519280619783384ULL) : (var_2))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221)))))), ((short)8828));
                    }
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        arr_51 [i_5] [i_5] [(short)5] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-87)) ^ (((/* implicit */int) (unsigned short)12853))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7] [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_7] [i_12]))))))), (var_5))))));
                        var_25 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */signed char) var_4)))))) <= ((~(arr_4 [i_5] [i_6] [i_6]))))), (((((((/* implicit */int) (unsigned char)186)) & (((/* implicit */int) var_6)))) > ((~(((/* implicit */int) var_6)))))));
                    }
                    var_26 = ((/* implicit */short) min((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (9253728591374415760ULL))))), (((((((/* implicit */_Bool) arr_12 [i_6])) ? (((/* implicit */int) (short)14633)) : (((/* implicit */int) arr_15 [i_7] [i_6] [i_6] [i_5] [i_5])))) ^ (((/* implicit */int) var_5))))));
                }
            } 
        } 
    }
}
