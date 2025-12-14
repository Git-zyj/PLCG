/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248242
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) (unsigned short)14138);
        arr_2 [i_0] = ((/* implicit */short) ((0LL) / (-436895089895893826LL)));
        arr_3 [i_0] = (+(((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)66)) - (((/* implicit */int) arr_0 [i_0]))))) % (min((-436895089895893803LL), (((/* implicit */long long int) arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((short) ((long long int) arr_5 [i_1])));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)1023)))) ? (((/* implicit */int) (unsigned short)14132)) : (((/* implicit */int) (unsigned short)14138))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 6; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    {
                        arr_16 [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) 436895089895893846LL);
                        arr_17 [i_2 + 2] [i_4] [i_3] [i_4 + 2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)22325))) / (max((arr_6 [i_1]), (((/* implicit */long long int) (unsigned char)192))))))) ? (((((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) * (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(signed char)3] [(signed char)3] [(signed char)3] [i_2])))))));
                        var_14 = ((/* implicit */unsigned long long int) arr_0 [(signed char)10]);
                    }
                } 
            } 
        } 
        arr_18 [i_1] [i_1] = ((/* implicit */signed char) max((arr_6 [i_1]), (max((-436895089895893803LL), (((/* implicit */long long int) 4294967295U))))));
        arr_19 [i_1] &= ((/* implicit */int) arr_5 [(short)9]);
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_15 -= ((/* implicit */short) arr_1 [i_5]);
        arr_23 [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min(((unsigned short)30162), (((/* implicit */unsigned short) arr_0 [i_5]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_22 [i_5] [i_5]))))))) + (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5]))))) > (((/* implicit */int) (unsigned short)14128)))))));
    }
    var_16 = ((/* implicit */signed char) min(((unsigned short)35374), (((/* implicit */unsigned short) (short)6166))));
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) arr_1 [i_6]);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) var_3)))))))))));
        var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14128))) ^ (min((arr_26 [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8192)) + (((/* implicit */int) arr_25 [(short)19] [(signed char)18]))))))));
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) arr_0 [(unsigned char)14]))))))) && (((/* implicit */_Bool) 2241190483U))));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
    }
}
