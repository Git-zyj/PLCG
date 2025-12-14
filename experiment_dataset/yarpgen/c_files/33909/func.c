/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33909
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_10 ^= ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned int) (+((-((~(var_5)))))));
    }
    var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -3469350460010953035LL)) || (((/* implicit */_Bool) var_0))))) > ((-(((/* implicit */int) var_2)))))))));
    var_12 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) var_4)))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) - (max((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (714660173)))), (var_7)))));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned char) (_Bool)0))))) / ((-(var_9)))))), (var_1)));
}
