/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217451
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [4LL] [i_0] = ((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)1)));
                    var_13 = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) arr_3 [i_2 - 3])));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_5) * (var_5)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_8) ? (var_4) : (((/* implicit */int) (_Bool)1)))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2147483647)), (4271409478745983994ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)));
    var_16 = ((/* implicit */signed char) var_6);
}
