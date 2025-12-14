/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52665
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
    var_13 = ((/* implicit */long long int) ((int) var_12));
    var_14 += ((_Bool) var_0);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_5))))))), (((unsigned int) ((int) var_7)))));
        var_16 = ((/* implicit */_Bool) var_5);
        var_17 = ((/* implicit */_Bool) max((((/* implicit */int) min((((short) var_2)), (((/* implicit */short) var_0))))), (max((max((-1949812034), (((/* implicit */int) (unsigned short)23766)))), (((/* implicit */int) var_7))))));
        var_18 += ((/* implicit */short) min((((((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (var_6)))) - (max((((/* implicit */unsigned long long int) var_0)), (var_2))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), ((-(var_6))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) / (var_6))) <= (((/* implicit */int) var_9)))))));
        var_20 = ((/* implicit */_Bool) ((int) ((unsigned short) var_10)));
        var_21 = ((/* implicit */unsigned long long int) (+(1704494462)));
    }
}
