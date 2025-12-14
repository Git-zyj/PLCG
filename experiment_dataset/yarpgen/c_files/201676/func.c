/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201676
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) 7789800161361682486ULL);
                    arr_8 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)37915))))))) ? (7305757439843032609LL) : (((/* implicit */long long int) ((/* implicit */int) ((((-8936738021520385835LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23371)) ? (3281343542U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((~(var_15))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10389)) << (((/* implicit */int) (unsigned short)0)))))))) & ((~(((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_5);
    var_19 = ((/* implicit */signed char) var_6);
}
