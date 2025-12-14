/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230465
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
    var_20 = ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]));
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(4503599627370495LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [8]))))) : ((+(((/* implicit */int) arr_0 [(short)0]))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)193)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) (-(arr_3 [i_1] [i_1])));
        arr_6 [(unsigned short)8] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((short) var_14)));
    }
    var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) (unsigned short)41128)), (5380648443518605168ULL)))));
    var_26 = ((/* implicit */short) ((_Bool) (-((~(((/* implicit */int) (_Bool)1)))))));
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) -6036107388806724787LL)), (var_15)))))) || (((/* implicit */_Bool) var_17))));
}
