/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223631
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((664256477U), (((/* implicit */unsigned int) (signed char)-126))))) && (var_0)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_21 = ((/* implicit */unsigned int) max((var_21), (min((((/* implicit */unsigned int) arr_0 [i_0 + 2] [(signed char)2])), (((((/* implicit */_Bool) (((_Bool)0) ? (2157694301454682690LL) : (((/* implicit */long long int) 3630710818U))))) ? (((3630710822U) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [6LL]))))))))));
        var_22 = ((/* implicit */unsigned short) ((arr_1 [i_0]) == (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), (max((3630710811U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))));
    }
}
