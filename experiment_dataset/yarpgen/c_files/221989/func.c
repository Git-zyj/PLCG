/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221989
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
    var_11 = ((/* implicit */signed char) (~(var_4)));
    var_12 = (~(4172604029U));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-66)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3671526239U)))))))))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 993464590U)))))));
    }
}
