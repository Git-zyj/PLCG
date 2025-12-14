/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218312
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
    var_20 = ((/* implicit */short) (signed char)0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((((long long int) var_15)), (((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-5)))) / (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (_Bool)1))))))))));
        var_22 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_17)), (arr_2 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_0))))) > (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) ? (-5513506021760693561LL) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) -5513506021760693561LL)))))));
    }
    var_23 -= ((/* implicit */long long int) var_6);
}
