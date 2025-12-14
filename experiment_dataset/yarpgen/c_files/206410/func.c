/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206410
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
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_2)) ? (min((var_2), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65531), (((/* implicit */unsigned short) var_0))))))))));
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)65531)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) ((signed char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -1203770190171833687LL)) : (arr_1 [i_0 - 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)65533)), (var_3)))))));
        var_13 = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_1 [i_0 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) < (var_2))))))));
    }
    var_14 &= ((/* implicit */unsigned int) (_Bool)1);
}
