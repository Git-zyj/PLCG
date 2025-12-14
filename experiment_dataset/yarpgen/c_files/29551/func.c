/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29551
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
    var_19 -= ((/* implicit */signed char) ((int) 101945541U));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((2325647963033837635LL), (((/* implicit */long long int) -2140793434)))))))), ((+(((unsigned int) var_9))))));
        var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) var_1)) : (2140793434)))));
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */int) ((signed char) ((((/* implicit */long long int) 2140793445)) - (2325647963033837635LL))))), (((((((/* implicit */_Bool) 4132275641030714271LL)) && (((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-19400))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-28454)))))))));
    }
}
