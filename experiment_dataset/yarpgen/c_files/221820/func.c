/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221820
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
    var_11 = ((/* implicit */_Bool) (~(var_7)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [12ULL] [8ULL] [i_1] |= ((/* implicit */unsigned char) max((arr_3 [i_0 + 3]), (((/* implicit */long long int) (unsigned char)111))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 1])))) ? ((~(arr_3 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_0 - 1])))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((unsigned long long int) arr_7 [i_0] [i_1 - 1] [i_2 + 3] [(short)10])), (((/* implicit */unsigned long long int) arr_10 [0LL])))))));
                        var_14 = ((/* implicit */_Bool) (-((+(((arr_0 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2])))))))));
                        arr_11 [i_0] [i_1] [12ULL] [12ULL] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_5 [i_0 + 1] [i_1 - 1] [i_3 - 1])))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [2ULL])) ? (((/* implicit */int) arr_6 [i_0 + 2] [2])) : (((/* implicit */int) arr_6 [i_0 - 1] [10ULL])))))));
                        var_16 = ((/* implicit */long long int) (+(arr_1 [i_0 - 1])));
                        var_17 = ((/* implicit */long long int) arr_1 [i_1]);
                        var_18 &= ((unsigned int) arr_5 [i_4 + 1] [i_1 - 1] [i_2 + 3]);
                        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (arr_3 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_0] [(unsigned short)9] [i_2]))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((long long int) arr_0 [i_0])))));
                        arr_18 [i_0] [i_2] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4294967295U)))) ? ((-(((/* implicit */int) (unsigned char)168)))) : (((/* implicit */int) arr_13 [6ULL] [i_2 - 3] [i_5] [i_5] [i_5] [i_5]))));
                    }
                }
            } 
        } 
    } 
}
