/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223667
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
    var_18 += ((/* implicit */signed char) var_2);
    var_19 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11149)) ? (var_15) : (var_5)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) (_Bool)0))))) ? (min((-5821749373488110659LL), (((/* implicit */long long int) arr_1 [i_0 + 2])))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 + 2])))))));
        arr_4 [4ULL] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2])))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 + 1]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (2951519708U) : (((/* implicit */unsigned int) ((arr_0 [i_0]) / (((/* implicit */int) arr_1 [i_0 - 2]))))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (max((((/* implicit */unsigned int) arr_1 [i_0])), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (var_4)))))))));
        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)22)));
    }
}
