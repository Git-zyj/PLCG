/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246260
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) arr_2 [(short)0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_11 = ((((arr_0 [i_0]) >> (((var_5) - (2070955211U))))) * (((var_5) - (((/* implicit */unsigned int) var_1)))));
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((9223372036854775794LL) == (((/* implicit */long long int) arr_0 [i_1]))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) == (var_0))))));
        }
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) ^ (arr_1 [i_2] [i_2])));
        var_14 = ((/* implicit */_Bool) ((((((-651090821) + (2147483647))) << (((9100564254853942330LL) - (9100564254853942330LL))))) / (((/* implicit */int) (_Bool)1))));
    }
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_6))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_8)))))))));
}
