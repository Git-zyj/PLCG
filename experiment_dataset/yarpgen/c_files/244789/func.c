/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244789
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
    var_20 = ((/* implicit */short) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)2156)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0 - 3] = ((/* implicit */short) (((+(arr_0 [i_0 + 1]))) % (((/* implicit */unsigned long long int) (((_Bool)1) ? (9206544398913584369LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((3458764513820540928LL) != (((/* implicit */long long int) ((/* implicit */int) (short)14636))))))) ^ (var_2)));
        arr_5 [i_0] = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_3 [(signed char)1])) ? (((/* implicit */unsigned long long int) 2977887187U)) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) -275095058)))), (min((min((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_0 - 2]))), ((-(arr_0 [i_0])))))));
    }
    var_23 *= ((/* implicit */short) min((min((((/* implicit */int) var_3)), ((-(((/* implicit */int) var_10)))))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (max((((/* implicit */unsigned char) (_Bool)1)), (var_4))))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((((((/* implicit */_Bool) -2028047031)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_5))), (((/* implicit */long long int) ((unsigned char) var_9)))))));
    var_25 = ((/* implicit */_Bool) var_16);
}
