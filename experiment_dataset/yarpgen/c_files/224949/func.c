/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224949
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(6917529027641081856LL)))) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 2]))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_1)))))));
        var_16 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-24354)) : (((/* implicit */int) (_Bool)0))));
        var_17 |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    var_18 = ((/* implicit */int) var_4);
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-((-(var_8))))))));
    var_20 -= ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_5))));
}
