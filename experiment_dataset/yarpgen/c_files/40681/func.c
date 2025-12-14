/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40681
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
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 + 1])) ? (2147483641) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])))))));
                var_12 = ((/* implicit */unsigned int) max((var_12), (2812292597U)));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 1]))))) - (((unsigned int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((short) 4145765253U))) + (((/* implicit */int) (unsigned short)17656))))) : ((-(var_6)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)-11564)))))) ? (((/* implicit */unsigned long long int) var_1)) : (min((min((9607791254043654133ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((short) (signed char)9)))))));
    var_14 ^= ((((/* implicit */_Bool) (unsigned short)48310)) ? (((/* implicit */int) var_10)) : (var_1));
}
