/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237947
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
    var_15 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_13);
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_9))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [(short)0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)8179)), (var_6))) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        arr_12 [i_3 + 1] [i_3] [(signed char)8] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8184))) : (-1LL)))) > (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_1])) ? (arr_10 [i_3 - 1] [(signed char)5] [i_2] [i_3] [i_2]) : (arr_10 [i_3 + 2] [i_1] [(unsigned short)0] [3LL] [i_0])))));
                        var_17 *= ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_14)) : (var_8))) >> (((((unsigned int) var_5)) - (31196U)))));
                        arr_13 [i_0] [i_1] [(unsigned short)12] [i_3 - 1] &= ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [12U] [i_0]))) & (min((((/* implicit */unsigned int) (unsigned short)8179)), (2859825184U))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_16 [12LL] |= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_4]) || (((/* implicit */_Bool) var_2)))))) > (min((var_14), (((/* implicit */unsigned int) arr_14 [i_4])))))) ? (max((((long long int) (unsigned short)57329)), (((/* implicit */long long int) (unsigned short)57364)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4])) << (((var_14) - (3061757898U)))))) ? (min((((/* implicit */long long int) (signed char)-48)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-8)))))));
        arr_17 [i_4] = arr_14 [i_4];
        arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_4])) ? (4497924698192892321LL) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7))))))))));
        arr_19 [i_4] = ((/* implicit */unsigned char) var_0);
    }
}
