/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37743
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
    var_10 = ((/* implicit */unsigned int) (((-(((/* implicit */int) max((var_8), (((/* implicit */short) (unsigned char)252))))))) > (((/* implicit */int) var_4))));
    var_11 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)128))))));
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10561))) <= (11882566438956276700ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) > (var_3))))) : (var_3)))));
    var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) 3302539278486348798LL)) : ((+(0ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(3248269957192493434ULL))) >= (9404149879866869403ULL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [13U] [i_0] [i_2] = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                    arr_9 [1U] [i_0] [1U] = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
}
