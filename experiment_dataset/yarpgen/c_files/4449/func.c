/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4449
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
    for (short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (short)-31020))), (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)49369)))))))));
                var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49369)) ? (((/* implicit */int) (unsigned short)16166)) : (((/* implicit */int) (short)31003))))) + (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))))) ? (((unsigned int) (~(((/* implicit */int) (unsigned short)16166))))) : (max((max((((/* implicit */unsigned int) (unsigned short)0)), (5U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)4026)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 11899475060881823053ULL)) || (((/* implicit */_Bool) -552613070))))), (min(((unsigned short)49350), (((/* implicit */unsigned short) var_3)))))));
}
