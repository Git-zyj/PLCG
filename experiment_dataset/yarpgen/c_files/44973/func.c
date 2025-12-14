/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44973
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
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_11 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_1 [(unsigned char)6]) != (arr_1 [(signed char)4])))) * ((+(arr_1 [6])))));
        var_12 = ((/* implicit */long long int) arr_0 [11]);
        arr_2 [(unsigned char)10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_0 [i_0])) : (-8191904577383506962LL)))) ? ((((!(((/* implicit */_Bool) arr_1 [2LL])))) ? (((/* implicit */long long int) arr_1 [4LL])) : (((long long int) -4877133373351761510LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [6LL]) : (((/* implicit */int) (unsigned char)90)))))));
    }
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((var_9), ((unsigned char)165)))) : (min((((/* implicit */int) (unsigned char)89)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)90)) / (((/* implicit */int) var_6)))) >= (((/* implicit */int) var_0)))))) * (max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) var_9))))), (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
}
