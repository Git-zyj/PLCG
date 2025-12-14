/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196208
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (max(((+(((/* implicit */int) var_9)))), ((+(((/* implicit */int) arr_1 [i_0 + 1] [i_1]))))))));
                    var_21 ^= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (min((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)173)))), (((var_13) >> (((arr_0 [i_0 - 2]) - (12896420080897454956ULL)))))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_10))) ? (min((((/* implicit */unsigned int) var_13)), (var_6))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))) ^ ((~(16ULL)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_0);
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_17)) == (((/* implicit */int) var_18)))) ? (max((var_5), (((/* implicit */unsigned long long int) (unsigned char)162)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-7631)))))))) ? (((/* implicit */long long int) ((int) max((((/* implicit */long long int) var_13)), (var_4))))) : ((+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_6)) : (var_7)))))));
}
