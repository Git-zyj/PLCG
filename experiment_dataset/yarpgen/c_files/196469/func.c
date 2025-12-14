/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196469
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
    var_15 ^= ((/* implicit */unsigned long long int) ((unsigned int) (short)(-32767 - 1)));
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)32767)) ? ((+(((/* implicit */int) (unsigned short)63488)))) : (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */int) (short)-32757)))))) + (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((max((6199271302177502924ULL), (6563340479259297674ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 + 1])))))));
                var_18 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32756), ((short)-32734))))) + (((((/* implicit */unsigned long long int) 1240341091)) % (arr_0 [i_1 + 1]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-5160)), (-741166998))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_7);
    var_20 = ((/* implicit */unsigned long long int) var_3);
}
