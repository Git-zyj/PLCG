/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228436
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
    var_13 = var_8;
    var_14 = ((/* implicit */short) 2803657383U);
    var_15 = ((/* implicit */signed char) 1491309897U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 *= ((((((/* implicit */_Bool) var_8)) ? (0ULL) : (((/* implicit */unsigned long long int) var_7)))) | (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) : (18446744073709551615ULL))));
                arr_4 [i_0] [i_1] [i_1] &= ((/* implicit */int) ((-8499391594657433786LL) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (signed char)-68);
        var_18 *= ((/* implicit */signed char) var_2);
    }
}
