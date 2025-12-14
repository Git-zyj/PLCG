/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208538
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)44426)) < (((/* implicit */int) (unsigned short)44424))));
    var_12 = ((/* implicit */signed char) ((((var_9) ? (((((/* implicit */int) (unsigned short)44436)) / (((/* implicit */int) var_7)))) : (((/* implicit */int) var_0)))) ^ (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (-1618235286))), (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned int) (+(((arr_0 [i_0]) / (var_5))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) ((((unsigned int) (_Bool)1)) - (((/* implicit */unsigned int) min((((/* implicit */int) (short)640)), (arr_0 [i_0]))))))) ? (-594891461) : (((((/* implicit */int) max(((unsigned short)44409), (((/* implicit */unsigned short) arr_2 [i_0]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        arr_6 [i_0] = ((/* implicit */short) (unsigned short)21115);
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) ((unsigned char) arr_0 [i_0]))))) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_2 [i_0])))) & (((/* implicit */int) (signed char)63))))));
    }
}
