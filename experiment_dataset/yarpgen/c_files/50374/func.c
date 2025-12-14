/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50374
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
    var_15 = ((/* implicit */signed char) (~((~(((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)125)))), (min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (unsigned char)254))))));
                arr_8 [i_1] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_8))))) * (((/* implicit */long long int) (~(94704552))))));
                var_16 = ((/* implicit */unsigned short) var_8);
                var_17 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)169)) <= (((/* implicit */int) (unsigned char)5))));
            }
        } 
    } 
}
