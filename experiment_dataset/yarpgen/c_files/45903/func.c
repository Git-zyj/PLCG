/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45903
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((unsigned int) (_Bool)1)) ^ (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))))));
                        arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1] [i_3])) : (((/* implicit */int) arr_7 [i_0]))))));
                        var_19 ^= ((/* implicit */short) ((((arr_0 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64883))))) ? (((/* implicit */int) ((var_9) <= (var_6)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_0 [i_3]))))));
                        var_20 = ((/* implicit */signed char) ((short) ((int) (short)19610)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_1 + 1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) ((2063928112687503963LL) == (((/* implicit */long long int) arr_3 [i_1] [i_1 + 1]))));
                            var_21 -= ((/* implicit */int) ((((/* implicit */int) (signed char)-86)) == (((/* implicit */int) (short)-9))));
                            arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31646)) | (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3] [i_0]))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_6 [i_0] [i_2] [i_1] [i_0]))));
                            arr_14 [i_0] [i_3] [i_0] [i_2] [i_1] [i_0] &= ((/* implicit */signed char) arr_2 [i_1 - 2] [i_0] [i_3 - 2]);
                        }
                        for (short i_5 = 3; i_5 < 14; i_5 += 2) 
                        {
                            arr_17 [i_5] [i_3] [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_5 - 3] [i_1] [i_1] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11))) : (arr_9 [i_0] [i_2] [i_3] [i_3 + 1] [i_5 + 2] [i_5 - 1] [i_5])));
                            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_5 - 2] [i_5] [i_1] [i_5])) ? (((arr_6 [i_0] [i_3 - 1] [i_1] [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_3])))) : (((/* implicit */int) arr_5 [i_3 + 1] [i_2] [i_0]))));
                            arr_18 [i_3] [i_1] [i_2] [i_1] [i_5] [i_5] [i_2] = ((/* implicit */int) (~(arr_15 [i_5] [i_5] [i_5 + 1] [i_5] [i_3 - 2] [i_1 + 1])));
                        }
                    }
                    for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */int) max(((unsigned short)16383), (((/* implicit */unsigned short) arr_21 [i_6 - 3] [i_6] [i_6] [i_6]))))) + (((/* implicit */int) ((unsigned short) arr_21 [i_6 - 2] [i_6 + 1] [i_6] [i_6]))))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_0] [i_6 - 2])))) * (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 4])) ? (arr_3 [i_0] [i_1 - 1]) : (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_0] [i_6 - 1])))))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)652), (((/* implicit */unsigned short) arr_5 [i_7 - 1] [i_1 - 3] [i_6 - 2]))))) + (min((((/* implicit */int) min((((/* implicit */signed char) var_12)), (arr_11 [i_1])))), ((+(((/* implicit */int) (unsigned short)65095))))))));
                            arr_24 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_2] [i_1] [i_1] [i_6 + 1])), (((unsigned short) var_2))))) ? (arr_9 [i_0] [i_0] [i_1] [i_2] [i_6] [i_6] [i_7]) : (((/* implicit */unsigned int) ((int) ((unsigned int) (_Bool)1))))));
                        }
                        for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_26 [i_1 - 4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2])) ? (arr_0 [i_0]) : (arr_19 [i_0] [i_0] [i_8] [i_6 - 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_5 [i_0] [i_8] [i_8]))))))) : (max((arr_9 [i_6 - 2] [i_6 - 3] [i_6 - 1] [i_6 - 2] [i_1 - 3] [i_1 - 2] [i_1 - 2]), (arr_16 [i_8] [i_6 - 3] [i_1 - 1] [i_1 - 4] [i_8]))))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)16383), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1483564823)))))) : (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_6]))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_0 [i_1])))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 2; i_9 < 17; i_9 += 4) 
                        {
                            arr_29 [i_2] [i_1] [i_2] [i_6] [i_1] = ((/* implicit */unsigned short) ((_Bool) (unsigned char)0));
                            var_30 += ((/* implicit */_Bool) ((arr_15 [i_1 - 4] [i_1] [i_2] [i_6] [i_9 - 2] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49155)))));
                            arr_30 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_9 - 1])) ? (arr_23 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23)))));
                            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_6 + 1] [i_9] [i_2] [i_0])) && (((/* implicit */_Bool) arr_26 [i_9]))))) ^ (((/* implicit */int) (short)3684))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3067977607U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (arr_16 [i_1] [i_1] [i_2] [i_9 - 2] [i_2]) : (arr_9 [i_0] [i_1] [i_6 - 1] [i_6] [i_9] [i_2] [i_1 - 1])));
                        }
                        var_33 -= ((long long int) (-(arr_26 [i_1 - 1])));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) arr_7 [i_0]))));
                        arr_34 [i_0] [i_1] [i_10] [i_1] [i_0] [i_1] = ((/* implicit */short) ((arr_23 [i_0] [i_1 - 2]) / (arr_23 [i_0] [i_1 + 1])));
                    }
                    var_35 = max((9221120237041090560ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                }
            } 
        } 
    } 
    var_36 = var_15;
}
