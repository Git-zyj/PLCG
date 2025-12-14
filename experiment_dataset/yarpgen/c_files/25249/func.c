/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25249
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
    var_13 += var_3;
    var_14 = ((/* implicit */signed char) ((max(((~(var_2))), (((/* implicit */long long int) (signed char)71)))) ^ (((/* implicit */long long int) ((((((/* implicit */int) var_12)) & (((/* implicit */int) var_4)))) | (((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-71))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1))))))))) : (((/* implicit */int) ((((var_9) >= (((/* implicit */int) var_10)))) && (((/* implicit */_Bool) var_5))))))))));
        var_16 = (signed char)-71;
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        var_17 += (+(((/* implicit */int) (signed char)-23)));
        var_18 = ((/* implicit */long long int) min((var_18), (var_0)));
    }
}
