/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245825
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? (max((9223372036854775807LL), (var_15))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)111)), (var_1))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_1 - 3]))))) : ((-(((4294967295U) + (((/* implicit */unsigned int) var_2))))))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [24] [24])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [(short)14] [(short)14])))) != (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_1 [(signed char)24] [(signed char)24]))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (arr_0 [i_2])));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) : (7040861733654316317ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))));
    }
    var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) (signed char)75)), (4294967292U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
