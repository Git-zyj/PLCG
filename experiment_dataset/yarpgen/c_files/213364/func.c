/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213364
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
    var_19 = ((/* implicit */_Bool) var_9);
    var_20 = ((/* implicit */unsigned char) (unsigned short)1);
    var_21 = ((/* implicit */unsigned char) 50331648);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0 + 1]);
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)65505));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0]))) : (((arr_0 [(_Bool)1]) ? (-4321689140648793074LL) : (var_13))))))));
    }
}
