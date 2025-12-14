/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214952
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
    var_13 = ((/* implicit */unsigned int) (+((~(((14032884105772184721ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_14 &= ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) min(((short)7403), (((/* implicit */short) (_Bool)1))))), (var_9)))));
    var_15 = var_3;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) (+(((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    var_18 = ((/* implicit */short) 4413859967937366897ULL);
}
