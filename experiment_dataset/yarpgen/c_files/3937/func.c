/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3937
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
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */long long int) -302777830)), (var_16))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) > (((((/* implicit */_Bool) 1394910008U)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (short)-8856))))));
        var_19 = ((/* implicit */long long int) (short)-8856);
        var_20 = ((/* implicit */unsigned int) ((short) ((_Bool) var_2)));
        arr_4 [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (short)-8856))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_21 -= ((/* implicit */unsigned char) max((((unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (signed char)19)))))));
        arr_7 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)255)), (arr_5 [i_1])))) ? (((/* implicit */int) max((arr_6 [i_1]), (((/* implicit */short) (signed char)-39))))) : (((((/* implicit */_Bool) 2066416075U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)21390))))));
    }
}
