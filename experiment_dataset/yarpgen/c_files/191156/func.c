/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191156
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
    var_10 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) var_9));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) arr_4 [i_1]);
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) - (((((/* implicit */long long int) var_3)) - ((~(arr_4 [i_1])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) ((int) arr_1 [i_1] [i_2]));
            arr_8 [4U] [i_2] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) 8388607U)) : (-7004080240757519519LL)))) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (arr_3 [i_1]));
        }
        for (short i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((36028797018963967LL), (((/* implicit */long long int) (_Bool)1))))) ? (max((14674929458277968591ULL), (14619979636325729889ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_3]))) : (arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
            arr_11 [i_1] = ((/* implicit */unsigned int) ((long long int) (signed char)-38));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_9 [i_1] [i_1]), (((/* implicit */short) var_0))))) ? (((((/* implicit */int) (short)17672)) & (((/* implicit */int) (unsigned short)20)))) : ((~(((/* implicit */int) ((_Bool) 576179277326712832ULL)))))));
            var_16 = (((+(((/* implicit */int) var_0)))) * ((+(((/* implicit */int) (unsigned short)3)))));
            arr_12 [10LL] [i_1] [10LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((892514394520620242LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6804899077560820927ULL)));
        }
        var_17 = ((/* implicit */unsigned char) var_5);
        arr_13 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 14524027177352096513ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_1]))), (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (_Bool)0)) : (-221937714)))), (arr_4 [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1])))))));
    }
}
