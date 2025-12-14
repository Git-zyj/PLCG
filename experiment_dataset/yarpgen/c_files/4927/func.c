/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4927
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (min((1799507862), (((/* implicit */int) (short)946))))))) && (((/* implicit */_Bool) min((var_8), ((signed char)75))))));
    var_15 = ((/* implicit */unsigned long long int) (-(var_1)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (min((var_7), (((var_7) / (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1212717184))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */unsigned char) arr_4 [i_1 - 2] [i_0]);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(-667222460)))) - (((arr_4 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_17 += ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) -3981298705115034800LL);
}
