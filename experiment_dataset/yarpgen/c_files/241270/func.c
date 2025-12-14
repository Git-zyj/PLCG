/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241270
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
    var_19 *= ((/* implicit */unsigned int) var_16);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((((((/* implicit */_Bool) 9949899317721663474ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) | (((/* implicit */long long int) ((var_5) >> (((((/* implicit */int) (unsigned short)28865)) - (28849)))))));
                    var_21 = ((((_Bool) 9223372036854775799LL)) ? (((unsigned int) 1610612736U)) : ((+(var_15))));
                    arr_7 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)63488))));
                    var_22 ^= ((/* implicit */int) (((+(((var_16) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))))))) - (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)219)) ? (2684354577U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7168)))))) : (((((/* implicit */_Bool) 1610612719U)) ? (-7512609822268010895LL) : (-9223372036854775792LL)))))));
                }
            } 
        } 
    } 
}
