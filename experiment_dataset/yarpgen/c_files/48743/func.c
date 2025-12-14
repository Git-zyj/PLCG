/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48743
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_13)) < (((72057594033733632LL) % (((/* implicit */long long int) 1461214209U)))))))) >= (((((/* implicit */_Bool) 265827400267045650LL)) ? (min((1212817925U), (1461214230U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
        var_20 = ((/* implicit */long long int) var_4);
    }
}
