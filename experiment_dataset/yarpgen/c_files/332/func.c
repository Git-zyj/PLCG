/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/332
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        arr_2 [(unsigned short)18] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((arr_0 [16]), (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [(short)8] [i_0])), ((unsigned short)11618)))) : ((((!(((/* implicit */_Bool) 4977670892410840936ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_1 [i_0 + 1] [i_0])))) / (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24091)) + (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))) ? (max((arr_0 [i_0]), (((/* implicit */int) arr_1 [18ULL] [i_0])))) : (min((arr_0 [i_0 + 1]), (((/* implicit */int) arr_1 [i_0 - 2] [i_0]))))))));
    }
    var_11 = ((/* implicit */short) max((var_2), (((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */unsigned long long int) (~(839451965)))))))));
}
