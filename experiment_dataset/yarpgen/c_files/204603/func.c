/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204603
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), ((~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7)))))) : (min((var_1), (var_8)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) ((unsigned char) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */short) 268435455U);
            var_16 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
            var_17 += ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 140737488355327ULL)) ? (arr_5 [(unsigned short)6] [i_1] [i_0]) : (((/* implicit */unsigned int) 1662479207)))));
            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0] [i_1]));
        }
    }
    var_19 = ((/* implicit */signed char) var_5);
}
