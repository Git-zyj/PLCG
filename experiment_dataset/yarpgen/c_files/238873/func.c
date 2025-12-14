/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238873
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((max((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_0 [9]))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))))));
        var_14 = ((/* implicit */long long int) ((((unsigned int) max((var_11), (((/* implicit */short) (_Bool)1))))) & (((/* implicit */unsigned int) (~(-381541749))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_5))));
    }
    var_16 = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_1))));
}
