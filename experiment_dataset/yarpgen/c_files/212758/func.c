/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212758
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
    var_16 = ((/* implicit */short) max((((/* implicit */int) var_5)), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)2150))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned short) max((((-1) - (arr_0 [i_0 + 1]))), (((int) arr_0 [i_0 + 1]))));
        arr_2 [i_0] = ((/* implicit */signed char) max((max((var_8), (((/* implicit */unsigned short) var_5)))), (var_8)));
    }
    for (unsigned short i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_13))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (arr_4 [i_1])))) ? (((-1) / (65535))) : (((((/* implicit */int) (unsigned char)97)) + (((/* implicit */int) (signed char)3)))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [(unsigned char)18])), (min((2757793883299195630LL), (((/* implicit */long long int) -1)))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */long long int) arr_6 [i_2] [i_2]);
        arr_9 [i_2] = ((/* implicit */long long int) (unsigned char)3);
        var_19 = ((/* implicit */long long int) var_15);
    }
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) var_3);
        var_20 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27138))) - (max((((/* implicit */unsigned long long int) arr_3 [14LL])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3 + 2])) : (var_3)))))));
    }
    var_21 = max((((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (signed char)-87)), (-2757793883299195630LL))))), (14));
}
