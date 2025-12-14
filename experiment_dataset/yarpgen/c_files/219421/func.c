/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219421
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((-1243954544), (-1243954544))))))), (min((((/* implicit */unsigned int) (_Bool)1)), (4121931191U))));
        arr_5 [i_0] [i_0] = (-(min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((_Bool) arr_1 [i_0]))))));
    }
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_15)), (((unsigned char) 1300116293U))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))));
}
