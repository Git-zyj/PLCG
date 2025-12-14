/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42040
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((var_0) == (var_1)))), (var_10))) == ((~(max((var_0), (((/* implicit */int) (_Bool)1)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (12022406062780004610ULL)));
}
