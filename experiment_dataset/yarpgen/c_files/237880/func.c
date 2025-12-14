/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237880
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
    var_16 = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)127))))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6587750915176720624LL)) ? (min((((/* implicit */long long int) var_1)), (min((((/* implicit */long long int) (unsigned char)211)), (1446784587687966046LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_14)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_18 *= ((/* implicit */long long int) (_Bool)0);
        var_19 = ((((/* implicit */_Bool) (unsigned char)241)) ? (((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
        var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((var_4), (((/* implicit */long long int) var_6))))))) ? (min((((unsigned long long int) arr_0 [(short)0] [8ULL])), (((/* implicit */unsigned long long int) arr_2 [0ULL])))) : (min((arr_1 [4]), (arr_1 [(unsigned short)18])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0]))) != (arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [3])));
        var_21 *= ((/* implicit */unsigned short) ((arr_5 [(signed char)16] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        var_22 = (~(arr_5 [19U] [i_1]));
    }
    var_23 = max((((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (var_3) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) (unsigned char)225)));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (var_9) : (var_9)));
}
