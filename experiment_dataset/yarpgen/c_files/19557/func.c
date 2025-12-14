/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19557
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
    var_11 |= ((/* implicit */unsigned char) (~(18U)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1 + 1] = ((/* implicit */unsigned int) ((var_4) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 3] [i_1 + 1])) ? (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 3]) : (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2])))))));
                var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_1 [i_0])), (arr_2 [i_0] [9U] [i_0]))), (((/* implicit */int) arr_0 [i_1] [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)129)) != (-1083716319))))) : (var_4)));
            }
        } 
    } 
}
