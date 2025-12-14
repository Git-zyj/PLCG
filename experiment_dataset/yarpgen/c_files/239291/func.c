/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239291
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
    var_18 = ((/* implicit */_Bool) ((var_3) >> (((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_2)) - (15214)))))) ? (min((((/* implicit */unsigned int) var_2)), (var_7))) : (var_5))) - (15187U)))));
    var_19 = ((/* implicit */signed char) min((((unsigned long long int) var_12)), (min((max((1971559508193996465ULL), (((/* implicit */unsigned long long int) 3772991900U)))), (((/* implicit */unsigned long long int) ((var_7) % (((/* implicit */unsigned int) var_6)))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2150402273U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63)))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32862))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-100)) <= (((((/* implicit */int) (signed char)4)) * (((/* implicit */int) (signed char)-36))))))))));
    var_21 -= (~(min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-5423)) : (((/* implicit */int) (unsigned short)33572))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((arr_1 [i_1]) / (var_5)));
            arr_5 [i_1] = ((unsigned int) arr_4 [i_0] [(signed char)8] [i_1]);
        }
        var_23 = ((/* implicit */signed char) ((arr_1 [i_0]) > (arr_3 [i_0] [i_0] [i_0])));
        var_24 = ((/* implicit */signed char) var_12);
    }
}
