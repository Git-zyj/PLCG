/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190856
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
    var_13 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((12615806212303144149ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        var_15 -= ((/* implicit */long long int) var_12);
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_9))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_17 = ((/* implicit */int) var_5);
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((21ULL), (12615806212303144149ULL)))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (!((_Bool)1))))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (~(5830937861406407468ULL)));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((17ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) == (arr_0 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */unsigned char) (signed char)-77)))))) : (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (0ULL)))) ? (min((((/* implicit */unsigned long long int) var_1)), (var_2))) : (((unsigned long long int) (unsigned char)196))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_0 [13]))));
    }
}
