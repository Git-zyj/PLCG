/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223717
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned short)32084);
        var_13 *= ((/* implicit */unsigned short) var_9);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((min((var_3), (var_8))) < (((/* implicit */unsigned int) (~((((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))))))))));
            var_15 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        }
        arr_6 [i_0] = max((((var_6) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2330439302U)) ? (56780015U) : (((/* implicit */unsigned int) -303179273))))))), (((_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (-8859471122463606055LL)))));
    }
    var_16 = ((/* implicit */_Bool) var_3);
    var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (var_0) : (((/* implicit */long long int) ((unsigned int) (unsigned short)61143))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) (unsigned short)4393))))) && (((-5594772334133100288LL) >= (var_0))))))));
    var_18 = ((_Bool) (unsigned short)61143);
}
