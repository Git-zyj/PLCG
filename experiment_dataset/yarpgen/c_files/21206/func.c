/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21206
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) (+((((+(((/* implicit */int) (_Bool)1)))) - (((var_8) + (((/* implicit */int) (unsigned short)14909))))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)99)), (1046654039U)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)16383)) != (-1270478589)))) : (((((/* implicit */int) (unsigned short)65535)) >> (((arr_1 [i_0]) - (1514151479)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : ((~(arr_0 [i_0])))));
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned short)33202)))))));
        var_18 = ((/* implicit */short) max((((int) ((int) (unsigned short)18384))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    var_19 |= ((/* implicit */signed char) var_7);
    var_20 |= ((((/* implicit */_Bool) ((short) (signed char)-36))) ? (var_7) : (((((/* implicit */int) (unsigned short)52823)) / (((/* implicit */int) (unsigned short)32768)))));
}
