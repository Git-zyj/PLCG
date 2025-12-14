/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247466
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
    var_19 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) var_9)) > (-538762680)))), (538762695)));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_1))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((538762695), (var_15))), (((/* implicit */int) (signed char)-1)))))));
    var_22 = ((/* implicit */short) ((min((((/* implicit */long long int) ((unsigned int) var_17))), (((long long int) -538762680)))) / (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((int) (signed char)-1));
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((int) arr_1 [i_0] [i_1]))), (((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_14)) : (var_18))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) min((min((((/* implicit */int) var_13)), (arr_4 [i_1]))), (((((/* implicit */int) (short)4315)) / (((/* implicit */int) (signed char)-8))))));
            }
        } 
    } 
}
