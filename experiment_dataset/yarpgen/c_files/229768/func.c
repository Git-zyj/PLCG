/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229768
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
    var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)26729))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0)));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((var_1) ? (((/* implicit */long long int) var_0)) : ((~(min((((/* implicit */long long int) var_8)), (var_11))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) var_4);
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)538)), (((int) -1060582884))))) ? (((/* implicit */int) max((arr_0 [(unsigned char)12]), (arr_0 [(unsigned short)0])))) : (((((/* implicit */_Bool) arr_0 [(signed char)12])) ? (((/* implicit */int) arr_0 [(unsigned char)8])) : (((/* implicit */int) arr_0 [(short)16])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
}
