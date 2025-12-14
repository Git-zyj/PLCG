/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51191
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) min((min((((/* implicit */long long int) (~(-1286517938)))), (((((/* implicit */_Bool) var_4)) ? (19LL) : (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)-88)), (1286517946)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [(signed char)10])))) & (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31364))) + (1393676078U))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((unsigned char) 1217504340U));
}
