/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241145
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
    var_12 = var_11;
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 += ((/* implicit */unsigned short) ((min((((18446744073709551615ULL) | (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) -934341773)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 18446744073709551610ULL))))));
        var_14 &= ((/* implicit */int) (+(((144115188075593728ULL) & (((/* implicit */unsigned long long int) -934341773))))));
        var_15 &= ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_3 [i_0]))) >= (((((/* implicit */int) var_3)) ^ (arr_0 [(_Bool)0])))))) : (max((min((((/* implicit */int) arr_3 [i_0])), (var_10))), (min((arr_0 [(unsigned char)4]), (945681787))))));
        var_16 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)50)) ? (-934341771) : (-784717290)))) ^ (18446744073709551615ULL)))));
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)103))));
        var_18 = ((/* implicit */int) min(((+(1944810603000534263ULL))), (((/* implicit */unsigned long long int) -1))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 23; i_2 += 1) 
    {
        var_19 = ((var_8) & (934341774));
        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -739201542)) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
    }
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((_Bool) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_8 [i_3])))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3])))))))));
        var_22 -= ((/* implicit */int) (unsigned char)14);
        var_23 = ((/* implicit */unsigned char) arr_7 [18ULL]);
    }
}
