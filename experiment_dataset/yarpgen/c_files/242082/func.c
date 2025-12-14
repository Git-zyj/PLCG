/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242082
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
    var_11 = ((/* implicit */unsigned char) (((((~(var_1))) + (9223372036854775807LL))) << (((/* implicit */int) var_0))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_10)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)-32744), ((short)32743)))) ? (((/* implicit */long long int) ((var_9) + (((/* implicit */int) (short)-23691))))) : (((((/* implicit */long long int) ((/* implicit */int) max(((short)32743), (((/* implicit */short) (_Bool)1)))))) * (max((-1109864299111741194LL), (((/* implicit */long long int) (short)32748))))))));
                arr_7 [i_1] = ((/* implicit */unsigned int) (short)24112);
                var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned int) var_7)), (1245618849U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (var_9))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
                var_14 ^= var_0;
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */int) min(((short)-23691), (((/* implicit */short) var_4))))) / (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (short)-24113)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min(((-(((/* implicit */int) (short)32743)))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)24113)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2342))) : (var_8))))))));
}
