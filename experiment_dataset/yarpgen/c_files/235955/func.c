/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235955
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), ((~(var_7)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) var_9);
        var_17 = ((min(((-(arr_0 [i_0] [9]))), (arr_0 [i_0] [4]))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) -6051491081275673896LL))));
    }
}
