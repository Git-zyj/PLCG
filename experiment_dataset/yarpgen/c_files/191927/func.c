/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191927
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
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = ((((((((/* implicit */_Bool) 16260618830694986480ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [(short)1]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [(short)8])))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_11) : (((/* implicit */long long int) (-(var_5)))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30555)))));
                    var_14 = ((/* implicit */unsigned short) arr_1 [i_0]);
                    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3662012258689281413LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (((((arr_0 [(unsigned short)11] [i_1]) >> (((-2004337916) + (2004337964))))) - (min((8880892429027196763ULL), (9385678404890305224ULL)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = ((/* implicit */short) var_1);
    var_18 = ((/* implicit */unsigned long long int) var_10);
}
