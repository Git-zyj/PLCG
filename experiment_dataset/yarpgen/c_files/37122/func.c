/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37122
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) var_3)), (min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
        var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : ((+(((/* implicit */int) (unsigned short)64404))))));
        arr_2 [i_0] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = min((var_1), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1] [i_1])))))))));
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_5 [i_1] [(unsigned char)14])))))));
        arr_8 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_1] [i_1]))));
        var_17 = ((/* implicit */unsigned char) max(((-((-(((/* implicit */int) arr_4 [i_1] [i_1])))))), ((-((+(((/* implicit */int) var_6))))))));
        var_18 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((12417934195646890083ULL), (6028809878062661533ULL)))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)31))))), (max((((/* implicit */unsigned int) max((arr_1 [i_1] [i_1]), (var_0)))), (((unsigned int) (signed char)24))))));
    }
}
