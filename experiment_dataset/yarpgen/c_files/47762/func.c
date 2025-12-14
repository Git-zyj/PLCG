/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47762
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
    var_15 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 1] [i_0 + 1] [2LL] = ((/* implicit */unsigned long long int) (~(var_5)));
                var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) && (((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) var_3)))))) || (((/* implicit */_Bool) var_9))));
                var_17 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) 8126464U)) | (18446744073709551615ULL)));
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_0 + 2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51747)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_14);
}
