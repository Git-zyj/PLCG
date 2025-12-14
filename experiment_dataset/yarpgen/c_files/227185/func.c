/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227185
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
    var_13 &= ((/* implicit */short) ((unsigned int) ((unsigned long long int) ((unsigned int) var_6))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_7))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((var_6) << (((((unsigned long long int) arr_6 [i_0] [i_2])) - (114162293ULL))))))));
                        arr_9 [i_3] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */long long int) 1376368813U);
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((signed char) ((((((/* implicit */_Bool) var_1)) ? (arr_6 [i_2] [i_2]) : (((/* implicit */int) (_Bool)1)))) >> (((2918598484U) & (1376368803U)))))))));
                    }
                } 
            } 
        } 
        var_17 = ((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (1871094737) : (((/* implicit */int) ((_Bool) arr_5 [i_0]))))) << (((((((((/* implicit */int) (unsigned char)180)) + (((/* implicit */int) (unsigned char)56)))) & (((/* implicit */int) (short)26690)))) - (64))));
    }
    var_18 = ((/* implicit */unsigned char) ((((_Bool) var_11)) ? (((unsigned int) ((((/* implicit */_Bool) -1871094731)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)74))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
}
