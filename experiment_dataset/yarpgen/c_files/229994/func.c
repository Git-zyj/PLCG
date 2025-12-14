/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229994
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) var_9)), (9178688217244615773ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (var_5)))))))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_14)), (63821749))), (((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned long long int) (unsigned char)112)), (16165362836669186525ULL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_16);
        arr_5 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    }
}
