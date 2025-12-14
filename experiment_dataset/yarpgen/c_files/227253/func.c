/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227253
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
    var_20 = ((/* implicit */unsigned long long int) (~(((unsigned int) ((((/* implicit */_Bool) var_0)) ? (846767201U) : (1049738892U))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6ULL])) ? (((/* implicit */int) arr_0 [0])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)2]))) % (arr_1 [i_0]))) : (min((arr_1 [(short)6]), (arr_1 [i_0 + 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0 + 2])))) ? (((((/* implicit */unsigned long long int) 846767192U)) | (16025571944286438752ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (short)14646))))))))));
        var_22 -= ((/* implicit */unsigned int) (((~((~(arr_1 [i_0]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)6]))) * (arr_1 [i_0 + 2])))) ? ((-(((/* implicit */int) (short)1107)))) : (((/* implicit */int) (_Bool)1)))))));
        var_23 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_24 = ((/* implicit */unsigned int) var_5);
}
