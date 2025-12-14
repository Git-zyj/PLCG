/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227739
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */short) ((((unsigned int) min((((/* implicit */long long int) (signed char)-118)), (-1598782616888768638LL)))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)118)), (((unsigned char) arr_0 [i_0]))))) ? (((min((arr_0 [i_0]), (((/* implicit */unsigned int) 2147483647)))) | (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)118))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1])) & (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8)))))))));
    }
    var_17 = ((1598782616888768638LL) >= (min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-123))))), (((1598782616888768638LL) >> (((/* implicit */int) (_Bool)1)))))));
}
