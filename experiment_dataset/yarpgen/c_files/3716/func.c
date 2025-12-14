/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3716
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_7)))))))) : (((((/* implicit */long long int) var_5)) % (6061376165870103012LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [6U] = ((/* implicit */signed char) (((~(var_2))) != (var_2)));
        arr_3 [i_0] [(signed char)3] = ((((/* implicit */_Bool) ((6061376165870102982LL) - (((/* implicit */long long int) var_5))))) ? ((-(var_7))) : (var_6));
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0 - 1])))))));
        var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-114))));
    }
}
