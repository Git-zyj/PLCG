/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224475
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_1 + 2] [i_0]))))) : (((((/* implicit */_Bool) 498986227)) ? (((((/* implicit */_Bool) 1442950499U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (7476725431303367287ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)184)))))))));
                    var_13 -= ((/* implicit */unsigned char) var_9);
                    arr_9 [i_0] [i_0] [15U] = ((/* implicit */int) arr_1 [i_0]);
                    arr_10 [i_0] = arr_4 [i_1 + 4] [i_1 + 2] [i_0];
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_1);
                }
            } 
        } 
        var_14 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (7476725431303367287ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) : (((/* implicit */long long int) arr_5 [i_0]))));
        var_16 += ((/* implicit */_Bool) arr_7 [10LL] [(unsigned char)16]);
    }
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (8862401287675273041ULL) : (13043057943621592793ULL)));
    var_18 ^= ((/* implicit */unsigned long long int) (_Bool)1);
}
