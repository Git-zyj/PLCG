/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214138
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_0)) >= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6178351051255820314ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (1156381620U)))), (min((((/* implicit */unsigned long long int) 727352418U)), (var_14))))))))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) ((unsigned int) (signed char)-1)))) > (max((((((/* implicit */_Bool) -231728394451898522LL)) ? (231728394451898500LL) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) min((3138585674U), (((/* implicit */unsigned int) (short)15116))))))))))));
    var_18 &= ((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned char) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) 6178351051255820314ULL))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1])))) > (((/* implicit */int) ((unsigned char) arr_3 [i_0 + 1]))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) (+(arr_7 [i_0] [(short)5] [(short)5] [i_0]))))) | (0LL)));
                                var_22 = var_6;
                                var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (16842074642258222563ULL)))) ? (((/* implicit */unsigned long long int) max((400403555U), (2519329765U)))) : (var_14)))));
                            }
                        } 
                    } 
                } 
                var_24 += ((/* implicit */unsigned int) (signed char)16);
            }
        } 
    } 
}
