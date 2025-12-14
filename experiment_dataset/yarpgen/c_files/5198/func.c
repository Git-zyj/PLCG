/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5198
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
    var_14 ^= 8070450532247928832ULL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 8070450532247928832ULL)) ? (10376293541461622783ULL) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28508)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_3 [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))));
    }
}
