/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195815
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
    var_18 = (short)-15962;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 453470806)) ? (-453470804) : (((/* implicit */int) (short)-15953))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (453470806))), (min((((/* implicit */int) (_Bool)1)), (-638295258))))));
                arr_7 [i_1] &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)126)), (((((/* implicit */_Bool) max((arr_6 [i_0] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_16);
    var_21 = ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
}
