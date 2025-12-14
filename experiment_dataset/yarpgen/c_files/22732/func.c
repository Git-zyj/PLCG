/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22732
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned int) 1410969889))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 17954526165427291761ULL))))) != (((/* implicit */int) var_16))))) : (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) >= (var_0))))));
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_19 *= ((/* implicit */short) max(((+(((/* implicit */int) (short)-31413)))), (min(((-(-1410969886))), ((-(((/* implicit */int) (unsigned char)71))))))));
        var_20 ^= ((/* implicit */unsigned char) 5516964926106193430LL);
    }
    for (int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) (-((-(-1410969875)))));
        var_22 = ((/* implicit */unsigned char) ((arr_2 [i_1]) | (((/* implicit */unsigned int) -1410969893))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)227)))) != ((-(1410969885)))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) (signed char)29))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1410969889)) ? (268435455LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3])))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 2; i_4 < 7; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    {
                        arr_23 [i_3] [i_3] [6ULL] [6ULL] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)35)) + (((/* implicit */int) arr_21 [i_3] [i_3] [i_4] [i_4 + 1] [i_4 + 1]))));
                        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_4 - 1] [i_5] [i_6] [i_6]))));
                        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53380)))))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((11645067616270839415ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59570)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-22)), (var_1))))))) : (min(((~(var_14))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)8)))))))));
}
