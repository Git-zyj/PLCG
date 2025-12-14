/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22387
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((+(18446744073709551615ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))));
                var_10 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (2255195720U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (2255195728U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((2374773646U), (((/* implicit */unsigned int) arr_0 [i_1])))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1594718583))));
}
