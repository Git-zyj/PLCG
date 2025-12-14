/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215805
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 -= ((/* implicit */int) arr_1 [(unsigned short)2] [i_0]);
        arr_2 [i_0] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [6]) : (((/* implicit */unsigned long long int) 618400321))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (8601285483077194481ULL))))), (max((((/* implicit */unsigned long long int) (-(618400299)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [8ULL]) : (13264359504582859053ULL))))));
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((~(var_11)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_0)) - (62127)))));
}
