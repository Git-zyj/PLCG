/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244433
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_11))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(0))))));
            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0])))) << (((18446744073709551614ULL) - (18446744073709551607ULL)))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 893342118)) / (arr_4 [i_0] [i_1]))))));
        }
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) (unsigned short)31020)) : (((/* implicit */int) (unsigned short)47875))));
    }
    var_21 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
}
