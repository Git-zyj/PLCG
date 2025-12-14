/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214339
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
    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_4)))) || (((/* implicit */_Bool) ((int) var_4))))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61349))) + (((((/* implicit */_Bool) (short)10214)) ? (min((7992537557161537654ULL), (((/* implicit */unsigned long long int) (unsigned short)18687)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46848)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) (~(var_7)));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) & (arr_2 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) arr_2 [2U])) ? (((/* implicit */long long int) arr_2 [i_0])) : (var_12))))))));
    }
}
