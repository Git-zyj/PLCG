/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213610
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 4398046511072LL))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (arr_0 [(unsigned short)11]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) 4398046511066LL)) ? (arr_1 [16U]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87)))))))));
        var_20 |= (signed char)15;
        var_21 |= ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0 + 1]))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_22 *= ((/* implicit */unsigned int) var_6);
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 7; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] [i_2] |= ((/* implicit */unsigned char) ((3296945460U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)85))))))));
                        var_23 += ((/* implicit */unsigned int) ((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        var_24 *= ((/* implicit */unsigned char) (-(4398046511066LL)));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (short)7541))));
        arr_19 [i_5] |= ((/* implicit */unsigned char) arr_0 [i_5]);
    }
    for (unsigned char i_6 = 2; i_6 < 23; i_6 += 1) 
    {
        var_26 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-431))));
        var_27 *= ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) (short)0))));
        var_28 |= ((/* implicit */short) (-(((/* implicit */int) min(((short)2), (((/* implicit */short) (_Bool)1)))))));
        var_29 = ((/* implicit */long long int) var_16);
        var_30 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-431))));
    }
}
