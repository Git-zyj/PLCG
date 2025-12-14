/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4081
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned short) arr_1 [i_0]);
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 13347592308753948900ULL)) || (((/* implicit */_Bool) 13347592308753948900ULL))));
        var_13 ^= ((/* implicit */long long int) ((_Bool) var_8));
    }
    var_14 = ((/* implicit */signed char) (!(((var_9) < (var_2)))));
    var_15 = ((/* implicit */unsigned int) ((max((max((var_5), (((/* implicit */unsigned long long int) var_0)))), (((13347592308753948900ULL) / (var_5))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 5099151764955602716ULL))))))));
}
