/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241736
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
    var_19 = ((/* implicit */long long int) ((_Bool) var_0));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((var_14), (((/* implicit */long long int) min(((~(var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)0)))))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */_Bool) arr_2 [(_Bool)1]);
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(max((((arr_2 [i_0]) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (29468))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_1 [3LL] [i_0 - 1])))))))));
    }
}
