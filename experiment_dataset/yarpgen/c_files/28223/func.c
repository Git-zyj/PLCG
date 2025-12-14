/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28223
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(1119027095))), ((~(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)4])) ? (((/* implicit */int) (unsigned char)2)) : (var_14)))) ? (arr_2 [i_0]) : (arr_1 [i_0])))) : (var_12)));
        var_18 = (((!(((/* implicit */_Bool) (-(4294967295U)))))) ? (max((((/* implicit */long long int) max((((/* implicit */int) (short)0)), (arr_2 [(unsigned short)4])))), (arr_0 [i_0] [(unsigned short)1]))) : (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) (unsigned char)254))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1888912969996916903LL)))) : (arr_0 [i_0] [i_0]))));
    }
    var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (var_7)))), ((~(var_16))))))));
    var_20 ^= ((/* implicit */unsigned short) min((((max((var_12), (((/* implicit */unsigned int) var_8)))) + (((/* implicit */unsigned int) 0)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
}
