/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40988
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(503315857U)))) ? ((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1891731102)) ? (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (short)13010)))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
        arr_2 [i_0] = ((/* implicit */short) 3486545129217333018LL);
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) 301291244)) ? (((/* implicit */long long int) 1891731102)) : (2413458006800875364LL))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 4005986887U)) ? (6611275330839372906LL) : (((/* implicit */long long int) 301291246))));
        var_18 *= ((/* implicit */unsigned char) (-(1891731102)));
    }
}
