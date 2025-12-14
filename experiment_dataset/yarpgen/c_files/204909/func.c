/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204909
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_17 |= ((/* implicit */signed char) ((((long long int) var_8)) % (((/* implicit */long long int) var_2))));
            var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 312759354)), ((-(14336U)))));
            arr_4 [i_0] [i_1] [6] |= ((/* implicit */long long int) 3370537960U);
            var_19 = ((/* implicit */unsigned long long int) (+(min((0U), (3732543059U)))));
        }
        arr_5 [i_0] = ((/* implicit */int) ((unsigned int) (_Bool)1));
    }
    var_20 = ((/* implicit */unsigned int) ((signed char) (unsigned short)0));
    var_21 = ((/* implicit */unsigned long long int) var_3);
}
