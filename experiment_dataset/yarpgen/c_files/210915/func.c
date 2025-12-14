/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210915
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (3342604804895190348ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (-1633465949) : (((((/* implicit */int) ((signed char) var_0))) / (1633465949)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) 3342604804895190371ULL));
        arr_5 [i_0] = ((/* implicit */signed char) var_16);
    }
    var_20 = ((/* implicit */unsigned int) var_2);
}
