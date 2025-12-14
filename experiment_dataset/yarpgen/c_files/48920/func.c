/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48920
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
    var_20 = ((/* implicit */signed char) (unsigned short)0);
    var_21 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_13)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = arr_1 [i_0 - 3] [i_0];
        var_22 -= ((/* implicit */_Bool) min((var_19), ((+(((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (_Bool)0))));
    }
    for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) var_4);
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)8)))))));
    }
}
