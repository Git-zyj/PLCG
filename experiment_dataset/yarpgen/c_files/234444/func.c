/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234444
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
    var_13 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) ((4142978973U) & (4142978962U)));
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) * (((/* implicit */unsigned int) -1306950030))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (34359738367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) arr_4 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)(-127 - 1))))))));
            }
        } 
    } 
}
