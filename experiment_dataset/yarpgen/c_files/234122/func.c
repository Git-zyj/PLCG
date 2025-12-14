/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234122
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
    var_11 = ((/* implicit */short) min((((/* implicit */int) var_0)), ((+(((/* implicit */int) var_5))))));
    var_12 -= ((/* implicit */unsigned long long int) min((min((var_7), (((/* implicit */long long int) min(((-2147483647 - 1)), (var_3)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) var_10))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)213);
        arr_4 [i_0] = (~(0ULL));
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) arr_5 [i_1]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_6 [i_1])))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1]))))) ? (((((/* implicit */_Bool) max(((unsigned short)65531), (((/* implicit */unsigned short) (unsigned char)76))))) ? (arr_6 [i_1]) : (10476488914885274371ULL))) : (min((((/* implicit */unsigned long long int) arr_7 [i_1])), (max((((/* implicit */unsigned long long int) arr_7 [i_1])), (arr_6 [i_1])))))));
        var_16 &= ((/* implicit */unsigned char) arr_5 [i_1]);
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551613ULL)))) ? (((((/* implicit */_Bool) -741624833)) ? (var_9) : (((/* implicit */int) arr_5 [i_1])))) : ((-(((/* implicit */int) arr_7 [(short)13]))))));
    }
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        arr_12 [i_2] [(short)14] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) arr_9 [i_2 + 1]))))), (arr_6 [i_2])));
        arr_13 [i_2] = ((/* implicit */_Bool) var_2);
    }
}
