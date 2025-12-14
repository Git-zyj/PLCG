/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4225
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((short) max((var_1), (min((((/* implicit */unsigned long long int) (unsigned short)63887)), (4952654078915628569ULL))))));
        var_10 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) ((3408363262U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))))) ? (arr_0 [i_0] [i_0]) : (((10818649918758692482ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    }
    var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) (~(0)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (16282139145881522027ULL)))) ? (min((2256768240242553827ULL), (14982016145711216730ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
}
