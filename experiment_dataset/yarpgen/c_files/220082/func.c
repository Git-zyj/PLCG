/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220082
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) var_11))))) + (((long long int) arr_0 [(_Bool)1]))));
        var_13 += ((/* implicit */long long int) (-(((/* implicit */int) (short)32767))));
    }
    var_14 = ((/* implicit */unsigned int) (((((~(-1827251086))) >> (((min((var_5), (((/* implicit */unsigned int) var_6)))) - (5332U))))) << (((((min(((((_Bool)1) ? (var_2) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9)))) + (1469014897))) - (28)))));
}
