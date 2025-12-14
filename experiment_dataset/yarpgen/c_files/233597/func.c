/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233597
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
    var_14 |= ((/* implicit */signed char) var_9);
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (((((/* implicit */unsigned long long int) 4884074826768333546LL)) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (555701066591950109ULL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 |= ((/* implicit */unsigned char) min((2147483647), ((-((+(((/* implicit */int) var_8))))))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (((/* implicit */int) arr_0 [i_0] [i_0])))) + (((/* implicit */int) max(((signed char)31), (((/* implicit */signed char) var_8)))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_2 [i_0])))))))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) ((_Bool) var_9))) & ((+(((/* implicit */int) (short)-20551)))))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
}
