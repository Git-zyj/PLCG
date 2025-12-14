/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196283
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) 6538143617354830715ULL))));
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_16)));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10)) > (((/* implicit */int) (signed char)32))));
            arr_4 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((1931011465549224169LL) << (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
        }
        var_23 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    var_24 = ((/* implicit */int) var_4);
}
