/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42908
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
    var_16 = ((int) var_11);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) max((min((var_1), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))), (((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) << ((-(((/* implicit */int) (_Bool)0))))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) 2147483647)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_1)))));
    var_19 = ((/* implicit */unsigned int) max((((((_Bool) 274877906943ULL)) ? (((/* implicit */unsigned long long int) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 511LL)) ? (3ULL) : (var_9))))), (((/* implicit */unsigned long long int) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3009))))))));
}
