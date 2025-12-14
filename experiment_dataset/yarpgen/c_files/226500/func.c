/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226500
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 1553033483)) ? (var_12) : (((((/* implicit */_Bool) (+(2436848535U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_5))))) : (((var_12) >> (((((/* implicit */int) (unsigned char)212)) - (164)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)74)) || (((/* implicit */_Bool) arr_0 [i_0] [i_1]))))) >> ((((~(((/* implicit */int) var_11)))) + (14))))) << (((((((/* implicit */_Bool) var_4)) ? (((long long int) arr_2 [i_0])) : (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))) + (8248126559241206484LL)))));
                    var_16 += ((/* implicit */short) (~((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_6);
}
