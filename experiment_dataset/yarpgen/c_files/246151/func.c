/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246151
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)128))));
    var_13 += ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [(unsigned char)10])) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) var_1))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) (_Bool)0));
    }
    for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_15 += ((/* implicit */_Bool) min((((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) arr_3 [i_1])))))), (min((arr_4 [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)236))))));
        var_16 &= ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_7 [i_2] = arr_6 [i_2];
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_17 = ((/* implicit */_Bool) var_9);
            var_18 += ((/* implicit */unsigned long long int) arr_8 [i_3] [i_2]);
        }
    }
}
