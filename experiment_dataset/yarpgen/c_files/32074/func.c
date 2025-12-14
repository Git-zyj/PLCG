/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32074
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_10)) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 398587420U)))) == (max((var_3), (((/* implicit */unsigned int) (signed char)-7)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_9)))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((var_8) ? (arr_1 [i_0]) : (arr_1 [i_0 - 3]))))))))));
        var_18 |= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0])))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)16)) : (arr_0 [i_0]))) : (arr_0 [i_0]))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? ((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((2143212530U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)62557)) - (62554))))) : (((/* implicit */int) (!((_Bool)1))))))));
    }
    var_20 |= ((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_14))))) && (((/* implicit */_Bool) ((unsigned int) -145678782)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_21 = var_13;
        var_22 *= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_7)))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) 1342360235U))));
    }
}
