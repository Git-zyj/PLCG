/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40028
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
    var_19 = ((/* implicit */int) (_Bool)1);
    var_20 = ((/* implicit */unsigned short) var_15);
    var_21 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) == (var_13))) ? (((((min((((/* implicit */int) var_12)), (var_8))) + (2147483647))) << (((((/* implicit */int) var_12)) * (((/* implicit */int) var_16)))))) : (((/* implicit */int) ((short) var_1))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-5533876637166820017LL), (((/* implicit */long long int) max((arr_1 [i_0]), (arr_2 [i_0]))))))) ? (min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) (unsigned char)21)) & (arr_1 [i_0]))))) : (((/* implicit */int) ((unsigned char) ((_Bool) var_16))))));
        var_22 = ((/* implicit */unsigned short) arr_3 [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)103)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned int) var_8)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) var_18)), (var_8)))), (arr_6 [i_1] [i_1]))))));
        var_24 *= ((/* implicit */_Bool) arr_6 [(unsigned short)14] [i_1]);
    }
}
