/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45596
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (~(min((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_17))), (((/* implicit */unsigned long long int) ((315534241566145077ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_19 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (short)-19823)) + (((/* implicit */int) (unsigned short)46485))))), (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) - (arr_3 [i_1 - 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)68))))) % (((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) ^ (-359646296959296444LL)))));
}
