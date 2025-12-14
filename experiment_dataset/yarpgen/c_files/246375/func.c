/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246375
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((~(var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))))));
        arr_5 [i_0] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-125))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            arr_14 [i_1] = ((/* implicit */long long int) var_3);
            var_18 ^= ((/* implicit */signed char) min((min((((/* implicit */unsigned short) max((arr_11 [9LL] [i_1]), (((/* implicit */short) (unsigned char)40))))), (max((var_13), (var_11))))), (((/* implicit */unsigned short) arr_2 [i_1]))));
        }
        var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((1944677070) + (((/* implicit */int) (unsigned short)32805))))), (max((7211531877378835158ULL), (((/* implicit */unsigned long long int) arr_13 [i_1]))))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_11))));
}
