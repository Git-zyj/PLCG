/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219016
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((_Bool) max((2700357771U), (((/* implicit */unsigned int) (short)-17031)))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-17037)) ? (1594609510U) : (1594609525U)));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) var_2);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_13), (((signed char) var_2))))) ? (var_3) : (((long long int) max((((/* implicit */long long int) var_7)), (var_3)))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned int) var_13);
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) (-(-1956251437))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (var_9))))))));
            arr_11 [i_2] = ((/* implicit */signed char) ((int) -2029706260));
        }
    }
    var_19 ^= max((((/* implicit */unsigned int) (+(1061002510)))), (2700357770U));
}
