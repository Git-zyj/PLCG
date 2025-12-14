/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39995
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23221)) && (((/* implicit */_Bool) (unsigned short)23221))))) >> ((((-(((/* implicit */int) arr_0 [i_0])))) + (45)))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-25581))) != (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42314))) / (9223372036854775807LL)))) ? (-962670723598330992LL) : (-9223372036854775807LL)))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) * (min((0ULL), (((/* implicit */unsigned long long int) -9223372036854775794LL))))))) ? (max((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) & (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) <= (arr_1 [i_0]))))))))));
        var_22 = ((/* implicit */short) ((long long int) ((long long int) 1571352296562373755LL)));
    }
    var_23 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))));
    var_24 += ((/* implicit */unsigned long long int) var_19);
}
