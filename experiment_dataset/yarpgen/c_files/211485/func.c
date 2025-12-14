/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211485
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) - (arr_0 [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 + 1]))) : (((((/* implicit */_Bool) (short)29711)) ? (17756735036344785897ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4)))))));
        var_20 = ((/* implicit */short) ((unsigned int) (short)-29690));
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-26743)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)24444)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (max((((/* implicit */long long int) (short)29711)), (466252141568600203LL))))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_8)));
}
