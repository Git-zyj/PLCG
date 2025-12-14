/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210756
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_0)))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_5 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0])))) < ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_8)))))));
    }
    var_13 = ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned long long int) 2047)), (((var_11) & (((/* implicit */unsigned long long int) 6006429960884454712LL)))))));
    var_14 = ((/* implicit */unsigned char) (+((+((-(var_9)))))));
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((6006429960884454710LL) >> (((56927848U) - (56927817U)))))))));
}
