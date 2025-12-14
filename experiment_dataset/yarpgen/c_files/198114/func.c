/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198114
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))))))));
        var_19 = ((/* implicit */long long int) min((var_19), ((~(max((((/* implicit */long long int) ((unsigned char) (unsigned char)59))), (((long long int) (unsigned char)7))))))));
        arr_2 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (-6391346530980183263LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((/* implicit */int) ((unsigned char) (unsigned char)192)))));
    }
    var_20 = ((/* implicit */long long int) (unsigned char)255);
    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (signed char)1))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (var_12) : (((/* implicit */unsigned long long int) var_6))))));
    var_22 = var_16;
}
