/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225752
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((long long int) (~(2267022722871442978LL)))))));
    var_11 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [(short)15]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_12 ^= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)49024)) : (((/* implicit */int) (short)32766))));
            var_13 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) 6053444755266661989ULL)))) ? (((/* implicit */int) arr_4 [i_1] [9U] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967287U)))))));
        }
        arr_6 [i_0] = ((/* implicit */_Bool) var_7);
    }
}
