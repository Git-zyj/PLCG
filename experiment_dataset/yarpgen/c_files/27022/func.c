/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27022
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (max(((+(((/* implicit */int) (unsigned char)121)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_2)))))) : (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1])))) : ((+(((/* implicit */int) arr_2 [i_0 - 1])))))))));
        var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) arr_0 [i_0 + 1])), (var_4)))) / (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_7 [i_1] = ((((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : ((-2147483647 - 1)))) << (((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1)))) - (84))))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_1])), ((unsigned short)28134)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)15)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)134)))))));
        var_15 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) max((arr_0 [i_1]), (var_7)))) < (((/* implicit */int) var_1)))));
    }
    var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((short) (short)626))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33056))) : (13350327917904820118ULL)))))));
}
