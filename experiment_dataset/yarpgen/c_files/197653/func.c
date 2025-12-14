/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197653
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
    var_16 *= ((/* implicit */unsigned short) var_0);
    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_12))))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) var_14))))));
    var_18 = var_9;
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((max((288230376151711743LL), (((/* implicit */long long int) var_1)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9054))) <= (15544901699855635131ULL)))))))) <= ((-((-(((/* implicit */int) (short)-13912))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [(_Bool)1] [i_1] [i_1] |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (short)13893)) ^ (((/* implicit */int) var_15)))));
                var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13907))) != (4095ULL))))))) ? (((/* implicit */int) (short)29892)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1526411916860055816ULL)))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (short)13907))) - (((/* implicit */int) ((short) 1757780950232084133LL)))));
            }
        } 
    } 
}
