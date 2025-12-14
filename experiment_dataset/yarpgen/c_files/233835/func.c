/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233835
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
    var_18 &= ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((arr_0 [i_0]) % ((~(((/* implicit */int) var_12))))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) var_6))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_10)))))))));
        var_20 = ((/* implicit */_Bool) min((var_1), (var_11)));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (_Bool)0);
        arr_6 [i_1] = ((/* implicit */unsigned char) var_0);
    }
    var_21 = (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_12)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)51918)) : (((/* implicit */int) (unsigned short)37031))))))));
    var_22 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))), ((+(((/* implicit */int) (_Bool)1))))))) : (min((max((var_10), (((/* implicit */unsigned int) var_0)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (2294758012U))))));
    var_23 = ((/* implicit */long long int) min((var_5), (((/* implicit */signed char) var_14))));
}
