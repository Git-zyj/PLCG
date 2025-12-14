/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21795
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)5)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        arr_3 [6ULL] [i_0] |= ((/* implicit */unsigned short) (unsigned char)251);
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max(((short)14709), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483630)) ? (-4151063029129867687LL) : (arr_4 [i_1])))))))));
        var_17 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) arr_5 [i_1]))))) ? (((/* implicit */int) max((var_8), (arr_5 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)235))))))), (((/* implicit */int) ((((/* implicit */unsigned int) var_1)) < (3990943202U))))));
        var_18 = ((/* implicit */unsigned char) ((unsigned short) ((signed char) ((((/* implicit */unsigned int) var_12)) + (3482512008U)))));
    }
    var_19 = ((/* implicit */short) var_3);
}
