/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245368
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) 4098724026U);
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 511LL))));
                                var_16 = ((/* implicit */unsigned int) max((((-3627951895156201558LL) + (((((/* implicit */_Bool) 511LL)) ? (9223372036854775807LL) : (511LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)448)))))));
                                arr_13 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775785LL)) ? (3627951895156201569LL) : (((max((((/* implicit */long long int) var_0)), (2690058672546619342LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 2063270213U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) : (4294967295U))))))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */long long int) 1010102648U)) + (-169850800106885733LL))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) + (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2U))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (-169850800106885747LL) : (((/* implicit */long long int) 1010102656U))));
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
    var_21 = ((/* implicit */_Bool) var_12);
}
