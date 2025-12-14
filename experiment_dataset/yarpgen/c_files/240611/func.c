/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240611
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_14))));
                arr_8 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)102))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_10);
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-23)), (((10930587114303594135ULL) % (((/* implicit */unsigned long long int) var_13))))));
    var_21 = ((/* implicit */unsigned short) (~(1846688716807987704LL)));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) % (((/* implicit */int) (short)-5279)))))));
}
