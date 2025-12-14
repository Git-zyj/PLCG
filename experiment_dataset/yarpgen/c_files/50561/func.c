/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50561
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
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((!(((/* implicit */_Bool) (short)32764)))) && (((/* implicit */_Bool) (-(2823512519454435143ULL)))))))));
    var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((var_3) - (((/* implicit */int) var_17)))), (((((/* implicit */int) (unsigned char)234)) >> (((((/* implicit */int) (unsigned char)51)) - (50)))))))) + (((max((var_13), (((/* implicit */unsigned int) (unsigned char)204)))) / (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)17)), (1899420510))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) >= (arr_1 [i_0]))))) <= (((arr_0 [(unsigned short)1] [i_0]) >> (((var_11) - (15360630331148721164ULL)))))));
        arr_3 [i_0] = ((/* implicit */short) (-(((var_4) / (((/* implicit */unsigned long long int) var_5))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((1899420535) / (((/* implicit */int) var_9))))) + ((+(arr_1 [i_0])))));
    }
}
