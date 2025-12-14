/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2091
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_12) + (((/* implicit */int) (unsigned short)65535)))) / (((/* implicit */int) var_10))))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) arr_3 [(unsigned char)4] [i_0 + 2]);
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) | (((/* implicit */unsigned long long int) max((-9223372036854775794LL), (((/* implicit */long long int) arr_5 [0U])))))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)60)) | (arr_6 [i_0]))) << (((((823218617) - (((/* implicit */int) var_14)))) - (823218617)))))))))));
                var_18 = ((/* implicit */signed char) arr_1 [i_0] [(unsigned char)8]);
            }
        } 
    } 
}
