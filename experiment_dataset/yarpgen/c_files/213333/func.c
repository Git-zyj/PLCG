/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213333
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = (_Bool)0;
        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(_Bool)1])) - ((+(((/* implicit */int) (signed char)-1))))))) + (max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 *= (((((_Bool)1) ? (var_6) : ((+(((/* implicit */int) (_Bool)0)))))) >= (((/* implicit */int) ((((/* implicit */int) (signed char)-14)) > ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))))));
        var_16 = ((max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)105))))), (var_10))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14656))));
        var_17 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [(unsigned short)10]))))), (arr_0 [i_1])));
    }
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((768U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
}
