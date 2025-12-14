/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32209
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = (short)631;
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (_Bool)1))))), (((arr_1 [i_0]) ? (var_4) : (var_4)))))) : (arr_0 [i_0]));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-19929)))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-(9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -9223372036854775786LL)) ? (((/* implicit */long long int) arr_2 [7])) : (arr_0 [i_0]))), (arr_0 [i_0])))))))));
    }
    var_18 += var_4;
    var_19 = ((/* implicit */unsigned char) var_2);
}
