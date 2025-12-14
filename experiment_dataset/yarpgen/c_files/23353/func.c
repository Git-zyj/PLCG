/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23353
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))) >= (((/* implicit */int) (_Bool)1))));
        var_19 -= ((/* implicit */_Bool) ((unsigned short) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_2)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) (_Bool)1);
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)55103)) : (((/* implicit */int) var_12))));
            var_22 = ((/* implicit */int) (+(((3650305748U) << (((((/* implicit */int) (short)7908)) - (7905)))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) (signed char)119))));
        }
    }
    var_24 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_16)))))) ^ (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (short)7905)))))));
    var_25 = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned short) ((_Bool) ((unsigned int) (short)-18121))))));
    var_26 ^= ((/* implicit */long long int) var_7);
}
