/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51861
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (unsigned char)236)))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((var_6) || ((!(((/* implicit */_Bool) var_8))))))), ((~(var_8)))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) min(((-((-(((/* implicit */int) (_Bool)1)))))), ((((-(((/* implicit */int) var_6)))) ^ (((/* implicit */int) arr_0 [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_3] = ((/* implicit */_Bool) (~(1790351550)));
                                var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1790351550)) ? (-851019180) : (-1113768427)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1309390683569709340LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) : (((((/* implicit */_Bool) var_5)) ? (1504701374646984294LL) : (((/* implicit */long long int) var_7)))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [7ULL] = ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)20)))))))) : (((max((((/* implicit */unsigned long long int) var_10)), (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) 1790351550)) || ((_Bool)1))) ? ((-(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            arr_24 [i_6] [i_1] [i_1] [i_6] &= ((/* implicit */unsigned int) (+(((851124520222960418LL) / (((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_0] [i_6] [i_0])))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_1] [i_7] [i_8] [i_8] = ((/* implicit */signed char) (!(((var_8) != (((/* implicit */unsigned long long int) 1642864794))))));
                                var_13 = ((/* implicit */short) var_7);
                                var_14 *= ((/* implicit */unsigned char) (~((~(((/* implicit */int) (signed char)-102))))));
                                var_15 += ((/* implicit */short) (-(((/* implicit */int) (signed char)-48))));
                            }
                        } 
                    } 
                    var_16 = (((((~(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_7] [i_7])))) + (2147483647))) << (((((((/* implicit */int) (unsigned char)251)) | (((/* implicit */int) var_1)))) - (255))));
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                {
                    var_17 += ((/* implicit */unsigned char) ((((var_6) && ((_Bool)0))) ? (((/* implicit */int) arr_3 [i_1 + 2])) : (((/* implicit */int) var_1))));
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((~(851124520222960425LL))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_39 [i_0] [i_1 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((((/* implicit */unsigned long long int) var_3)) + (15224584509177519689ULL))) - (15224584511877544784ULL)))))) ? ((~(arr_31 [i_10] [2ULL] [i_1] [2ULL] [i_0]))) : (((/* implicit */long long int) (+((~(((/* implicit */int) arr_0 [i_10])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_10)))) ? (((/* implicit */int) max(((short)511), (((/* implicit */short) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((((/* implicit */_Bool) arr_44 [i_1 + 4] [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)30788)) && (((/* implicit */_Bool) var_5)))))))));
                                var_19 ^= (((+(min((arr_31 [i_0] [(_Bool)0] [i_10] [i_11] [i_12]), (((/* implicit */long long int) var_4)))))) != (((((var_0) + (9223372036854775807LL))) << (((((/* implicit */_Bool) arr_31 [i_0] [(_Bool)1] [i_10] [i_11] [i_11])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_0] [i_1 + 4] [i_10] [i_11] [4] [i_0])))))));
                                arr_45 [(unsigned short)2] [(unsigned short)2] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) : (var_5))), (((/* implicit */unsigned long long int) arr_13 [i_1 - 3] [i_1 - 2] [i_1 + 1]))))));
                                arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)14))))));
                                arr_47 [i_0] [i_1 + 4] [i_10] [i_11] [i_1 + 4] [i_12] [i_12] = ((/* implicit */unsigned long long int) (_Bool)0);
                            }
                        } 
                    } 
                }
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : ((+(var_0)))))));
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 9; i_14 += 3) 
                    {
                        for (int i_15 = 3; i_15 < 9; i_15 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)74)))) && ((!((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))));
                                var_22 &= ((/* implicit */unsigned int) (+((-(var_10)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
    {
        arr_57 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372036854775799LL), (((/* implicit */long long int) 1790351550))))) ? ((~(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (short)27364))))))) ? (((((/* implicit */_Bool) arr_56 [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (851124520222960418LL))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_9)))))))));
        arr_58 [i_16] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(1017832208U)))), (max((((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) 2046LL))))));
    }
    var_24 = ((/* implicit */short) (-(((var_4) ? ((~(((/* implicit */int) var_9)))) : ((~(var_10)))))));
    var_25 = ((/* implicit */long long int) (unsigned char)224);
}
