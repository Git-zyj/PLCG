/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52514
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
    var_14 *= ((/* implicit */short) (+(max((((((/* implicit */_Bool) var_10)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (var_2)))));
    var_15 = ((/* implicit */unsigned short) ((var_5) >> (((var_6) - (9270417071800627122ULL)))));
    var_16 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (~(var_9)))) / (max((var_5), (((/* implicit */long long int) var_13)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] &= max((min((((((/* implicit */_Bool) (unsigned short)16474)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49061))))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)16498)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)74)))))))));
    }
}
