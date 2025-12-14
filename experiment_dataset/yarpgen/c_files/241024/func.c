/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241024
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    var_12 = ((/* implicit */short) 2220645800U);
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) var_5);
                }
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) -1600567268)) != (var_1))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_3]))))) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)13746)) : (((/* implicit */int) arr_1 [i_1]))))) * (arr_0 [i_1])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 4; i_4 < 10; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 4; i_5 < 10; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */short) (+(18446744073709551615ULL)));
                            var_15 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 - 1] [3U] [i_3] [i_4 - 4] [i_5]))) < ((-(1048320U)))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-72)) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_3] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) var_1))))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 1048338U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51792))) : (4293918957U)))))));
                        }
                        for (int i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_6 + 1] [i_6 + 3])) ? (((/* implicit */int) (unsigned short)13746)) : (((/* implicit */int) (unsigned short)13746))));
                            arr_16 [i_0] [i_1] [i_1] [(signed char)0] [i_4] [i_3] &= ((/* implicit */unsigned long long int) var_5);
                        }
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            arr_21 [i_0] [i_1] [i_3] [i_1] [i_4] [i_0] = ((/* implicit */long long int) ((1741709700740965249ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_19 += (unsigned char)236;
                            var_20 = ((/* implicit */long long int) (signed char)-99);
                        }
                        var_21 = ((/* implicit */unsigned int) max((var_21), ((+(arr_18 [i_4] [i_3] [0LL] [i_4] [12U] [i_4 - 2] [(unsigned short)2])))));
                        arr_22 [i_0] [i_0] [i_0] [(short)0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [i_1] [i_4 - 3])) ? (((/* implicit */long long int) -1486255680)) : (var_8)))));
                        var_22 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_10))));
                        var_23 = ((/* implicit */int) 4293918957U);
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((arr_15 [i_0] [i_1] [i_1] [i_8] [i_9] [i_0]) ? (arr_18 [3U] [i_0] [i_1] [i_3] [i_3] [i_8] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (arr_5 [i_0] [i_1] [i_3])));
                            var_25 = ((/* implicit */signed char) (+(((arr_15 [i_0] [i_1] [i_3] [i_8] [5U] [i_0]) ? (((/* implicit */int) arr_17 [7LL] [i_0] [i_3] [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_10 [3ULL] [3ULL] [i_3]))))));
                            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) > ((+(var_7)))));
                        }
                        arr_29 [i_0] [12U] [i_3] [i_8] = ((/* implicit */short) (unsigned short)65535);
                        arr_30 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1868197791U)));
                    arr_31 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) ^ ((~(((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) : (2426769505U)))))));
                }
                var_28 = ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_29 ^= ((/* implicit */_Bool) var_10);
    var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)127)), ((+(186814508U)))));
}
