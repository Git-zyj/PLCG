/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241411
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) (signed char)118)) <= (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_3);
        var_12 = (~(max((((/* implicit */int) arr_2 [i_0])), (min((((/* implicit */int) (unsigned char)15)), ((-2147483647 - 1)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25877)) && (((/* implicit */_Bool) (unsigned char)96))));
        var_13 = ((((/* implicit */_Bool) (-(2114775904U)))) ? ((+(((/* implicit */int) arr_1 [(unsigned char)8])))) : (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (signed char)-122)) : (1102878977))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */int) (unsigned short)11357);
        arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)-99))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_3] [i_3])) - (((/* implicit */int) arr_15 [i_3] [i_3])))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)208)))))));
    }
    var_16 = ((/* implicit */signed char) var_3);
}
