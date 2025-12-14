/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226120
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) 0ULL))) ? (18446744073709551604ULL) : (18446744073709551611ULL))) | (0ULL)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_14)), (18446744073709551614ULL)));
                /* LoopSeq 1 */
                for (signed char i_2 = 4; i_2 < 8; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)31204)))));
                    var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24272))) : (5ULL)))) ? (((/* implicit */unsigned int) -831034079)) : (((unsigned int) 18446744073709551615ULL)))), (((/* implicit */unsigned int) ((short) 8796093022206ULL)))));
                    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) 4294967295U)))), (max((max((((/* implicit */unsigned long long int) (signed char)-105)), (8ULL))), ((~(11924174881934491221ULL)))))));
                }
                arr_8 [i_0] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((0ULL) + (min((var_8), (15499051478138220341ULL)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11)))));
            }
        } 
    } 
}
