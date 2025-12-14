/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236491
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
    var_19 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0] [i_0]));
        var_20 |= ((/* implicit */unsigned int) ((5878591386492668885LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) ((short) (_Bool)1))))))));
        arr_6 [i_0] = ((/* implicit */short) ((_Bool) arr_3 [i_0] [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((short) arr_2 [i_1] [i_1]))))))));
        var_22 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (signed char)24)), (-7468556475281267981LL))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_2 [i_1] [i_1])))))));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_9)), (arr_0 [i_1] [i_1]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (var_7)))) ? (arr_8 [i_1] [i_1]) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_7 [i_1]))))))))));
        arr_11 [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((18446744073709551612ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_16))))))));
    }
}
