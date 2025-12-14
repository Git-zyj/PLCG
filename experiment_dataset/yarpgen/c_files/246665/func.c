/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246665
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
    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (var_1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_17)))))) ? (((/* implicit */int) ((var_17) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))))) : (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((1125899906842616ULL) + (16305438209991211026ULL))) == (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_20 += ((/* implicit */_Bool) (-(((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (arr_2 [i_0])))));
        var_21 -= (+(((var_6) << (((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    var_22 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_16))))))))));
}
