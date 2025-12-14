/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218079
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
    var_16 = ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_3))))) == (((((/* implicit */_Bool) -1754625623)) ? (((/* implicit */int) (_Bool)1)) : (1751884438)))))) : (((/* implicit */int) var_12)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [(unsigned short)13] = ((((arr_1 [i_0]) == (arr_1 [9]))) ? (((/* implicit */int) arr_2 [(unsigned short)3] [13])) : (((((((/* implicit */_Bool) 997260388)) ? (arr_1 [6U]) : (var_2))) - (arr_1 [3]))));
        var_17 = ((/* implicit */long long int) arr_1 [(_Bool)0]);
    }
}
